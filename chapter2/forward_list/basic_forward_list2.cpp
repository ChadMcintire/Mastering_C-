#include <iostream>
#include <forward_list>
#include <iterator>
#include <algorithm>

int main() {
    
    std::forward_list<int> list1 = { 10, 20, 10, 45, 50, 25 };
    std::forward_list<int> list2 = { 20, 35, 27, 15, 100, 85, 12, 15 };

    std::cout << "\nFirst list before sorting ..." << std::endl;
    copy( list1.begin(), list1.end(), 
    std::ostream_iterator<int>(std::cout, "\t"));
    std::cout << std::endl;

    std::cout << "\nSecond list before sorting ..." << std::endl;
    copy(list2.begin(), list2.end(), 
    std::ostream_iterator<int>(std::cout, "\t"));
    std::cout << std::endl;

    list1.sort();
    list2.sort();

    std::cout << "\nFirst list after sorting ..." << std::endl;
    copy( list1.begin(), list1.end(), 
    std::ostream_iterator<int>(std::cout, "\t"));
    std::cout << std::endl;

    std::cout << "\nSecond list after sorting ..." << std::endl;
    copy(list2.begin(), list2.end(), 
    std::ostream_iterator<int>(std::cout, "\t"));
    std::cout << std::endl;

    list1.merge(list2);

    std::cout << "\nMerged list ..." << std::endl;
    copy( list1.begin(), list1.end(), 
    std::ostream_iterator<int>(std::cout, "\t"));

    std::cout << "\nMerged list after removing duplicates ..." << std::endl;
    list1.unique();
    copy( list1.begin(), list1.end(), 
    std::ostream_iterator<int>(std::cout, "\t"));

    return 0;
}
