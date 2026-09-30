#include<iostream>
#include<string>
using namespace std;

bool isVowels(char str){
    if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        return true;
    }

    return false;
    
}

int main(){

    string str ;
    cout<<"Enter the string: "<<endl;
    cin>>str;

    // find the vowels in subarray:
    int k;
    cout<<"Enter the size of a subarray: "<<endl;
    cin>>k;

    int maxlen =0;
    int len = 0;

    for (int i = 0; i < k; i++)
    {
        if (isVowels(str[i]))
        {
            len++;
        }
        
    }
    maxlen = len;

    for (int i = k; i < str.length(); i++)
    {
        if (isVowels(str[i-k]))
        {
            len--;
        }

        if(isVowels(str[i])){

            len++;
        }

        if (len > maxlen)
        {
            maxlen = len;
        }
        
        
    }
    
cout<<"The maximum subarray with vowels is : "<<maxlen;


    return 0;
}