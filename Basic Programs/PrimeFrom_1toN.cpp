#include<iostream>
using namespace std;
int main()
{
    int n1, n2, i, j;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;

    for(i=n1; i<=n2; i++)
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