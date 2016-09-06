#include <iostream>
using namespace std;

int ecode(int _nBase, int _nExponent){
    
    int nEcode = 1;
    //cout << "------->_nBase: " << _nBase << endl;
    //cout << "------->_nExponent: " << _nExponent << endl;
    
    for(int index=0; index < _nExponent; index++){
        nEcode *= _nBase;
        nEcode %= 100;
        //cout << "------->nEcode: " << nEcode << endl;
    }
    //cout << "========>nEcode: " << nEcode << endl;

    return (nEcode % 100);
}

/* Question        : Compare and compare the ecodes of 'index1' and 'index2' and return -1, 0, or 1
int audience [][2] : Contains the base and exponent.
int index1         : Denotes the row numberin the array 'audience'.
int index2         : Denotes the row numberin the array 'audience' */
int comparator(int audience[][2],int index1, int index2) {
    //Write your solution code below this line
    
    int ecode1 = ecode(audience[index1][0], audience[index1][1]);
    int ecode2 = ecode(audience[index2][0], audience[index2][1]);
    
    //cout << "base: " << audience[index1][0] << ", exp: " << audience[index1][1] << ", ecode1: " << ecode1 << endl;
    //cout << "base: " << audience[index2][0] << ", exp: " << audience[index2][1]  << ", ecode2: " << ecode2 << endl;
    if(ecode1 > ecode2) return -1;
    else if(ecode1 < ecode2) return 1;
    else return 0;

}


/* Question        : Sort the array as described in the question (previous tab) on edX
int audience [][2] : Contains the base and exponent.
int N              : Denotes Number of rows in the array 'audience'.
int &i_index       : Denotes the row numberin the array 'audience'.
int &j_index       : Denotes the row numberin the array 'audience'. */
void sorting(int audience[][2],int N, int &i_index, int &j_index){
    //Write your solution code below this line
    
    //Find the i_index value
    for(int index=0; index < N-1; index++){
        if(comparator(audience, index, index+1) == -1){
            //cout << "into: " << index << endl;
            i_index = index;
            break;
        }
    }
    
    //cout << "------------------------------------------------ " << endl;
    
    //Find the j_index value
    for(int index=N-2; index > 0; index--){
        if(comparator(audience, index, index+1) == -1){
            j_index = index+1;
            //cout << "------------index: " << index << ", index+1: " << index+1 << endl;
            break;
        }
    }
    
    
    
}


/* Question          : Merge the array as described in the question (previous tab) on edX
int audience[][2]    : The array, now, Partially sorted using the function 'sorting' (called from the main)
int mergedarray[][2] : To contain the final values after merging. This is passed as 'mergedmarks' from the main
int N                : Denotes the number of rows in both the arrays given above. 
int i_index          : Row number of the array 'audience' returned by the function 'sorting'
int j_index          : Row number of the array 'audience' returned by the function 'sorting' */
void merge(int audience[][2], int mergedarray[][2],int N, int i_index , int j_index) {

    //Write your solution code below this line

int indexA = 0, indexB = j_index, indexM = 0;

for(indexA=0, indexB=j_index; ((indexA < i_index) || (indexB < N));){
	if((indexA < i_index) && (indexB < N)){
		if(comparator(audience, indexA, indexB) == 1){
			mergedarray[indexM][0] = audience[indexA][0];
            mergedarray[indexM][1] = audience[indexA][1];
			indexA++;
		}else{
            mergedarray[indexM][0] = audience[indexB][0];
            mergedarray[indexM][1] = audience[indexB][1];
			indexB++;
		}
		
	}else{
		if(indexA < i_index){
			mergedarray[indexM][0] = audience[indexA][0];
            mergedarray[indexM][1] = audience[indexA][1];
			indexA++;
		}else{
            mergedarray[indexM][0] = audience[indexB][0];
            mergedarray[indexM][1] = audience[indexB][1];
			indexB++;
		}
	}
	indexM++;
}
    
}


int main (int argc, char* argv[]) {
    
    int audience[][2] = {{6,13}, {5,3}, {43,2}, {3,8}, {5,3}, {7,23} , {9,92} , {5,3} , {11,26} , {4,23} };
    int mergedarray[][2] = {{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0} , {0,0} , {0,0} , {0,0} , {0,0} };
    int index1 = 8, index2 = 1, comparator_result = -9, N = 10;
    int i_index = 0, j_index = N;
    
    cout << "------------------------------------------------ " << endl;
    //for (int index=0; index<N; index++){
    //    cout << " audience[" << index << "]: " << audience[index][0] << "\t," << audience[index][1] << endl ;
    //}
    
    comparator_result = comparator(audience, index1, index2);
    //cout << "comparator_result: " << comparator_result << endl;


    sorting(audience, N, i_index, j_index);
    cout << "i_index: " << i_index << endl;
    cout << "j_index: " << j_index << endl;

    cout << "------------------------------------------------ " << endl;
    for (int index=0; index<N; index++){
        cout << " audience[" << index << "]: " << audience[index][0] << "\t," << audience[index][1] << endl ;
    }
    
    merge(audience, mergedarray, N, i_index , j_index);
    cout << "------------------------------------------------ " << endl;
    for (int index=0; index<N; index++){
        cout << " mergedarray[" << index << "]: " << mergedarray[index][0] << "\t," << mergedarray[index][1] << endl ;
    }

    cout << "End" << endl;
    return 0;
}