#include<iostream>
using namespace std;

int bs(int a[], int x, int s, int e)
{
    if(s > e)
    {
        return -1;
    }

    int m = (s + e) / 2;

    if(a[m] == x)
    {
        return m;
    }

    else if(x > a[m])
    {
        return bs(a,x,m+1,e);
    }

    else
    {
        return bs(a,x,s,m-1);
    }
}

int main()
{
    int a[] = {-1,0,3,5,9,12};
    int n = 6;
    int x = 9;

    cout << bs(a,x,0,n-1);

    return 0;
}