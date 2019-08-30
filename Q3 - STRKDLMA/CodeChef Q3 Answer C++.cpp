#include <iostream>
using namespace std;
 
int main() {
    char T[10000]; int v,N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>T;
		cin>>v;
		for(int j=0;T[j]!='\0';j++)
		{
			T[j]=T[j]-v;
		}
		cout<<"Case #"<<i+1<<": "<<T<<endl;
	}
	return 0;
}