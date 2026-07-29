#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int choice;
    cout<<"1.Reverse a number\n";
    cout<<"2.Palindrome number\n";
    cout<<"3.Armstrong number\n";
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {int n,reverse=0;
    cout<<"Enter number:"<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<"Reversed number:"<<reverse<<endl;
     break;
        }
        case 2:
        {string s;
    bool palindrome=true;
    cout<<"Enter your string:"<<endl;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1]){
            palindrome=false;
           
         }
    }
    if(palindrome)
    cout<<"The string is a palindrome"<<endl;
    else
    cout<<"The string is not a palindrome";
    break;
        }
        case 3:
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
      break;
      } default:
      cout<<"Invalid choice";
        
    }
    return 0;
}