#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> res;
    int n;
    cin >> n;
    int k;
    int dem[1000005] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        res.push_back(k);
        dem[k]++;
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (dem[res[i]])
            cout << res[i] << " ";
        dem[res[i]] = 0;
    }
}