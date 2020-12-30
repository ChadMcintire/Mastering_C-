#include <iostream>
#include <array>

int main() {
    std::array<int,5> a = { 1, 5, 2, 4, 3};
    std::cout << "\nSize of array is " << a.size() << std::endl;

    auto pos = a.begin();

//    std::cout << std::endl;

    while ( pos != a.end() )
        std::cout << *pos++ << "\t";
    std::cout << std::endl;

    return 0;
}
