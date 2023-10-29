#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[100] = "coding";
    int n;
    cin>>n;
    int len = strlen(s);
    int i = len-1;
    while(i>=0)   // to shift elements of array n places ahead so that we get n free spaces in front 
    {
        s[i+n] = s[i];
        i--; 
    }
    cout<<s<<endl; 
    i = len;
    int j=0;
    for(int k=0;k<n;k++)
    {
        s[j] = s[i];
        i++;
        j++; 
    }
    cout<<s<<endl; 
    s[len] = '\0';
    cout<<s<<endl; 
