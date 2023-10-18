#include<iostream>
using namespace std;
int main()
{
    int n;
    long factorial=1;
    cout<<"enter a positive integer";
    cin>>n;
    if(n<0)
    cout<<"error";
    else{
        for(int i=1;i<=n;++i)
        {
            factorial*=i;
        }
        cout<<"factorial of"<<n<<"="<<factorial;
    }
    return 0;
}