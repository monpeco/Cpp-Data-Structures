 /* List example - insertion in a list */
 #include <iostream>
 #include <algorithm>
 #include <iterator>
 #include <list>

void print_list(std::list<int> const & a_list)
{
    using namespace std;
    ostream_iterator<int> out(cout, ", ");
    copy(a_list.begin(), a_list.end(), out);

}

int main()
{
    std::list<int> my_list;
    my_list.push_back(1);
    my_list.push_back(10);
    my_list.push_back(100);
    print_list(my_list);
    
    std::cout << std::endl << "Uso de push_front" << std::endl;

    my_list.push_front(20);
    print_list(my_list);
    
    std::cout << std::endl;
    
    return 0;
}