#include <iostream>

int main() {
    // exercise 2.15
    int ival = 1.01;
    //int &rval1 = 1.01;
    int &rval2 = ival;
    //int &rval3;

    // exercise 2.16
    rval2 = 10;

    std::cout << ival << std::endl;
    return 0;
}