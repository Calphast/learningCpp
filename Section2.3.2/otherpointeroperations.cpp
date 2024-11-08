#include <iostream>

int main() {
    // exercise 2.18
    // int cal = 10;
    // int *cal = &cal;

    // exercise 2.20
    int i = 42;
    int* pi = &i;
    *pi = *pi * *pi;
    
    std::cout << *pi << std::endl;

    return 0;
}