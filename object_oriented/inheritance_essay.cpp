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
struct Teacher : public Person // equivalent struct Teacher : Person
{
    void foo()
    {
        id = 2;         //well formed, id is public in Teacher
        heigth = 170;   //well formed, heigth is protected in Teacher
        //weigth = 80;    bad formed, because weight is private in Teacher
    }    
};


int main(){
    Person mike;
    mike.id = 51;
    cout << "Person.id: " << mike.id << endl;
    
    Teacher john;
    john.foo();
    cout << "Teacher.id: " << john.id << endl;
    //cout << "Teacher.heigth: " << john.heigth;  bad formed, because weight is protected and it cant be accessed from outside of the class Teacher

}