#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>n;
    }

    //s-sn
    //s^2 - sn^2
    long long Sn = (n*(n+1))/2;
    long long S2n = (n*(n+1)*(2*n + 1))/6;
    long long S = 0;
    long long S2 = 0;

    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += arr[i] * arr[i];
    }
    
    long long val1 = S - Sn;
    long long val2 = S2 - S2n;
    val2 = val2/val1;
    long long x = (val1 + val2)/2;
    long long y = x - val2;

    
}