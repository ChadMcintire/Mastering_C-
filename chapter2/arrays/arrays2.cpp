#include <iostream>
#include <array>

int main() {
    std::array<int, 6> a;
    int size = a.size();
    for (int index=0; index < size; ++index)
        a[index] = (index+1) * 100;

    std::cout << "\nPrint values in original order ..." << std::endl;

    auto pos = a.begin();
    while ( pos != a.end() )
        std::cout << *pos++ << "\t";
    std::cout << std::endl;

    std::cout << "\nPrint values in reserse order ..." << std::endl;

    auto rpos = a.rbegin();
    while ( rpos != a.rend() )
        std::cout << *rpos++ << "\t";
    std::cout << std::endl;

    return 0;
}
