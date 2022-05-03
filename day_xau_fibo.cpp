#include<bits/stdc++.h>
using namespace std;
long long F[100];
char fbword (int n, long long k)
{
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (k<=F[n-2]) return fbword (n-2, k);
    return fbword (n-1, k- F[n-2]);
    

}
int main ()
{
    int t;
    cin >> t;
    F[0]=0;
    F[1]=1;
    for (int i=2; i<=92; i++) F[i]= F[i-1]+ F[i-2];
    while (t--)
    {
        int n;
        long long k;cin >> n >> k;
        cout <<fbword(n, k) << endl;

    }
}