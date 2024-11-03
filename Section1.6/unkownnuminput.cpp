#include <iostream>

int main() {
    // exercise 1.16
    int values = 0, result = 0;

    while(std::cin >> values) 
        result += values;

    std::cout << result << std::endl;

    return 0;
}