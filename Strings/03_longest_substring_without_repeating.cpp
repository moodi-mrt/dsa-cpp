#include<iostream>
#include<cstring>
using namespace std;
int main(){
string str;
cout<<"Enter the string: "<<endl;
cin>>str;

int r=0;
int l = 0;
int maxlen =0;
int frq[256] = {0};
for (int i = 0; i < str.length(); i++)
{
    frq[str[r]]++;
    while (frq[str[r]]>1)
    {
        frq[str[l]]--;
        l++;
    }
    int currlen = r-l + 1;
    maxlen =max(maxlen, currlen);
    
}

cout<<maxlen;


    return 0;
}