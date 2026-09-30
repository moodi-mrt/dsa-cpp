#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> justifyText(vector<string> words, int l)
{
    int size = words.size();
    vector<string> ans;
    int i = 0;
    while (i < size)
    {
        int j = i;
        int currentlen = 0;
        while (j < size && currentlen + (int)words[j].size() + (j - i) <= l)
        {
            currentlen = currentlen + words[j].size();
            j++;
        }

        int gaps = j - i - 1;
        string temp = "";
        if (j == size || gaps == 0)
        {
            for (int k = i; k < j; k++)
            {
                temp = temp + words[k];
                if (k < j - 1)
                {
                    temp = temp + " ";
                }
            }
            while ((int)temp.size() < l)
            {
                temp = temp + " ";
            }
        }
        else {
            int spaces = l - currentlen;
            int each = spaces / gaps;
            int extra = spaces % gaps;
            for (int k = i; k < j; k++)
            {
                temp = temp + words[k];
                if (k < j - 1)
                {
                    int cnt = each;
                    if (k - i < extra)
                        cnt++;
                    temp = temp + string(cnt, ' ');
                }
            }
        }

        ans.push_back(temp);
        i = j;
    }
    return ans;
}

int main()
{
    int size;
    cin>>size;
    vector<string> words(size);
    for (int i = 0; i < size; i++)
    {
        cin>>words[i];
    }
    int l;
    cin>>l;


    vector<string> ans = justifyText(words, l);

    for (string &s: ans)
    {
        cout<<s<<endl;
    }
    return 0;
}
