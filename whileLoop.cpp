#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 5;
    int expr_one, expr_two;
    int count = 0;

    expr_one = 5*a - 2*b;  
    expr_two = (4*a + 8*b) % (b-1); 
    cout <<  "expr_one: " << expr_one << endl;
    cout <<  "expr_two: " << expr_two << endl;
    cout <<  "expr_one = expr_two: " << (expr_one = expr_two) << endl;

    while(expr_one = expr_two) {
    cout <<  "while "<< endl;
        
        expr_one += 5;
        expr_two--;
        count++;
    }
    cout <<  "count: " << count << endl;

    return 0;
}
