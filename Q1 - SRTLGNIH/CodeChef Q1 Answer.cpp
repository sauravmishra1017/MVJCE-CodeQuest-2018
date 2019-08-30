#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int T,a[1000],a1[1000],a2[1000],sorteda[1000],sorteda1[1000],min,intlen1,intlen2,intpow,n,pos=0,temp=0;
	string len;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    min=0;
	    pos=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			len=to_string(a[j]);
			intlen1=(len.length()+1)/2;
			intlen2=len.length()-intlen1;
			intpow=pow(10,intlen2);
		    a1[j]=a[j]/intpow;
			a2[j]=a[j]%intpow;
			a1[j]=abs(a1[j]-a2[j]);
		}
		for(int j=0;j<n-1;j++)
		{
			min=a1[j];
			pos=j;
			for(int k=j+1;k<n;k++)
			{
			    if(min>a1[k])
			    {
			        min=a1[k];
			        pos=k;
			    }
			}
			temp=a1[j];
			a1[j]=a1[pos];
			a1[pos]=temp;
			temp=a[j];
			a[j]=a[pos];
			a[pos]=temp;
		}
		cout<<"Case #"<<(i+1)<<":";
		for(int j=0;j<n;j++)
			cout<<" "<<a[j];
		cout<<endl;
	}
	return 0;
}