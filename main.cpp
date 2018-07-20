#include <iostream>
//#include "Datastructs/Stack.cpp"
#include "Datastructs/Queue.h"
#include "Datastructs/Node.h"

int main() {
    Queue<int> Test;
    Test.push(7);
    Test.push(2);
    Test.push(3);
    Test.push(5);
    Test.push(6);
    Test.push(7);
    Test.push(9);
    Test.push(100);
    Test.push(56);
    std::cout << Test << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    std::cout << Test.pop() << std::endl;
    try {
        std::cout << Test.pop() << std::endl;
    } catch (char const * errMessage) {
        std::cout << errMessage << std::endl;
    }

    return 0;
}