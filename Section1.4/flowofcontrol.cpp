#include <iostream>

int main() {
    //exercise 1.9
    // int counter = 0, nums = 50;

    // while (counter < 50)
    // {
    //     nums += counter;
    //     ++counter;
    // }
    
    // std::cout << "the result: " << nums << std::endl;

    //exercise 1.10
    // int counter = 10;

    // while (counter > 0)
    // {
    //     std::cout << counter << std::endl;
    //     --counter;
    // }

    //exercise 1.11
    int v1 = 0, v2 = 0;

    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> v1 >> v2;

    int v3 = v1;
    int v4 = v2;

    while (v2 >= v1)
    {
        std::cout << v3 << std::endl;
        ++v3;
        --v2;
    }

    while (v1 >= v2)
    {
        std::cout << v4 << std::endl;
        ++v4;
        --v1;
    }

    return 0;
}