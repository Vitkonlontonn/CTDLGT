// #include<bits/stdc++.h>
//  using namespace std;
//  int n, A[100]={0};
//  bool ok=false;
//  void in ()
//  {

// 	 for (int i=1; i<=n; i++) cout <<A[i]<<" ";
// 	 cout <<endl;
//  }
//  void sinh ()
//  {
// 	 int i=n;
// 	 while (A[i]!=0)
// 	 {
// 		 A[i]=0;
// 		 i--;
// 	 }
// 	 if (i==0) ok=true;
// 	 else A[i]=1;
//  }
// int main ()
// {
//    cin >> n;

//   while (!ok)
//   {
// 	  in ();
// 	  sinh ();

//   }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int n, A[100];
// bool ok=false;

// void in ()
// {
// 	for (int i=1; i<=n; i++) cout <<A[i];
// 	cout <<" ";
// }
// void sinh ()
// {
// 	int i=n-1;
// 	while (A[i]>A[i+1])
// 	{
// 		i--;

// 	}
// 	if (i==0) ok=true;
// 	else
// 	{
// 		int j=n;
// 		while (A[j]<A[i])
// 		{

// 			j--;
// 		}
// 		swap (A[i], A[j]);
// 		int d=i+1, c=n;
// 		while (d<c)
// 		{
// 			swap (A[c], A[d]);
// 			d++; c--;
// 		}
// 	}

// }
// int main ()
// {
// 	cin >> n;
// 	for (int i=1; i<=n; i++) A[i]=i;
// 	while (!ok)
// 	{
// 		in ();
// 		sinh ();
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std;
// int n,k, A[100];
// bool ok= false;
// void in (){
// 	for (int i=1; i<=k; i++) cout <<A[i];
// 	cout <<" ";
// }
// void sinh ()
// {
// 	int i=k;
// 	while (A[i]==n-k+i) i--;
// 	if (i==0) ok=true;
// 	else {
// 		A[i]++;
// 		for (int j=i+1; j<=k; j++)
// 		A[j]=A[j-1]+1;
// 	}
// }
// int main ()
// {
// 	cin >>n>>k;
// 	for (int i=1; i<=n; i++) A[i]=i;
// 	while (!ok)
// 	{
// 		in ();
// 		sinh ();
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std;
// void sinh (int a[], int n, int k)
// {
//     int i=k;
//     while (a[i]==n-k+i)
//     {
//         i--;
//     }
//     if (i==0) for (int p=1; p<=k; p++) cout <<p<<" ";
//     else
//     {
//         a[i]++;
//         for (int j=i+1; j<=n; j++)
//         a[j]=a[j-1]+1;
//         for (int p=1; p<=k ;p++) cout <<a[p]<<" ";
//     }
//     cout <<endl;
// }
// int main ()
// {
//     int t; cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >>n>>k;
//         int a[k+1];
//         for (int i=1; i<=k; i++) cin >>a[i];
//         sinh(a,n,k);
//     }
// }
#include <bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;
long long lt(int a, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return a % m;
    long long x = power(a, n / 2);
    if (n % 2 == 0)
        return (x * x) % m;
    return (x * x % m * a % m);
}
int main()
{ 
    long long a, n;
    while (1)
    {
        cin >>
        if (!a && !n)
            break;
        cout << lt(a, n) << endl;
    }
}
