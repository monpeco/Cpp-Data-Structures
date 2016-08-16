//#include <iostream>
using namespace std;
bool debug = true;


void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line

    for(int i=0; i<numOfStudents; i++)      sum_gq[ gq[i] ]++;
    //for(int i=0; i<11; i++)    cout << "\tsum_gq[]:" << sum_gq[i] << endl ; 
}

void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line

    for(int i=0; i<numOfStudents; i++){
        int gpa_nor = gpa[i] * 3.333333333333;
        sum_gpa[ gpa_nor ]++;
    }
    //for(int i=0; i<4; i++)      cout << " sum_gpa[" << i << "] : " << sum_gpa[i] << endl ;
}

void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line
     
    int gpa_n[]   = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};    

    //cout << "-----------------gpa normalized - gpa_n--------------------" << endl;
    for(int i=0; i<numOfStudents;i++){
        gpa_n[i] = gpa[i] * 3.333333333333;
    }
    //for(int i=0; i<numOfStudents;i++){          
    //    cout << "\tgpa_n[]:" << gpa_n[i] ; 
    //}
    
    //cout << endl << "----------------------The Input arrays------------------" << endl;
    //int gpa_nor = 0, gq_coor=0;
    for(int i=0;i<numOfStudents;i++){
            //cout << "\tgq[]:"<< gq[i] << "\tgpa_n[]:" << gpa_n[i] ; 
            (count[ gq[i] ][ gpa_n[i] ])++;
        //cout << endl;
    }
    
    //cout << endl << "----------------------The matrix of distribution------------------" << endl;

    // for(int i=0;i<11;i++){
    //     for(int j=0;j<4;j++){
    //         cout << "\tc:" << count[ i ][ j ];
    //     }   
    //     cout << endl;
    // }
    //cout << endl << "----------------------The sum of files------------------" << endl;

    for(int i=0;i<11;i++){
        for(int j=0;j<4;j++){
            count[ i ][ 4 ] = count[ i ][ 4 ] + count[ i ][ j ];
        }   
    }
    
    // for(int i=0;i<11;i++){
    //     for(int j=0;j<5;j++){
    //         cout << "\tc:" << count[ i ][ j ];
    //     }   
    //     cout << endl;
    // }
    
    //cout << endl << "----------------------The sum of columns------------------" << endl;

    for(int j=0;j<5;j++){
        for(int i=0;i<11;i++){
            count[ 11 ][ j ] = count[ 11 ][ j ] + count[ i ][ j ];
        }   
    }
    
    // for(int i=0;i<12;i++){
    //     for(int j=0;j<5;j++){
    //         cout << "\tc:" << count[ i ][ j ];
    //     }   
    //     cout << endl;
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
    // cout <<  endl ;
    getTotalGPA(numOfStudents, gpa, sum_gpa);
    // cout <<  endl ;
    getTotalCount(numOfStudents, gq, gpa, count);
    //cout <<  endl ;

    return 0;
}