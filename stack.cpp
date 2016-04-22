#include "stack.hpp"

// helper function
// this function will be called before adding anything to the stack
// to verify the element will fit. If the stack is not big enough, create
// a new stack and copy the contents of the old stack into the new stack
template<class T>
void Stack<T>::ensureLength() {

}

// default constructor
// create a new stack of size 4
template<class T>
Stack<T>::Stack() {

}

// accessors -- do not modify stack

// empty will return true if the stack is empty
template<class T>
bool Stack<T>::empty() {

}

// size will return the number of elements in the stack
template<class T>
int Stack<T>::size() {

}

// peek returns the item at the top of the stack
template<class T>
T Stack<T>::peek() {

}

// mutators -- modify stack

// clear will delete the old stack and create a new stack of size 4
template<class T>
void Stack<T>::clear() {

}

// push will add an item to the top of the stack
template<class T>
bool Stack<T>::push(T input) {

}

// pop will return and remove the item at the top of the stack
template<class T>
T Stack<T>::pop() {

}
