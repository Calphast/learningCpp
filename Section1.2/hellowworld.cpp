#include <iostream>

int main() {
    std::cout << "Please insert 2 numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    //std::cout << "Result:" << v1 * v2 << std::endl;
    // or
    std::cout << "Result:";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}