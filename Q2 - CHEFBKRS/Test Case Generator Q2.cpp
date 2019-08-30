#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    unsigned long int n,m;
    srand(time(NULL));
	n=rand()%1000+1;
	m=rand()%999+2;
	cout<<n<<" "<<m<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
		{
			cout<<rand()%10000+1<<" ";
		}
		cout<<endl;
    }
	return 0;
}