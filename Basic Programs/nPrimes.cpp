#include<iostream>
using namespace std;
int main()
{
    int N, i, j;
    cin>>N;

    for(i=0; i<=N; i++)
    {
        for(j=2; j<=i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }
         if (i==j)
            {
                cout<<j<<" ";
            }
    }
}