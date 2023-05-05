#include<iostream>

using namespace std;

void sumOfNum(int *arr,int sz,int sum)
{  
    
   sort(arr,arr+sz); // here we have sorted the array using inbuillt function of stl
   int i=0;
   int j=sz-1;
   while(i<=j)
   {
      if(arr[i]+arr[j]<sum) // we are checking if sum if less or more and accordingly increasing the pinters
      {
       i++;
      }
      else if(arr[i]+arr[j]>sum)  // if sum is more then decreasing one pointer from last
      {
        j--;
      }
      else
      {
        cout<<arr[i]<<","<<arr[j]<<endl; // if it is equal to sum then we are printing it
        i++;
        j--;
      }
   }
}
int main()
{   int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int t;

    cout<<"enter total sum:"<<endl;

    cin>>t;
    cout<<"pairs are:"<<endl;

    sumOfNum(nums,n,k);

     return 0;
}