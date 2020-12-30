#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main() {
    std::list<int> l;
    
    for (int count=0; count<5; ++count){
        l.push_back( (count + 1) *100);
    }

    auto pos = l.begin();

    std::cout << "\nPrint the list ..." << std::endl;
    while ( pos != l.end() )
        std::cout << *pos++ << "-->";
    std::cout << " x" << std::endl;

    return 0;
}
