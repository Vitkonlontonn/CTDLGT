#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
int n;
int A[1000];
void nhap ()
{
    res.clear();
    int n, A[100];
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> A[i];  
}
void sinh (A[])
{
    for (int i = 1; i<=n; i++)
    vector<int> p;
    p.push_back(A[i]);
    res.push_back(p);
    int m=n;
    for (int j = 1; j < n; j++)
        {
            vector<int > q;

            for (int i = 1; i <= m; i++)
            {
                A[i] = A[i] + A[i + 1];
                q.push_back(A[i]);

            }
            res.push_back(q);
            m--;
        }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap ();
        sinh (A);
        for (int i=0; i<res.size(); i++)
        {
            cout <<"[";
            for (int j=0; j<res[i].size()-1; j++)
            {
                cout <<res[i][j]<<" ";
            }
            cout <<res[i][res[i].size()-1]<<"] ";
    }
    cout <<endl;
}
}