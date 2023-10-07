#include<iostream>
using namespace std;
int main()
{
    int a[10],n,first,last,mid,i;
    cout<<"enter element of array \n";
    for(i=0;i<10;i++)
    cin>>a[i];
    cout<<"enter the element to be searched\n";
    cin>>n;
    first=0;
    last=9;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<n)
      first=mid+1;
      else if(a[mid]==n)
      {
        cout<<"the number is found at position "<<mid<<endl;
        break;
      }
      else
      last=mid-1;
      mid=(first+last)/2;
    }
    if(first>last)
    cout<<"the number is not found in given array\n";
    cout<<endl;
    return 0;
    
    }
