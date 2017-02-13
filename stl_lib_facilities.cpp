#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }


// simple dictionary: list of sorted words
int main()
{
    vector<string> words;
    for (string temp; cin >> temp; ) 
       words.push_back(temp); 
    cout << "Number of words: " << words.size() << '\n';
    sort(words.begin(), words.end()); // sort requiere 2 (o 3) parametros
    for (int i = 0; i < words.size(); ++i) 
        if (i == 0 || words[i-1] != words[i]) // cambiar el caracter por "–" "-"
            cout << words[i] << "\n";
}