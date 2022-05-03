#include <bits/stdc++.h> 
using namespace std; 

string Sum(int k, string a,string b)
{ 
	string res; 
	int nho=0; 
	while(a.size()<b.size()) a="0"+a; 
	while(a.size()>b.size()) b="0"+b; 
	bool ok=false; 
	//if(a<b) swap(a,b); 
	int len=a.size()-1; 
	for(int i=len;i>=0;i--)
	{ 
		int so=int (a[i]-'0')+int (b[i]-'0')+nho;
 		if(so>k-1)
		{ 
			res=char(so-k+'0')+res; 
			nho=1;
  		} 
		else 
		{ 
			res=char(so+'0')+res; 
			nho=0; }
		if (i==0 && nho>0) res='1'+res;
   } return res; 
} 

   int main (){ int t; cin>>t; while(t--)
   { 
   int k;
   cin >>k;
  	 	string a,b; cin>>a>>b; cout<<Sum(k,a,b)<<endl; 
   } 
}