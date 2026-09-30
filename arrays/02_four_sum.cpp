#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<vector<int>> FindFourSum(int n, vector<int> arr){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i>0 && arr[i] == arr[i-1])
        {
            continue;
        }
        
       for (int j = i+1; j < n; j++)
       {

        if (j>0 && arr[j] == arr[j-1])
        {
            continue;
        }
        int k = j+ 1;
        int l = n-1;

        while (k<l)
        {
            sum = arr[i] + arr[j] + arr[k] + arr[l];

            if (sum>0)
            {
                l--;
            }
            else if (sum<0)
            {
                k++;
            }
            else{
                vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            
            while (k<l && arr[k] == arr[k-1])
            {
                k++;
            }
            while (k<l && arr[l] == arr[l -1])
            {
                l--;
            }
            
        }
        
        return ans;
       }
       
        
        
    }
    




}

int main(){
int size;
cout<<"Entr the size : "<<endl;
cin>>size;

vector<int> arr(size);

cout<<"Enter the elements: "<<endl;
for (int i = 0; i < size; i++)
{
    cin>>size;
}



    return 0;
}