#include <bits/stdc++.h>
using namespace std;
double entropy(double x, double p0)
{
    
    double r1 = (double)(log(x) / log(2));
    double r2 = (double)(log(1 - x - p0) / log(2));
    double r3 = (double)(log (p0)/ log(2));
    if (x==0) r1=0;
    if (x==1-p0) r2=0;
    if (p0==0) r3=0;
    return -(r1 * x + r2 * (1 - x - p0) +r3 * p0);
}
int main()
{
    double max = 0, min = 10000;
    double p0;
    cin >> p0;
    

    for (double i = 0; i <= 1 - p0; i += 0.01)
    {
        
            cout << "p = " << i << "  q = " << 1-p0-i << "    H(X) = " << entropy(i, p0)  << endl;
            if (entropy(i, p0)  > max)
                max = entropy(i, p0) ;

            if (entropy(i, p0)  < min)
                min = entropy(i, p0);
        
    }
    cout << "max=" << max << endl;
    cout << "min=" << min << endl;
}