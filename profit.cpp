#include <iostream>
using namespace std;

/* Question: Find out the maximum profit (positive or negative) that can be earned, and return its value.
int prices[]: Prices of shares */
bool debug = true;

int profitEarned(int prices[]){

    //Write your solution code below this line
    int profit =  0;
    bool isLoss = true;
    
    for(int index=0;index<4;index++)
        if ((prices[index+1] - prices[index]) >= 0 ) isLoss = false;

    if (isLoss){
        int min = (prices[1] - prices[0]);
        for(int index=0;index<4;index++){

            if ((prices[index+1] - prices[index]) > min) min = (prices[index+1] - prices[index]);
        }
        profit = min;
    }else{
        for(int index=0;index<4;index++){
             if ((prices[index+1] - prices[index]) > profit) profit = (prices[index+1] - prices[index]);
        }
    }

    return profit;

}

int main() {
    int prices[] = {61997 , 88776,  77758 , 60568,  94557};
                //      26779                   33989
	//Your Output: 60768
    //Expected Output: 33989

    int profit = 0;

    profit = profitEarned(prices);
    if (debug) cout << "profit:" << profit << endl;
    return 0;
}