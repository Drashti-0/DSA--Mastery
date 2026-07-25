#include <iostream>
using namespace std;

int largest(int a[], int max, int index)
{

    if (index == 0)
    {
        return max;
    }

    if (a[index] > max)
    {
        max = a[index];
    }


    return largest(a, max, index - 1);

    /*
    -> in array first of all maximum =0 declare
    -> in main part array declare max=0 declare and index declare bcz index is changed after evry recursive part hal and secound hal everywhere
    -> fir if you know how to cover
    -> secounf if index 0 <big {{ a[index] > max (max means 0) }}
       max = a[index]
    ->return largest(a, max, index - 1);
      in all steps index is change a nd different different index is different value in last mtch the maximum number

    */
}

int main()
{

    int a[5] = {1, 9, 16, 5, 1};
    int max = a[0];
    int index = 4;

    cout << largest(a, max, 4);

    // your code here
    return 0;
}
