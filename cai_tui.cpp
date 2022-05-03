#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n >> v;
        int A[1005], C[1005];
        for (int i = 1; i <= n; i++)
            cin >> A[i];
        for (int i = 1; i <= n; i++)
            cin >> C[i];
        int F[1005][1005];
        for (int i=0; i<=v; i++) F[0][i] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                if (A[i] <= j)
                    F[i][j] = max(F[i - 1][j], F[i - 1][j - A[i]] + C[i]);
                else
                    F[i][j] = F[i - 1][j];
            }
        }
        cout << F[n][v] <<endl;
    }
}