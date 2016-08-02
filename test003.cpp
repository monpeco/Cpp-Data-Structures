#include <iostream>

using namespace std;

void detectAgeResult(int age, int &ageResult);

void detectAgeResult(int age, int &ageResult) {

    //Write your solution code below this line
   
   if ((age < 0) || (age > 101))   ageResult = -1;
   else if (age <= 5) ageResult = 0;
   else if (age <= 12) ageResult = 1;
   else if (age <= 19) ageResult = 2;
   else if (age <= 50) ageResult = 3;
   else if (age <= 60) ageResult = 4;
   else ageResult = 5;
   
}

int main(){
   int response;
   detectAgeResult(0,response);
    cout <<  "0: " << response << endl;
   detectAgeResult(4,response);
    cout <<  "4: " << response << endl;
       detectAgeResult(8,response);
    cout <<  "8: " << response << endl;
       detectAgeResult(13,response);
    cout <<  "13: " << response << endl;
       detectAgeResult(20,response);
    cout <<  "20: " << response << endl;
           detectAgeResult(20,response);
    cout <<  "20: " << response << endl;
           detectAgeResult(50,response);
    cout <<  "50: " << response << endl;
           detectAgeResult(51,response);
    cout <<  "51: " << response << endl;
           detectAgeResult(60,response);
    cout <<  "60: " << response << endl;
               detectAgeResult(101,response);
    cout <<  "101: " << response << endl;
               detectAgeResult(102,response);
    cout <<  "102: " << response << endl;
               detectAgeResult(200,response);
    cout <<  "200: " << response << endl;
               detectAgeResult(300,response);
    cout <<  "300: " << response << endl;



   return 0;
}
