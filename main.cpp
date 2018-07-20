#include <iostream>
#include "Datastructs/Stack.h"
#include "Datastructs/Queue.h"
#include "Calculator/Calculator.h"


int main() {
    Calculator Test;
    do {
        try {
            std::cin >> Test;
            Test.evaluate();
            std::cout << Test << std::endl;
        } catch (char const * errMessage) {
            std::cout << errMessage << std::endl;
            return 0;
        }
    } while (!Test.isDone());
    return 0;
}