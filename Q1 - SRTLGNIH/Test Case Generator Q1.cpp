#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    unsigned long int t,n,m;
    srand(time(NULL));
    t=10;
    cout<<t<<endl;
    for(int i=0;i<10;i++)
    {
        n=rand()%1000+1;
        cout<<n<<endl;
        for(int j=0;j<n;j++)
        {
            m=rand()%10000+1;
            cout<<m;
            if(i!=n-1)
            cout<<" ";
        }
        cout<<endl;
    }
	return 0;
}