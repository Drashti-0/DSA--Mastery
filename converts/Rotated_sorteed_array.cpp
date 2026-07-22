#include<iostream>
using namespace std;

int main(){
    int st = 0;
int end = 7;
int tar = 7;
    int a[10]={3,4,5,6,7,0,1,2};
    int mid;

    while(st<=end){
        mid=st+(end-st)/2;

        if(a[mid]==tar){
            cout<<mid;
        }

        //lest soreted
        if(a[st]<=a[mid]){
          
           if(a[st] <= tar && tar <= a[mid]){
                end=mid-1;
            }

            else{
                st=mid+1;
            } 
        }

        //right sorted
        else
{
    if(a[mid] <= tar && tar <= a[end])
    {
        st = mid + 1;
    }
    else
    {
        end = mid - 1;
    }
}
    }
return 0;






}