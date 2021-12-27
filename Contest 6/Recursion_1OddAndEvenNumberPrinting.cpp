#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printOdd(int n){

    if(n <= 0){
        return;
    }

    cout<<n<<endl;
    printOdd(n-2);
}

void printEven(int n){
    if(n <= 1){
        return;
    }

    //cout<<n<<endl;
    printEven(n-2);
    cout<<n<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
cin>>n;

if(n%2 == 0){
    printOdd(n-1);
    printEven(n);
}

if(n%2 == 1){
    printOdd(n);
    printEven(n-1);
}


    return 0;
}
