#ifndef QUEUE_H
#define QUEUE_H

template<class T>
class Queue {
private:
  // variables
  T* queue;                   // pointer to dynamically allocated array
  int used;                   // number of elements stored in array
  int length;                 // size of array

  // Helper function
  void ensureLength();
  void shiftForward();        // used after an element is dequeued

public:
  // default constructor
  Queue();
  ~Queue();

  // accessor
  bool empty();
  const int& size() const;
  T peek();

  // mutator
  void clear();
  void enqueue(T);
  T dequeue();

};

#endif
