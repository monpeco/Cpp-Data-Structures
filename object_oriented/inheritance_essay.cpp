#include<iostream>
using namespace std;

struct Person
{
    public:
        int id;
    protected:
        int heigth;
    private:
        int weigth;
};

//Make Teacher inherit publicly (default) from Person
struct Teacher : Person
{
};


int main(){
    Person mike;
    mike.id = 51;
    cout << "Person.id: " << mike.id << endl;
}