#include <iostream>     /* cout */
#include <stdlib.h>     /* malloc, free, rand */
#include <vector>       /* vector */
#include <algorithm>    // std::sort

using namespace std;



    double arr[] = {29, 39, 100, 26, 79, 14, 14, 26, 68, 52, 51};
    vector<double> vec (arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<double> vec2(vec);
    
int main(){
    
    for(int i=0;i<11;i++){
        cout << "arr[]=" << arr[i] << endl;  //Final Result
    }
    
    cout << "---" <<endl;  //Final Result
    
    for (auto it = vec.begin(); it != vec.end(); ++it){
        cout << "vec=" << *it <<endl;
    }
    
    cout << "---" <<endl;  //Final Result

    for (auto it = vec2.begin(); it != vec2.end(); ++it){
        cout << "vec2=" << *it <<endl;
    }
    
    
    //vector<double>::iterator  min_vec = min_element(vec.begin(), vec.end());
    auto it = vec.begin();
    auto min_vec = vec.begin()+5;
    cout << "vec.begin()=" << *it <<endl;
    cout << "*min_vec=" << *min_vec <<endl;
    sort(it,min_vec);
    sort(min_vec, vec.end(), greater<double>());
    cout << "--> *min_vec=" << *min_vec <<endl;
    cout << "--> vec2[4]=" << vec2[4] <<endl;

    //vec2[4]
    exit(0);
}
