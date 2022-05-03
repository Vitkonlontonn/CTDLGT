#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;cin >> n;
    while (n--)
    {
        string s;
        stack <char> st;
        cin >>s;
        int d=0;
        if (s[0]==')') 
        {
            d++;
            s[0]='(';

        }
        if (s[s.length()-1]=='(') 
        {
            d++;
            s[s.length()-1]=')';

        }

        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='(')
            st.push(s[i]);
            else if (!st.empty() && s[i]==')' && st.top()=='(')
            st.pop();
            else if (st.empty()) 
            {d++;
            st.push('(');
            }
        }
        d+=st.size()/2;
        cout <<d<<endl;
        



    }
}