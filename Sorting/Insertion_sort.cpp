#include<iostream>
using namespace std;
int main()
{
    int a[5] = {4, 1, 3, 2, 0};
    int n = sizeof(a)/ sizeof(int);

    cout<<"--- Insertion Sort ---"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;

    for (int i = 1; i <= n-1; i++)
    {
        int j = i-1;
        int temp = a[i];
        while (j >= 0 && temp < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;

}