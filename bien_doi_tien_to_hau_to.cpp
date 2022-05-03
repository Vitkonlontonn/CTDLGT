#include<bits/stdc++.h>
using namespace std;
int check(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 1;
    }
    return 0;
}
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack <string> q;
        for (int i=s.length()-1; i>=0; i--)
        {
            if(check(s[i])==0)
            {
                q.push(string (1, s[i]));
            }
            else {
                string s1=q.top();
                q.pop();
                string s2=q.top();
                q.pop();
                string tmp=s1+s2+string (1, s[i]);
                q.push(tmp);
                
            }
        }
        
        cout <<q.top() << endl;
    }

}