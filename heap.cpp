/* Author: Garrett Hay
 * Date  : 4/16/18
 * File  : heap.cpp
 * Description: implementataion of heap class
 */

#include <iostream>
#include <vector>
#include "heap.h"

using namespace std;

heap::heap() {
}

heap::~heap() {
  
}

int heap::size() {
  return buffer.size();
}

void heap::insert(int value) {
    //add element to the end of the heap
    buffer.push_back(value);
    
    int childLocation  = buffer.size()-1;
    int parentLocation = (childLocation-1)/2;
    //if the child is not the root
    if(childLocation != 0) {
      //if parent is less than: Swap
      while(buffer[parentLocation] < buffer[childLocation]) {
	//swap parent and child
	int temp = buffer[parentLocation];
	buffer[parentLocation] = buffer[childLocation];
	buffer[childLocation] = temp;
	//changing for swap
	childLocation = parentLocation;
	parentLocation = parentLocation/2;
      }
    }
    
}

void heap::remove_max() {
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

int heap::max() {
  return buffer[0];
}

void heap::print() {
  int end = buffer.size();
  for(int i=0; i <= end; i++) {
    if(i == 1)
      cout << endl;
    else if(i == 3)
      cout << endl;
    cout << buffer[i] << ' ';
  }
}
