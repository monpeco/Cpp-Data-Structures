#include <cmath>
#include <iostream>
using namespace std;

/* Question           : Compute the RMS of 2 rows return -1, 0, or 1
float marksarray[][2] : Contains the midsem_marks and endsem_marks of 'N' students 
int index1            : Denotes the the row number(index) of the student. 
int index2            : Denotes the the row number(index) of the student.  */
int comparator(float marksarray[][2],int index1, int index2) {
    //Write your code below this line to calculate RMS, compare them, and return either -1, 0, or 1  


}



/* Question       : Sort the array as described in the question(previous tab) on edX
float array[ ][2] : Denotes midsem and endsem marks of a given number of students. 
int numElements   : Total number of students */

int selectionSort2(float array[][2], int numElements) {
    //Write your code below this line to find out and return the breakpoint. Sort the upper part of array (if required)
    // Hint: Use the comparator function

    
}



/* Question            : Merge the array as described in the question(previous tab) on edX and return non duplicate rows
float sortedarray[][2] : Containing the sorted elements (based on the sorting done in the function 'selectionSort2'). 
float mergedarray[][2] : After this function executes, this should contain the merged array.
int break_point        : Denoting the point i.e. the row number as explained earlier.
int numElements        : Number of rows in both the arrays (sortedarray and mergedarray). */
int merge(float sortedarray[][2], float mergedarray[][2], int break_point, int numElements) {
    // Write your code below this line to merge non-duplicate array rows of Part A and Part B
    // Return the number of non-duplicate rows detected in the entire array after merging 

    
}

int main(){
    float marksarray[][2]={ {90, 30},
{60, 20},
{30, 40},
{60, 20},
{10, 90},
{0, 100},
{60, 60},
{50, 10} };
    int index1=0, index2=0, numElements=8;
    
    for(int i=0;i<numElements;i++){
        for(int j=0;j<2;j++){
            cout << "\tmarksarray[" << i << "][" << j << "]:" << marksarray[i][j] ;

        }        
        cout << endl;
    }
    
    
    cout << "End" << endl ;
    return 0;
}