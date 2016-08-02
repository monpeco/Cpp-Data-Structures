#include<iostream>
using namespace std;
/*Happy Numbers: A number is called a happy number, if you repeat the process, of squaring the sum of the digits, till the value 1 is obtained. 
E.g. You need to do the following to perform this check: 
    (a) compute the sum of the squares of its digits 
    (b) if the resultant value is 1, then the number is a happy number, else execute point (a). 
If a number is not a happy number, there will be an endless loop/cycle to this execution. 

Task: In this programming assignment, you are required to write code that checks whether the number is a happy number or not, for 10 cycles (iterations) only.
2 examples of happy numbers (limited to 10 cycles ) are given below: 

 You are required to do the following:

1) Find the sum of the digits of the number.
2) Check the result obtained in point 1. If it is 1, assign value 1 to the variable 'finalNumber', else again execute point 1, 
    till the number obtained is 1 or till the number of cycle increases to 10.
3) Assign the iteration value to the variable 'cycle_no'.
*/




/*Question      : Write your code to find whether the number is a happy number or not (for max 10 cycles).
int number      : The number to be determined whether it is happy or not
int finalNumber : Store the resultant value in this variable
int cycle_no    : Store the number of iterations done to determine whether the 'number' is happy or not */
void detectHappy(int number, int &finalNumber, int &cycle_no) {

    //Write your solution code below this line
    
    int sin_num=0, result=0, acc=0;

    //cout << "incommign number:" << number << endl;
    for(int i=0;i<10;i++){
        //cout << "at the start of while, number:" << number << endl;
        while(number>0){
        
            sin_num = number % 10;          //cout << "\nsin_num:" << sin_num << endl;
            result = sin_num * sin_num;     //cout << "result:" << result << endl; 
            acc += result;                  //cout << "acc:" << acc << endl; 
            number = number / 10;           //cout << "number:" << number << endl << endl;
        
        }
        if (acc==1){
            finalNumber=acc;
            cycle_no = i;
            return;
        }
        number=acc;
        acc=0;
    }
    finalNumber=number;
    cycle_no = 10;   

}

int main() {
    int number=0, finalNumber=0, cycle_no=0;

    number = 3;
    detectHappy( number, finalNumber, cycle_no);
    cout << "\nfinalNumber:" << finalNumber << endl; 
    cout << "cycle_no:" << cycle_no << endl; 
    
    return 0;
}