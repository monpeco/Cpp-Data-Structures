#include <iostream>
#include <stdlib.h>
using namespace std;



int ordenarArreglo(int *arr)
{
int i, j, temp = 0;

    for(i = 0; i < (10 - 1); i++)
    {
        for(j = 0; j<(10 - i - 1); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1 ]= temp;
            }
        }
    }
    temp = 0;
    i = 0;
    j = 0;


    for(int z = 0;z < 10;z++)
    {
        cout << " " << arr[z] << endl;
    }
}

int main()
{
    //Arreglo de diez numeros a modificar.
    int arr[10] = {15,1,3,4,8,9,7,6,7,4};

    cout << "El arreglo original es: ";

   for(int i=0;i < 10; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl << endl;

    cout << "El arreglo ordenado es: " << endl;

    ordenarArreglo(arr);
    
    return 0;
}
