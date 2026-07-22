/* #include<iostream>
using namespace std;

int main(){

    int majorityElement(vector<int>& nums){
    int freq=0,ans=0;

    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }

        if(ans==nums[i])
{
    freq++;

}    

    }
}
} */

#include<iostream>
#include<vector>
using namespace std;

int main(){

int nums,target,ans;
int nums[]={2,7,11,15};

int i=0,j=n-1;

while(i<j){
    int pairsum= nums[i] + nums[j];

    if(pairsum>target){
        j--;
    }

    else if(pairsum<target){
        i++;
    }

    else{
        cout<<"Index "<<i<<" "<<j;
    }
}

}