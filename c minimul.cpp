// MINIMUL A DOUA NUMERE
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int v[100];
    int i;
    for (i = 1; i <= N; i++)
        cin>>v[i];
    int minim = v[1];
    for (i = 2; i <= N; i++)
        if (minim > v[i])
            minim = v[i];
    cout<<minim;
    return 0;
}
