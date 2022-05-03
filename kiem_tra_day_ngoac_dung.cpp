#include<bits/stdc++.h>
using namespace std;
int kiemtra (string s)
{
    stack <char> st; char c;
    int n= s.length(), i;
    for (int i=0; i<n; i++)
    {
        c=s[i];
        if (c=='(' || c=='{' || c=='[') st.push(c);
        else
        {
            if (!st.empty)
        }
    }
}
