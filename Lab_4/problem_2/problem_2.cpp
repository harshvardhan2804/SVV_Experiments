#include<iostream>
using namespace std;

double calculateAmount(int price,int type){
   int ans = 0;

  if(type == 1){
     ans = price - 0.1 * price;
     return ans;
  }

  else{
    if(price > 50000 ){
        if(type==3){
            ans = price - 0.15 * price;
            return ans;
        }
        else{
            ans = price - 0.10 * price;
            return ans;
        }
    }

    else if( price >= 20000 && price <=50000 ){
        if(type==3){
            ans = price - 0.12 * price;
            return ans;
        }
        else{
            ans = price - 0.08 * price;
            return ans;
        }
    }
    
    else{
        if(type==3){
            ans = price - 0.08 * price;
            return ans;
        }
        else{
            ans = price - 0.05 * price;
            return ans;
        }
    }
  }


}




int main(){

    int price,type;

    cout<<"Enter price of commodity :"<<endl;

    cin >> price;

    cout<<"what type it is 1.govt/furniture \n 2.if you are retailer \n 3. if you are agent" <<endl;
    
    cin >> type;

    cout<< "Amount to be paid is : "<<calculateAmount(price,type)<<endl;

    return 0;
}