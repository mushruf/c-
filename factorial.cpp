#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    temp=1;
    for(int i =1;i<=n;i++)
    {
    temp*=i;
    }
    cout<<temp;
}