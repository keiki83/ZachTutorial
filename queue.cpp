#include "queue.hpp"

template<class T>
void Queue<T>::ensureLength() {
  if (used + 1 <= length) {
    // element can be added
    return;
  } else {
    // element can't be added.
    T* temp = new T[length*2];
    length = length*2;

    for (int i = 0; i < used; i++) {
      temp[i] = queue[i];
    }
    delete[] queue;
    queue = temp;

    return;
  }
}

template<class T>
void Queue<T>::shiftForward() {
  for (int i = 1; i < used; i++) {
    queue[i-1] = queue[i];
  }

  return;
}

template<class T>
Queue<T>::Queue() {
  used = 0;
  length = 4;
  queue = new T[length];
}

template<class T>
Queue<T>::~Queue() {
  delete[] queue;
}

template<class T>
bool Queue<T>::empty() {
  return used == 0;
}

template<class T>
const int& Queue<T>::size() const {
  return used;
}

template<class T>
T Queue<T>::peek() {
  return queue[0];
}

template<class T>
void Queue<T>::clear() {
  used = 0;
}

template<class T>
void Queue<T>::enqueue(T input) {
  ensureLength();
  queue[used++] = input;

  return;
}

template<class T>
T Queue<T>::dequeue() {
  T toReturn = queue[0];
  shiftForward();
  --used;

  return toReturn;
}
