#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of integers:";
    cin>>n;
    int* arr= new int[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum+=arr[j];
    }
    int ans=sum/n;
    cout<<ans;
    return 0;
}
