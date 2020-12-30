#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main () {
    std::list<int> l = {100, 20, 80, 50, 60, 5};

    auto pos = l.begin();

    std::cout << "\nPrint the list before sorting ..." << std::endl;
    copy( l.begin(), l.end(), std::ostream_iterator<int>( std::cout, "-->" ));
    std::cout << "X" << std::endl;

    l.sort();

    std::cout << "\nPrint the list after sorting ..." << std::endl;
    copy( l.begin(), l.end(), std::ostream_iterator<int>( std::cout, "-->" ));
    std::cout << "X" << std::endl;

    return 0;
}
