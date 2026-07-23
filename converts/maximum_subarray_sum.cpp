#include<iostream>
#include <climits>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};


    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){

            for(int i=st;i<=end;i++){
                cout<<arr[i]<<" ";
            }

            cout<<endl;
        }
        cout<<endl;
    }


  /*   2nd method 

  int maxsum = INT_MIN;

    for(int st=0;st<n;st++){
        int currsum=0;

        for(int end=st; end<n;end++){
            currsum += arr[end];
maxsum = max(currsum, maxsum);
        }
    }

    cout<<"Max subarray sum= "<<maxsum<<endl;

*/

/* int currsum=0,maxsum=INT_MIN;
for(int val:nums){
    currsum+=val;
    maxsum=max(currsum,maxsum);

    if(currsum<0){
        currsum=0;
    }
} */




}