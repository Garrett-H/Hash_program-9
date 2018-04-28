/* Author: Garrett Hay
 * Date  : 4/16/18
 * File  : heap.h
 * Description:
 */

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class heap
{
 public:
  heap();
  //~heap();
  int size();
  void insert(T value);
  void remove_max();
  T max();
  void print();
 private:
  std::vector<T> buffer;
  T root;
};

template <typename T>
heap<T>::heap() {
  //root = buffer[1];
}
/*
template <typename T>
heap<T>::~heap() {
  //root = buffer[1];

}
*/
template <typename T>
int heap<T>::size() {
  return buffer.size();
}

template <typename T>
void heap<T>::insert(T value){

    //add element to the end of the heap

    buffer.push_back(value);



    int childLocation  = buffer.size()-1;

    int parentLocation = (childLocation-1)/2;

    //if the child is not the root

    if(childLocation != 0) {

      //if parent is less than: Swap

      while(buffer[parentLocation] < buffer[childLocation]) {

                //swap parent and child

                T temp = buffer[parentLocation];

                buffer[parentLocation] = buffer[childLocation];

                buffer[childLocation] = temp;

                //changing for swap

                childLocation = parentLocation;

                parentLocation = parentLocation/2;

                if(parentLocation == 0)

                  parentLocation++;

      }

    }



}

template <typename T>
void heap<T>::remove_max()  {
  int curr=1;
  buffer[curr]=buffer.back();
  buffer.pop_back();

  int left  = curr*2+1;
  int right = left+1;
  //loops until buffer is semi-sorted again
  while(buffer[curr] < buffer[left] || buffer[curr] < buffer[right]) {
    int temp;
    //false=left or true=right child is changed
    bool goRight;

    //if left is bigger
    if(buffer[left] > buffer[right]) {
      temp = buffer[curr];
      buffer[curr] = buffer[left];
      buffer[left] = temp;
      goRight = false;
    }
    //if right is bigger || if right is equal to left
    else {
      temp = buffer[curr];
      buffer[curr] = buffer[right];
      buffer[right] = temp;
      goRight = true;
    }
    //afterword move on to the new location
    if(goRight) {
      curr = right;
      left = right*2+1;
      right = left+1;
    }
    else {
      curr = left;
      left = right*2+1;
      right = left+1;
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
  for(int i=1; i != size(); i++)
    cout << buffer[i] << endl;
}

#endif //HEAP_H
