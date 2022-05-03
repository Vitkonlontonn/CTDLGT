#include<bits/stdc++.h>
using namespace std;
int m= 1e9+7;
int main ()
{
    int t, n;
    long long a;
     cin >> t;
     while (t--)
     {
         cin >> n;
         priority_queue <long long, vector <long long>, greater<long long >> q;
         //tự động sắp xếp giảm dần, greater tương tự sort
         for (int i=0; i<n; i++)
         {
             cin >> a;
             q.push(a);
         }
         long long kq=0;
         while (q.size()>=2)
         {
             long long x=q.top(); q.pop();
             long long y=q.top(); q.pop();
             long long tong = (x+y)%m;
             q.push(tong);
             kq=(kq+tong)%m;
         }
         cout << kq << endl;


     }

}