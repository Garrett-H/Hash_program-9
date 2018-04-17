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
  root = buffer[0];
}

template <typename T>
int heap<T>::size() {
  return buffer.size();
}
