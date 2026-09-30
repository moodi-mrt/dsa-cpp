#include<iostream>
using namespace std;

int main(){


    string arr = "A man, a plan, a canal: Panama";
    string res ;

    for (int i = 0; i < arr.length(); i++)
    {
        if (isalnum(arr[i]))
        {
            res +=arr[i];
        }
        
    }

    int left = 0;
    int right = res.length() - 1;
    bool isPalindrome = true;
    while (left > right)
    {
        if (res[left] != res[right])
        {
            isPalindrome = false;
            break;
        }
        isPalindrome = true;
        return isPalindrome;
    }
    
    
}