#include <iostream>
#include <string>

using namespace std;

//STAGE 2
//string::const_iterator cit;   
int index=0;   

string str("Whole nine yards");
string result;

//STAGE 1
int str_break1= str.find_first_of(" "); //Note: " " not "", there is a space
int str_break2= str.find_last_of(" ")+1;
//str = str.substr(str_break2)+str.substr(str_break1,str_break2-str_break1)+str.substr(0,str_break1);
//End of STAGE 1

//STAGE 2
//string::const_iterator cit;   
//int index=0;   

for(auto cit=str.cbegin(); cit!=str.cend(); cit++)
{
  result+=toupper(*cit);
  if (result.at(index)==' '){result[index]='%';}
  index++;
}
// End of STAGE 2   

//STAGE 3
result.replace(15,2,"0ylvv");
//End of STAGE 3

cout <<result.substr(0,5)<<endl;  //Final Result