#include <stdio.h>

class base2
{
  public:
    void function()
     {   printf("base2.funtion()\n"); }  
};

class base1
{
  public:
     void function()
     {   printf("base1.funtion()\n"); }  
};


class derived : public base2, public base1
{
    
};

int main()
{
    derived obj;
    
    // Error because compiler can't figure out which function to call 
    //either function() of base1 or base2 .   
    //obj.function(); 
    obj.base2::function(); 
    obj.base1::function(); 
}