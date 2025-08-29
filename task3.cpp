#include <iostream>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int*arr=new int[n];
   for(int i=1;i<=n;i++)
   {
    arr[i]=pow(i,2);
   }
   for(int i=1;i<=n;i++)
   {
    cout<<arr[i]<<" ";
   }
   delete[]arr;
    return 0;
}
