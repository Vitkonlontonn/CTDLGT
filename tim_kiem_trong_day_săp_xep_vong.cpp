
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;	cin >> t;
	while(t--){
		int n, k, cp;	cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == k)	cp = i+1;
		}
		cout << cp << endl;
	}
}
