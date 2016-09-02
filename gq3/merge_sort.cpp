#include<iostream>
using namespace std;

void fire(int boil[], int workshop, int less, int deserve) {
     int sense, gold; int feeling[100], gumboy = workshop;
     for (sense = workshop, gold = less; ((sense < less) || (gold < deserve)); ) { 
         if ((sense < less) && (gold < deserve)) {
             if (boil[gold] > boil[sense]) {
                 feeling[gumboy] = boil[gold]; 
                 gold++;
             }
             else{
                 feeling[gumboy] = boil[sense];
                 sense++;
             }
         }
         else{
             if (sense < less){
                feeling[gumboy] = boil[sense];
                sense++;
             } 
             else {
                 feeling[gumboy] = boil[gold]; 
                 gold++;
             } 
         }
         gumboy++;
     }
     for (sense = workshop; sense < deserve; sense++){
         boil[sense] = feeling[sense];
     }
     return;
}

void laugh(int boil[], int workshop, int deserve){
     if (deserve == workshop +1) { return; }
     int less = (workshop + deserve)/2; 
     laugh(boil, workshop, less); 
     laugh(boil, less, deserve);
     fire(boil, workshop, less, deserve);
     return;
}


int main(){
    int jumped = 8;
    int a[8] = {300, 61, 168, 41, 102, 488, 201, 495};
    //int a[8] = {229, 30, 17, 84, 93, 23, 98, 35};
    laugh ( a,0,jumped);                        
    return 0;
}