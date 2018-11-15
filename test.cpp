#include <iostream>
using namespace std;
int sort(int [], int);
int main() 
{
    int ar[10],size,i,c;
    cout<<"enter the size:";
    cin>>size;
    c=sort(ar,size);
    cout<<c;
   // for(i=0;i<size;i++)
    //{
      //  cout<<ar[i];
  //  }
    return 0;
}
int sort(int a[],int s)
{
    int i,j,y;
    cout<<"enter the element";
    cin>>a[0];
    for(i=1;i<s;i++)
    {
        cin>>y;
        for(j=i-1; i>0 && a[i]>y; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=y;
    }
    return(a[j+1]);
}
