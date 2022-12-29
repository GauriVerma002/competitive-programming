#include<iostream>
  using namespace std;
   int main()
   {
       int a[7]={1,13,12,11,6,3,2};
       int start=0,end=6,mid=(start+end)/2,ans;
       while(start<end)
       {
           if(a[mid]>a[mid+1])
           {
               if(a[mid-1]<=a[mid])
               {
                   ans=mid;
                   break;
               }
               end=mid;
           }
           else
           {
               if(a[start]>a[mid])
               {
                ans=start;
                break;
                }
                start=mid+1;
           }
            mid=(start+end)/2;
       }
       cout<<a[ans]<<endl;
       return 0;
   }
