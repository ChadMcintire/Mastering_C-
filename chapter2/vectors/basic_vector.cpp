#include <iostream>
#include <vector>
#include <algorithm> //for sort

int main() {
    std::vector<int> v = { 1, 5, 2, 4, 3};

    std::cout << "\nSize of vector is " << v.size() << std::endl;

    auto pos = v.begin();

    std::cout << "\nPrint vector elements before sorting" << std::endl;
    while ( pos != v.end() ){
        std::cout << *pos++ << "\t";
    }
    std::cout << std::endl;

    sort( v.begin(), v.end() );

    pos = v.begin();

    std::cout << "\nPrint vector elements after sorting" << std::endl;

    while ( pos != v.end() )
        std::cout << *pos++ << "\t";
    std::cout << std::endl;

    return 0;
}
