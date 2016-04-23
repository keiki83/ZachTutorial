#include <iostream>
#include "stack.cpp"


int main() {
    Stack<int> s;

    for(int i = 0; i < 10; i++) {
      s.push(i);
    }

    std::cout << "size: " << s.size() << std::endl;

    for(int i = 0; i < 10; i++) {
      std::cout << s.peek() << std::endl;
    }

    for(int i = 0; i < 10; i++) {
      std::cout << s.pop() << std::endl;
    }

    return 0;
}

// Hello!
