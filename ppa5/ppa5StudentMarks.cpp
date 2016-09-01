#include <cmath>
#include <iostream>
using namespace std;

/* Question           : Compute the RMS of 2 rows return -1, 0, or 1
float marksarray[][2] : Contains the midsem_marks and endsem_marks of 'N' students 
int index1            : Denotes the the row number(index) of the student. 
int index2            : Denotes the the row number(index) of the student.  */
int comparator(float marksarray[][2],int index1, int index2) {
    //Write your code below this line to calculate RMS, compare them, and return either -1, 0, or 1  


    float square_midsem_marks1 = pow(marksarray[index1][0],2);
    float square_endsem_marks1 = pow(marksarray[index1][1],2);
    float rms1 =  sqrt(0.5 * (square_midsem_marks1 + square_endsem_marks1));
    //cout << "RMS(" << marksarray[index1][0] << "," << marksarray[index1][1] << ") index1:" << rms1 ;
    
    float square_midsem_marks2 = pow(marksarray[index2][0],2);
    float square_endsem_marks2 = pow(marksarray[index2][1],2);
    float rms2 = sqrt(0.5 * (square_midsem_marks2 + square_endsem_marks2));
    //cout << "\tRMS(" << marksarray[index2][0] << "," << marksarray[index2][1] << ") index2:" << rms1 << endl;

    //cout << "\tRMS of index2:" << rms2 << endl;

    if (rms1 > rms2){
        return -1;
    } else if (rms1 < rms2){
        return 1;
    } else {
        if (marksarray[index1][1] > marksarray[index2][1]){
            return -1;
        } else if (marksarray[index1][1] < marksarray[index2][1]){
            return 1;
        } else {
            return 0;
        }
    }

}



/* Question       : Sort the array as described in the question(previous tab) on edX
float array[ ][2] : Denotes midsem and endsem marks of a given number of students. 
int numElements   : Total number of students */

int selectionSort2(float array[][2], int numElements) {
    //Write your code below this line to find out and return the breakpoint. Sort the upper part of array (if required)
    // Hint: Use the comparator function

    int break_point = 0;
    for(int index=numElements-1; index > 0; index--){
        if (comparator(array, index-1, index) == 1){
            break_point = index;
            break;
        }
    }

    for(int indey=0; indey < break_point-1; indey++){
        for(int index=0; index < break_point-1; index++){
            if (comparator(array, index, index+1) == -1){
                float temp0=array[index][0];
                float temp1=array[index][1];
                array[index][0] = array[index+1][0];
                array[index][1] = array[index+1][1];
                array[index+1][0] = temp0;
                array[index+1][1] = temp1;
            }
        } 
    }

    return break_point;
}



/* Question            : Merge the array as described in the question(previous tab) on edX and return non duplicate rows
float sortedarray[][2] : Containing the sorted elements (based on the sorting done in the function 'selectionSort2'). 
float mergedarray[][2] : After this function executes, this should contain the merged array.
int break_point        : Denoting the point i.e. the row number as explained earlier.
int numElements        : Number of rows in both the arrays (sortedarray and mergedarray). */
int merge(float sortedarray[][2], float mergedarray[][2], int break_point, int numElements) {
    // Write your code below this line to merge non-duplicate array rows of Part A and Part B
    // Return the number of non-duplicate rows detected in the entire array after merging 
    
    for(int indexA=0; indexA < break_point; indexA++){
        for(int indexB=break_point+1; indexB < numElements; indexB++){
            if (comparator(sortedarray, indexA, indexB) == 0){
                cout << "indexA: " << indexA << "\tindexB: " << indexB << endl ;
                sortedarray[indexA][0] = -99;
                sortedarray[indexA][1] = -99;
                sortedarray[indexB][0] = -99;
                sortedarray[indexB][1] = -99;                
            }
        }
    }
    
}

int main(){
//    float marksarray[][2]={ {90, 30}, {60, 20}, {30, 40}, {60, 20}, {10, 90}, {0, 100}, {60, 60}, {50, 10} };
//    float marksarray[][2]={ {90, 30}, {60, 20}, {30, 40}, {60, 20}, {10, 90}, {0, 100} };
    float marksarray[][2]={ {30, 40}, {60, 20}, {60, 20}, {10, 90}, {90, 30}, {0, 100}, {60, 20} };
    float mergedarray[][2]={ {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} };
    int index1=0, index2=0, numElements=7;
    int break_point = 0;

    break_point = selectionSort2(marksarray, 6);
    cout << "break_point: " << break_point << endl ; 
    cout << "Sorted Arrar: " << endl ; 

    for(int i=0;i<numElements;i++,cout << endl)
        for(int j=0;j<2;j++)
            cout << "\tmarksarray[" << i << "][" << j << "]:" << marksarray[i][j] ;
            
    merge(marksarray, mergedarray, break_point, numElements);
    
    for(int i=0;i<numElements;i++,cout << endl)
        for(int j=0;j<2;j++)
            cout << "\tmarksarray[" << i << "][" << j << "]:" << marksarray[i][j] ;
            
    cout << "End" << endl ;
    return 0;
}