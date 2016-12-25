#include <iostream>
#include <vector>

std::vector<int> v;

int main(){
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    std::vector<int>::iterator it = v.begin();
    std::cout << "value of *it = " << *it << std::endl;

    int i = *it;        // i is 4
    std::cout << "i = " << i << std::endl;

    ++it; 
    i = *it;            // i is 5
    std::cout << "i = " << i << std::endl;

    *it = 6;            // v contains { 4, 6, 6 }
    std::cout << "*it = " << *it << std::endl;

    std::vector<int>::iterator  e = v.end();   
    // e points to the element after the end of v. It can be 
    // used to check whether an iterator reached the end of the vector:
    
    std::cout << "value of *e = " << *e << std::endl;
                        
    ++it; 
    it == v.end();      // false, it points to the element at position 2 (with value 6)
    std::cout << "it == v.end() = " << (it == v.end()) << std::endl;
    
    ++it;
    it == v.end();      // true
    std::cout << "it == v.end() = " << (it == v.end()) << std::endl;
    
}
