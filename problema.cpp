#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in.txt");

int main()
{
    int a[10], i, n, k, prod, prodmax=0, j;
    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>a[i];
    }
    cout <<n<<endl;
    for(i=1; i<=n-1; i++)
    {
        //cout<<a[i]<<endl;
        //prod=prod*a[i];
        //cout<<"prod= "<<prod<<endl;
        prod=1;
        for(j=i; j<=n; j++)
        {
            prod=prod*a[j];
            cout<<"i="<<i<<endl;
            cout<<"j="<<j<<endl;
            cout<<"prod="<<prod<<endl;
            if(prod>prodmax)
            {
                prodmax=prod;
            }
        }
    }
    cout<<prodmax;
    return 0;
}
