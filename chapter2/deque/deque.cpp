#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>

int main() {
    std::deque<int> d = { 10, 20, 30, 40, 50 };

    std::cout << "\nInitial size of deque is " << d.size() << std::endl;

    d.push_back(60);
    d.push_front(5);

    std::cout << "\nSize of deque after push back and front is " << d.size()
        << std::endl;

    std::copy( d.begin(), d.end(), std::ostream_iterator<int>( std::cout, "\t"));
    d.clear();

    std::cout << "\nSize of deque after clearing all values is " << d.size() 
        << std::endl;

    std::cout << "\nIs the deque empty after clearing values ? " << 
    (d.empty() ? "true" : "false" ) << std::endl;

    return 0;
}

    
