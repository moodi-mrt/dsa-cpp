#include<iostream>
using namespace std;

int FindLowerBound(int n, int arr[], int target){
    int low = 0;
    int high = n-1;
    int ans = arr[n];

    while (low <= high)
    {
        int mid = (low + high)/2;
        if (target >= arr[mid])
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        
    }
    return ans;
}

int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;
int arr[size];
cout<<"Enter the array elements: "<<endl;
for (int i = 0; i <size; i++)
{
    cin>>arr[i];
}
int target ;
cout<<"Enter the element you find the lower bound"<<endl;
cin>>target;
FindLowerBound(size, arr, target);


    return 0;
}