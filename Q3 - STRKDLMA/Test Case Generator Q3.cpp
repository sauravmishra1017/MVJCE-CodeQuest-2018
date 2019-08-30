#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom()  // Random string generator function.
{

    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    for(int i=0;i<(rand()%1000+1);i++)
    {
        for(int z=0; z < (rand()%10+1); z++)
        {
            cout << genRandom();
        }
        cout<<" "<<(rand()%20+1)<<endl;
    }
    return 0;

}