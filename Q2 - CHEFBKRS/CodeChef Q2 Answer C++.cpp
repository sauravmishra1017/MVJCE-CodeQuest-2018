#include<iostream>
using namespace std;
int main()
{
	long int min1, min2, temp;
	int i,j,n,m;
	cin>>n>>m;
	long int a[1000][1000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}		
	for(i=0;i<n;i++)
	{
		if(a[i][0]<a[i][1])
			{min1=a[i][0];min2=a[i][1];}
		else	
			{min1=a[i][1];min2=a[i][0];}
		for(j=2;j<m;j++)
		{
			if(a[i][j]<=min1)
				{
					temp=min1;
					min1=a[i][j];
					min2=temp;
				}
			else if(a[i][j]<=min2)
				min2=a[i][j];
		}
		
		cout<<min2-min1<<endl;
	}
	return 0;
}