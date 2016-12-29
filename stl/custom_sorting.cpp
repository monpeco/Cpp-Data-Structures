#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::sort

using namespace std;

vector< pair< string, int> > nombreEdad;


void cargarVector(){
    nombreEdad.push_back(pair<string,int>("william",10));
    nombreEdad.push_back(pair<string,int>("joe",3));
    nombreEdad.push_back(pair<string,int>("ana",8));    
    nombreEdad.push_back(pair<string,int>("robert",9));
    nombreEdad.push_back(pair<string,int>("george",4));
    nombreEdad.push_back(pair<string,int>("lucas",1));
    nombreEdad.push_back(pair<string,int>("lee",7));    
}

bool bfnNumber(const pair<string,int>& p1, const pair<string,int>& p2){
    return p1.second < p2.second;
}

struct nombreMenor
{
    inline bool operator() (const pair<string,int>& p1, 
                            const pair<string,int>& p2)
    {
        return p1.first.compare( p2.first) < 0;
    }
} myobject;

int main(){
    
    cargarVector();    
    for(int i = 0; i <=6 ; i++){
        cout << "value of nombre [" << i << "] = <" << nombreEdad[i].first << "," << nombreEdad[i].second << ">" << endl;
    }
    
    cout << "Ordering by number (bfnNumber):" << endl;
    sort(nombreEdad.begin(), nombreEdad.end(), bfnNumber); 
    for(int i = 0; i <=6 ; i++)
        cout << "value of nombre [" << i << "] = <" << nombreEdad[i].first << "," << nombreEdad[i].second << ">" << endl;
    
    nombreEdad.clear();
    cargarVector();
    
    cout << "Ordering by name (nombreMenor):" << endl;
    sort(nombreEdad.begin(), nombreEdad.end(), myobject); 
    for(int i = 0; i <=6 ; i++)
        cout << "value of nombre [" << i << "] = <" << nombreEdad[i].first << "," << nombreEdad[i].second << ">" << endl;

    return 0;
}