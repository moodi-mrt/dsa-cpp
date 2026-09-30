#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the size of array: "<<endl;
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }

    //tiplet sum;
    int sum ;
    cout<<"Enter the sum you want to find: "<<endl;
    cin>>sum;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum &&( i != k && j != i && k != i))
                {
                   cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<sum;
                }
                
            }
            
        }
        
    }
    
    
}