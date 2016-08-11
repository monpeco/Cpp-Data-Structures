#include <iostream>
using namespace std;
bool debug = true;


void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line

    for(int i=0; i<numOfStudents; i++)      sum_gq[ gq[i] ]++;
    for(int i=0; i<11; i++)    i=i; 
}

void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line

    for(int i=0; i<numOfStudents; i++){
        int gpa_nor = gpa[i] * 3.333333333333;
        sum_gpa[ gpa_nor ]++;
    }
    for(int i=0; i<5; i++)      cout << " sum_gpa[" << i << "] : " << sum_gpa[i] << endl ;
}

void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line

    for(int i=0; i<numOfStudents;i++) cout << "\tgpa[]:" << gpa[i] ;
    for(int i=0;i<numOfStudents;i++){
        for(int j=0;j<4;j++){
            count[i][j] = 0;
        }   
    }

    for(int i=0;i<numOfStudents;i++){
        for(int j=0;j<4;j++){
            cout << "\tco:" << count[i][j] ;
        }   
        cout << endl;
    }
cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    for(int i=0; i<numOfStudents;i++) cout << "\tgpa[]:" << gpa[i] ;

    int gpa_nor = 0, gq_coor=0;
    for(int i=0;i<numOfStudents;i++){
        for(int j=0;j<4;j++){
            gpa_nor = gpa[j] * 3.333333333333;
            cout << "\tgq[i]" << gq[i] ;
            cout << "\tgpa[gpa_nor]:" << gpa[gpa_nor] ;
            cout << "\tgpa_nor" << gpa_nor ;

            // (count[ gq[i] ][ gpa_nor ])++;
            // cout << "\t\ti:" << i << "\tj:" << j ;
            // cout << "\tco:" << count[i][gpa_nor] ;
            // if (count[i][j] == 8){
            //     cout << "-------i:" << i << "j:" << j << "co:" <<count[i][j] ; 
            //     break;
            // }
        }   
        cout << endl;
    }
    for(int i=0; i<numOfStudents;i++) cout << "\tgpa[]:" << gpa[i] ;

    // int gpa_nor = 0, gq_coor=0;
    // for(int i=0; i<numOfStudents; i++){
    //     gpa_nor = gpa[i] * 3.333333333333;
    //     cout << "gq[i]:" << gq[i] <<  endl;
    //     cout << "3.gq[0]:" << gq[0] <<  endl;
    //     gq_coor = gq[i];
    //     cout << "gq_coor:" << gq_coor << "\tgpa_nor:"<< gpa_nor <<  endl;
    //     count[gq_coor][gpa_nor]++;
    //     break;
    // }
    
    // for(int i=0;i<numOfStudents;i++){
    //     for(int j=0;j<4;j++){
    //         cout <<  count[i][j];
    //     }
    //     cout <<  endl;
    // }
}







int main () {
    int numOfStudents = 54;
    int gq[]     = {7,10,10,7,4,8,0,5,2,0,7,9,8,9,0,3,0,0,9,10,0,0,2,9,9,2,4,3,10,2,2,3,3,4,3,2,10,10,8,5,6,4,6,2,6,6,10,10,4,10,0,0,10,8};
    float gpa[]   = {0,1,1,0,0.3,0.3,0.3,0.3,1,1,1,0.3,0.3,0.3,0.3,0.3,0,0,0.3,0.3,0.3,1,1,1,1,1,0,0,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0,0,
                        0.6,0.6,0,0.6,0,0.6,0,0.6,0,0,0,0.6,0.6,0.6,1,0};
    
    int sum_gq[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int sum_gpa[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    int count[54][5] = { {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0},{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}  };
    
    getTotalGQ(numOfStudents, gq, sum_gq);
    cout <<  endl ;
    getTotalGPA(numOfStudents, gpa, sum_gpa);
    cout <<  endl ;
    getTotalCount(numOfStudents, gq, gpa, count);
    cout <<  endl ;

    return 0;
}