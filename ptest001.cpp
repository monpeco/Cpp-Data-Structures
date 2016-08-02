#include<iostream>
using namespace std;
/*Find the sum of squares of individual digits of a number 'sqdnumber' 
and store the sum in variable 'sqdNumber_result'. 
E.g. if the number is 234, the sum is computed as (22 + 32 + 42 = 4 + 9 + 16 = 29) */


/* Question: Find the sum of squares of individual digits of a number 'sqdnumber' and store the sum in variable 'sqdNumber_result'. 
int sqdnumber: Original number
int sqdNumber_result: Store the resultant in this variable */

void squaredSum(int sqdnumber,int &sqdNumber_result) {

    //Write your solution code below this line

    int sin_num = 0, res_num=0, result=1, acc=0;
    res_num = sqdnumber;
    
    while(res_num>0){
        //cout << "res_num:" << res_num << endl;
        sin_num = res_num % 10;
        //cout << "sin_num:" << sin_num << endl;
        res_num = res_num / 10;
        //cout << "res_num:" << res_num << endl;    
    
        result = sin_num * sin_num;
        //cout << "result:" << result << endl; 
        acc += result;
    }
        //cout << "acc:" << acc << endl; 
    sqdNumber_result=acc;
}

int main() {
    int sqdnumber;
    int sqdNumber_result;
    
    sqdnumber = 234;
    squaredSum(sqdnumber,sqdNumber_result);
    cout << "sqdNumber_result:" << sqdNumber_result << endl; 
    
    return 0;
}