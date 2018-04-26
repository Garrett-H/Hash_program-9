/* Author: Garrett Hay
 * Date  : 4/16/18
 * File  : heap.h
 * Description:
 */

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

template <typename T>
class heap
{
 public:
  heap();
  ~heap();
  int size();
  void insert(T value);
  void remove_max();
  T max();
  void print();
 private:
  std::vector<T> buffer;
  T root;
};

#endif // HEAP_H
