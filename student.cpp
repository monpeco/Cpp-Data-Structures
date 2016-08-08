#include <iostream>
using namespace std;

/* Question: Find out the maximum profit (positive or negative) that can be earned, and return its value.
int prices[]: Prices of shares */
bool debug = true;

int profitEarned(int prices[]){

    //Write your solution code below this line
    int profit =  0;
    bool isLoss = false;
    for(int index=0; index < 4 ;index++){
        if ((prices[index+1] - prices[index]) > profit){
            isLoss = true;
            profit = 0;
            profit =  prices[index+1] - prices[index];
        }
    }  
    
    for(int index=0; index < 4 ;index++){
        if (((prices[index] < prices[index+1] ) && ((prices[index+1] - prices[index]) > profit)) 
        || (profit < 0) && (prices[index+1] - prices[index] > profit) ){
            if (isLoss){
                isLoss = false;
                profit = 0;
            }
            profit +=  prices[index+1] - prices[index];

        }
    }
    return profit;

}

int main() {
    //int prices[] = {44000, 54000, 46000, 47000, 48000};
    //int prices[] = {67000, 73000, 57000, 63000, 47000};
    //int prices[] = {55000, 55000, 55000, 55000, 55000};
    //int prices[] = {87000, 67000, 45000, 34000, 33000};

    //int prices[] = {63342,  84834,  5697 , 10510 , 98686};
    int prices[] = {6182 , 33427 , 73197 , 75434 , 27138};
    //                    27245   33427   2237
    //legal: 69252
    //myOutput: 67015
    int profit = 0;

    profit = profitEarned(prices);
    
    if (debug) cout << "------------> profit:" << profit << endl;
    
    return 0;
}