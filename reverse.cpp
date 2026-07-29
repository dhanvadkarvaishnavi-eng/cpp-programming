#include<iostream>
using namespace std;
int main()
{
    string s,reverse;
    cout<<"Enter your string:"<<endl;
    cin>>s;
    rev=s;
    while(s!=0){
        string digit=s%10;
        reverse=reverse*10+digit;
        s=s/10;
    }
    cout<<"Reversed string:"<<reverse<<endl;
    if(s==reverse)
    cout<<"The string is palindrome"<<endl;
    else
    cout<<"The string is not a palindrome"<<endl;
    return 0;
}