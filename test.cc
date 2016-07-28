#include <iostream>     /* cout */
#include <stdlib.h>     /* malloc, free, rand */

using namespace std;

string str("Whole nine yards");
string result;

int main(){
  int a=2, b=3, c=4;
  
    int str_break1= str.find_first_of(" "); //Note: " " not "", there is a space
    int str_break2= str.find_last_of(" ")+1;

    cout << "str = " << str  << endl;
    cout << "str_break1 = " << str_break1  << endl;
    cout << "str_break2 = " << str_break2   << endl;
        cout << "------str.substr(str_break2) = " << str.substr(7, 6)  << endl;

    str= str.substr(str_break2)+str.substr(str_break1,str_break2-str_break1)+str.substr(0,str_break1);
    cout << "str = " << str  << endl;
    
    int index=0;   
    for (auto cit=str.cbegin(); cit!=str.cend(); cit++)
    {
        result+=toupper(*cit);
        if (result.at(index)==' '){result[index]='%';}
        index++;
    }
    //std::cout << *cit;
    cout << "result = " << result  << endl;
    
    
    result.replace(15,2,"0ylvv");
    cout << "result2 = " << result  << endl;

    cout <<result.substr(0,5)<<endl;  //Final Result
    
    exit(0);
}