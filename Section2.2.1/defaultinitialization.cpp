#include <iostream>

std::string global_str;
int global_int;

int main() {
    // exercise 1.9
    // truncated
    // int i = {3.12};
    // int j = 3.14;

    // std::cout << i << j << std::endl;

    // exrcise 2.10 (outside and in)
    int local_int;
    std::string local_str;

    std::cout << global_int << std::endl;
    std::cout << global_str << std::endl;

    //undefined
    // std::cout << local_int << std::endl;
    // std::cout << local_str << std::endl;

    return 0;
}