#include<iostream>
using namespace std;

int findNum(int arr[],int sz){
    
    for(int i = 1 ; i<=sz ; i++){
        bool flag = false;
        for(int j = 0 ; j<sz-1;j++){
            if(arr[j]==i){
                flag = true;
            }
        }

        if(!flag){
            return i;
        }
    }

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

      cout<<"Missing number is :" <<findNum(arr,sz)<<endl;


    return 0;
}