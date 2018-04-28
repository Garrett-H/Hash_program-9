/* Author: Garrett Hay
 * Date  : 4/16/18
 * File  : heap.h
 * Description:
 */

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class heap
{
 public:
  heap();
  ~heap();
  int size();
  void insert(int value);
  void remove_max();
  int max();
  void print();
 private:
  std::vector<int> buffer;
  void removeHelper(int curr, int left, int right);
};

#endif // HEAP_H
