#include<iostream>
#include<cstdio>
using namespace std;

/* Arreglo para las lecturas */
struct lectura
{
    char C004_tip_medida_2[5];
	char C016_lectura_2[17]; 	
	char C013_consumo_2[14];
};
struct lectura lecturas[4];

int main()
{
    for(int i = 0; i<11;i++){
        cout << "i%4=[" << i%4 << "]" << endl;

    }
    return 0;
}