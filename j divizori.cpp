// DIVIZORII UNUI NUMAR
#include <iostream>
using namespace std;

int x;
int main()
{
    cout<<"x=";
    cin>>x;
    for (int i=1; i<=x/2; i++)
        if(x%i==0) cout<<i<<" ";
    cout<<x< endl;
    return 0;
}
