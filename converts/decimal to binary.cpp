#include<iostream>
using namespace std;

int dectobinary(int decimalnum){

    int ans=0,pow=1;

    while(decimalnum>0){
        int rem =decimalnum%2;
        decimalnum=decimalnum/2;

        ans=ans + (rem*pow);

        pow=pow*10; 
    }

    return ans;
}



int main(){
    int decimalnum=50;

    cout<<dectobinary(decimalnum)<<endl;



}

