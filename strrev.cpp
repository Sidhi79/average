#include<iostream>
using namespace std;

int main()
{

    string str;
    cout<<"enter the string:";
    cin>>str;
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
cout<<str;
    return 0;
}
