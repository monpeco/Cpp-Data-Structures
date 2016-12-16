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
        cout << "Teacher.foo() => id: " << id << ", heigth: " << heigth << endl;
        
    }    
};

struct Reseacher : private Person
{
    void foo()
    {
        id = 22;        //well formed, id is private in Reseacher
        heigth = 180;   //well formed, height is private in Reseacher
        //weigth = 85;  //ill formed, p3 is private in Person
        cout << "Reseacher.foo() => id: " << id << ", heigth: " << heigth << endl;
        
    }
};

struct Scientist : protected Person
{
    void foo()
    {
        id = 100;       //well formed, id is protected in Scientist
        heigth = 190;   //well formed, height is protected in Scientist
        //weigth = 100; //ill formed, p3 is private in Person
        cout << "Scientist.foo() => id: " << id << ", heigth: " << heigth << endl;

    }
};

struct MadScientist : Scientist
{
    void bar()
    {
        cout << "MadScientist.bar()" << endl;

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

    Reseacher yis;
    yis.foo();
    //cout << "Reseacher.id: " << yis.id;           bad formed, because all fields were inherit privately
    //cout << "Reseacher.heigth: " << yis.heigth; 
    //cout << "Reseacher.weigth: " << yis.weigth;
    
    Scientist uffy;
    uffy.foo();
    //cout << "Scientist.id: " << uffy.id;           bad formed, because all fields were inherit protectedly
    //cout << "Scientist.heigth: " << uffy.heigth; 
    //cout << "Scientist.weigth: " << uffy.weigth;    

    MadScientist julio;
    julio.bar();

}