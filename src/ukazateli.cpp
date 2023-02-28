#include <iostream>

int main()
{
    // Арифметика
    int a[2];
    int *link = a;
    std::cout << link++ << std::endl;
    std::cout << link++ << std::endl;
    *link = 10;
    std::cout << *link << std::endl;
    std::cout << a[2] << std::endl;
    return 0;
}
