#include <iostream>
#include "stack.cpp"
#include "queue.cpp"


int main() {
    Queue<int> s;

    for(int i = 0; i < 10; i++) {
      s.enqueue(i);
    }

    std::cout << "size: " << s.size() << std::endl;

    for(int i = 0; i < 10; i++) {
      std::cout << s.peek() << std::endl;
    }

    const int size = s.size();
    for(int i = 0; i < size; i++) {
      if (!s.empty()) {
        std::cout << s.dequeue() << std::endl;
      }
    }

    return 0;
}
