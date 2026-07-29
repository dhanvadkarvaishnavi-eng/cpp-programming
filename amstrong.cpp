#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,temp,digit,sum=0;
    cout<<"Enter number:";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+pow(digit,3);
        temp=temp/10;
    
    }
    if(sum==n)
    cout<<n<<"is an armstrong number"<<endl;
    else
    cout<<n<<"is not an armstong number";
    return 0;
}