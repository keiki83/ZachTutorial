#include "stack.hpp"

// helper function
// this function will be called before adding anything to the stack
// to verify the element will fit. If the stack is not big enough, create
// a new stack and copy the contents of the old stack into the new stack
template<class T>
void Stack<T>::ensureLength() {
  if (count + 1 <= stackSize) {
    // element can be added
    return;
  }
  else {
    // element can't be added
    T* temp = new T[stackSize*2];
    stackSize = stackSize*2;

    for (int i = 0; i < count; i++) {
      temp[i] = stack[i];
    }
    delete[] stack;
    stack = temp;

    return;
  }
}

// default constructor
// create a new stack of size 4
template<class T>
Stack<T>::Stack() {
  count = 0;
  stackSize = 4;
  stack = new T[stackSize];
}

// accessors -- do not modify stack

// empty will return true if the stack is empty
template<class T>
bool Stack<T>::empty() {
  return count == 0;
}

// size will return the number of elements in the stack
template<class T>
int Stack<T>::size() {
  return count;
}

// peek returns the item at the top of the stack
template<class T>
T Stack<T>::peek() {
  return stack[count-1];
}

// mutators -- modify stack

// clear will delete the old stack and create a new stack of size 4
template<class T>
void Stack<T>::clear() {
  delete[] stack;
  stackSize = 4;
  stack = new T[stackSize];

  return;
}

// push will add an item to the top of the stack
template<class T>
void Stack<T>::push(T input) {
  ensureLength();
  stack[count++] = input;

  return;
}

// pop will return and remove the item at the top of the stack
template<class T>
T Stack<T>::pop() {
  return stack[--count];
}
