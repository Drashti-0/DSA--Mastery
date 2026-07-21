#include<iostream>
using namespace std;

int main(){
    int price[5]={7,4,5,2,1};
    int maxprofit=0,bestbuy=price[0];

    for(int i=1;i<5;i++){
        maxprofit = max(maxprofit, price[i] - bestbuy);
bestbuy = min(bestbuy, price[i]);
    }

    cout<<" "<<maxprofit;









}