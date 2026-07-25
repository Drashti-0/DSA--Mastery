#include <iostream>
using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }

    return 1+count(n/10);

}

int main() {
    // your code here

    cout<<count(12345);
    return 0;
}
