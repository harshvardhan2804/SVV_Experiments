#include<iostream>

using namespace std;

void sumOfNum(int *arr,int a,int sum) // to find the pairs which have equivalent sum
{
    for(int i=0;i<a;i++) // we are using nested loops to iterate through the arrays and searching for pairs
    {
        for(int j=i;j<a;j++)
        {
            if(arr[i]+arr[j]==sum) // using two pointer we have search for the pairs
            {
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}

int main()
{   int n;
    cout<<"Enter the size of array"<<endl;  // size of array is taken as input

    cin>>n;

    cout<<"Enter elements"<<endl;  // elements are taken as input

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int t;
    cout<<"enter total sum:"<<endl;  // required sum is taken as input
    cin>>t;

    cout<<"pairs are :"<<endl;
    sumOfNum(arr,n,t); // function has been called

     return 0;
}
