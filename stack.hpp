#ifndef STACK_H
#define STACK_H

template<class T>
class Stack {
private:
  // variables
  T* stack;                   // pointer to dynamically allocated array
  int count;                  // count of the number of elements stored in stack
  int stackSize;
  // Helper function
  void ensureLength();

public:
  // default constructor
  Stack();

  // accessor
  bool empty();
  int size();
  T peek();

  // mutator
  void clear();
  void push(T);
  T pop();

};

#endif
