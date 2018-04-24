/* Author: Garrett Hay
 * Date  : 4/16/18
 * File  : heap.cpp
 * Description: implementataion of heap class
 */

#include <iostream>
#incldue <vector>

using namespace std;

template <typename T>
heap<T>::heap() {
  root = buffer[1];
}

template <typename T>
int heap<T>::size() {
  return buffer.size();
}

template <typename T>
void heap<T>::insert(T value) {
  if(buffer.size() == 0)
    buffer[1] = value;
  //add element to the end of the heap
  buffer.push_back(value);
  
  int childLocation  = buffer.size();
  int parentLocation = childLocation/2;
  //if the parent is 1 
  if(parentLocation == 0)
    parentLocation++;
  //if parent is less than: Swap
  while(buffer[parentLocation] < buffer[childLocation]) {
    T temp = buffer[parentLocation];
    buffer[parentLocation] = buffer[childLocation];
    buffer[childLocation] = temp;
    //changing for swap
    childLocation = parentLocation;
    parentLocation /= 2;
    if(parentLocation == 0)
      parentLocation++;
  }
}

template <typename T>
void heap<T>::remove_max() {
  int i=1;
  buffer[i]=buffer.back();
  buffer.erase(buffer.end());
  //loops until buffer is semi-sorted again
  removeHelper(i, i*2+1, i*2);
}

template <typename T>
void heap<T>::removeHelper(int curr, int left, int right) {
  //if the current is less than either of it's children
  if(buffer[curr] < buffer[left] || buffer[curr] < buffer[right]) {
    //used for temp holding
    T temp;
    //false=left or true=right child is changed
    bool goRight;
    
    //if left is bigger
    if(buffer[left] > buffer[right]) {
      temp = buffer[i];
      buffer[i] = buffer[left];
      buffer[left] = temp;
      goRight = false;
    }
    //if right is bigger || if right is equal to left
    else {
      temp = buffer[i];
      buffer[i] = buffer[right];
      buffer[right] = temp;
      goRight = true;
    }

    //afterword move on to the new location
    if(goRight) {
      curr = right;
      left = right*2;
      right = left+1;
      removeHelper(curr, left, right);
    }
    else {
      curr = left;
      right = right*2+1;
      left = right-1;
      removeHelper(curr, left, right);
    }
  }
  //if current is bigger than either leave it
}

template <typename T>
T heap<T>::max() {
  return buffer[1];
}

template <typename T>
void heap<T>::print() {
  for(vector<T>::const_iterator it= buffer.begin(); it != buffer.end(); ++it)
    cout << *it << endl;
}
