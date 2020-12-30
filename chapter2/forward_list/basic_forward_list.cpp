#include <iostream>
#include <forward_list>
#include <iterator>
#include <algorithm>

int main() {
    std::forward_list<int> l = {10, 10, 20, 30, 45, 45, 50};

    std::cout << "\nlist with all values ..." << std::endl;

    copy( l.begin(), l.end(), std::ostream_iterator<int>(std::cout, "\t") );

    std::cout << "\nSize of list with duplicates is " << distance( l.begin(),
    l.end() ) << std::endl;

    //keep only the unique values
    l.unique();

    std::cout << "\nSize of list with duplicate is " << distance( l.begin(),
    l.end()) << std::endl;

    l.resize( distance( l.begin(), l.end() ) );

    std::cout << "\nlist after removing duplicates ..." << std::endl;

    copy( l.begin(), l.end(), std::ostream_iterator<int>(std::cout, "\t"));
    std::cout << std::endl;

    return 0;
}
