#include<iostream>
using namespace std;


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
cout<<"Enter the element you want to find: "<<endl;
cin>>target;
int low = 0;
int high = size-1;
int mid;
while (low <= high)
{
    mid = (low + high)/2;
    if (arr[mid] == target) 
    {
        cout<<arr[mid]<<endl;;
        break;
    }
    else if (target > arr[mid])
    {
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    
    
}



    return 0;
}