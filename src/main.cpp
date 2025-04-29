#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "2 + 3 = " << Calculator::add(2, 3) << std::endl;
    std::cout << "5 - 2 = " << Calculator::subtract(5, 2) << std::endl;
    return 0;
}
