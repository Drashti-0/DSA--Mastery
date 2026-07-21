#include<iostream>
using namespace std;
      
int bintodecimal(int binnarynum){
    int ans=0,pow=1;

    while(binnarynum>0){
        int rem=binnarynum%10;
        ans = ans+(rem*pow);

        binnarynum=binnarynum/10;
        pow=pow*2;
    }

return ans;

}

int main(){
    cout<<bintodecimal(1010)<<endl;
}