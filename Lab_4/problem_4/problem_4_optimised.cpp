#include<iostream>
#include<algorithm>
using namespace std;

int findNumOptimised(int *arr,int n){
    
    sort(arr,arr+n);

    for(int i = 0 ; i<n;i++){
        if(arr[i]-i != 1){
            return i+1;
        }
    }

     return n+1;
}




int main(){
      
      int sz; 
      cout<<"Enter size of array"<<endl;
      cin >> sz;

      int arr[sz-1];

      cout<<"Enter elemenets"<<endl;

      for(int i =0;i<sz-1;i++){
        cin>>arr[i];
      }

      cout<<"Missing number is :" <<findNumOptimised(arr,sz-1)<<endl;


    return 0;
}