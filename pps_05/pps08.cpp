/*The while loop exchanges digits[0] with digits[N-1], then digits[1] with digits[N-2], and so on. The program will always reverse digits for 
every valid set of input values. 

As an example, consider two cases for N = 4 i.e. even, and N = 5 i.e. odd,respectively

For N = 4, consider the digits given to be 1, 4, 6, and 5, in that sequence
Here, N/2 = 2, so the while loop will execute for i = 0, and i =1
This will result in the exchanges:
digits[0] with digits[3], and digits[1] with digit[2]

For N = 5, consider the digits given to be 7, 8, 4, 6, and 9 in that sequence
Here, N/2 = 2, so the while loop will execute for i = 0, and 1
This will exchange
digits[0] with digits[4], and digits[1] with digit[3]
Note that the digit in digits[2] will remain unexchanged. This is correct, because it is in the centre position for any odd value of N

Clearly the program works for all valid values of N, even or odd. The value N/2 merely appears as the condition in while statement*/
#include <iostream>
using namespace std;
int main()
{
    int digits[50], N, i, mid, temp;
    cout << "Give value of N" << endl;
    cin >> N;
    if (N < 1 || N > 50) {
        cout << "Invalid value for N " << endl;
        return -1;
    }
    cout <<endl << "Give " << N << " digits";
    for (i = 0; i < N; i++){
        cin >> digits[i];
        if (digits[i] < 0 || digits[i] > 9){
            cout << "Invalid digit, exiting" << endl;
            return -1;
        }
    }
    i = 0;
    while(i < N/2) {
        temp = digits[i];
        digits[i] = digits[N-i-1];
        digits[N-i-1] = temp;
        i++;
    }
    cout << "Reverse digits are : ";
    for(i=0; i < N; i++) {
        cout << digits[i] << "  ";
    }
    cout << endl;
    return 0;
}
