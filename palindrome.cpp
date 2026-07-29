#include<iostream>
using namespace std;
int main()
{
    string s;
    bool palindrome=true;
    cout<<"Enter your string:"<<endl;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1]){
            palindrome=false;
            break;
         }
    }
    if(palindrome)
    cout<<"The string is a palindrome"<<endl;
    else
    cout<<"The string is not a palindrome";
    return 0;
}