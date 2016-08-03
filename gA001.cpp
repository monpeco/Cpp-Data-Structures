#include<iostream>
#include <stdio.h> /* sprintf */
#include <stdlib.h>     /* atoi */
#include <string.h>     /* strcpy */
using namespace std;

void solutionRPM(long long int rpm, int &years, long long int &finalRPM);

void solutionRPM(long long int rpm, int &years, long long int &finalRPM) {

    //Write your solution code below this line
    
    long long int llnRpm = rpm;     int nYears = 0;     long long int llnFinalRPM = 0;
    int nDigit = 0, nCount = 0, nLast2Digits=0, nYeasCount = 0;
    long long int nAcc = 0;
    long long int MAX_RPM = rpm * 8;
    const int nFactor = 323;
    char sRpm [50];
    bool isDebug = true;
    
    int nActualLast2Digits = 0;
    
    while((nYeasCount<10) && (llnRpm<=MAX_RPM)){
        while(llnRpm>0){
            nDigit = llnRpm % 10;               //if (isDebug) cout << "nDigit: " << nDigit << endl;
            llnRpm = llnRpm / 10;               //if (isDebug) cout << "llnRpm: " << llnRpm << endl << endl;
            
            if (nCount == 0){
                nActualLast2Digits = llnRpm % 100;                  //if (isDebug) cout << "----------nActualLast2Digits: " << nActualLast2Digits << endl;

            }        
            nDigit = nDigit * nDigit;           //if (isDebug) cout << "nDigit^2: " << nDigit << endl;
            nAcc += nDigit;
    
            nCount++;
        }
        nYeasCount++;
                                                //if (isDebug) cout << "nAcc: " << nAcc << endl;
        nAcc = nAcc*nFactor;                    //if (isDebug) cout << "nAcc*nFactor: " << nAcc << endl;  
        llnRpm = nAcc + nActualLast2Digits;           //if (isDebug) cout << "(new) llnRpm: " << llnRpm << endl << endl; 
                                                //if (isDebug) cout << "(new) llnRpm: " << llnRpm << " nYeasCount: " << nYeasCount << endl << endl;
        nAcc = nActualLast2Digits = nCount = 0;

    }
    
    years  =nYeasCount;
    finalRPM = llnRpm;
}


int main() {
    long long int rpm = 7024; int years = -1; long long int finalRPM = -1;
    
    cout << "rpm; " << rpm << " ,years; " << years << " ,finalRPM: " << finalRPM << endl;

    solutionRPM(rpm, years, finalRPM);
    cout << "rpm; " << rpm << " ,years; " << years << " ,finalRPM: " << finalRPM << endl;
    solutionRPM(5524, years, finalRPM);
    cout << "rpm; " << rpm << " ,years; " << years << " ,finalRPM: " << finalRPM << endl;

    cout << "OK" << endl;
    return 0;
}