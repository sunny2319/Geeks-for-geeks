#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cin>>k;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=k)
				cnt+=1;
		}
		int n2=0;
		for(int i=0;i<cnt;i++)
		{
			if(arr[i]<=k)
			{
				n2+=1;
			}
		}
		int mcnt=n2;
		//cout<<cnt<<mcnt;
		for(int i=1;i<n-cnt+1;i++)
		{
			if(arr[i-1]<=k)
			{
				n2-=1;
			}
			if(arr[i+cnt-1]<=k)
			{
				n2+=1;
			}
			if(n2>mcnt)
			{
			    //cout<<mcnt<<endl;
				mcnt=n2;
			}
 
		}
		cout<<cnt-mcnt<<endl;
	}
	return 0;
}
