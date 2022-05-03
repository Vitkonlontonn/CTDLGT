#include <bits/stdc++.h>
using namespace std;
double entropy(double x)
{
    
    double r1 = (double)(log(x) / log(2));
    double r2 = (double)(log(1 - x) / log(2));
    if (x==0) r1 = 0;
    if (x==1) r2 = 0;
    return -(r1 * x + r2 * (1 - x));
}
int main()
{
    double max = 0, min = 10000;
    for (double  i = 0; i <= 1; i+=0.01)
    {
        cout <<"p = "<<i<<"    H(X) = "<< entropy(i)<<endl;
        if (entropy(i) > max)
            max = entropy(i);
            
        if (entropy(i) < min)
            min = entropy(i);
    }
    cout << "max=" << max << endl;
    cout << "min=" << min << endl;
    
}