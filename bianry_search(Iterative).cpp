#include<iostream>
using namespace std;

int bs(int a[], int n, int x)
{
    int s = 0;
    int e = n - 1;

    while(s <= e)
    {
        int m = (s + e) / 2;

        if(a[m] == x)
        {
            return m;
        }

        else if(x > a[m])
        {
            s = m + 1;
        }

        else
        {
            e = m - 1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {-1,0,3,5,9,12};
    int n = 6;
    int x = 9;

    cout << bs(a,n,x);

    return 0;
}