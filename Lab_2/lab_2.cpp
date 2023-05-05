#include<iostream>
using namespace std;

bool stub_isPrime(int n){
    if(n==2 || n==3){
        return true;
    }

    if(n==4){
        return false;
    }
    if(n<-1){
        return false;
    }
}

bool isPrime(int n){
     if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

bool stubIsfactor(int x,int p){
    if(x==16 && p ==2){
        return true;
    }

    if(x==16 && p ==3){
        return false;
    }
    
}

bool isFactor(int x,int p)
{
    if(p==0){
        cout<<"can't divide"<<endl;
        return false;
    }
    if(x%(p*p)==0){
        return true;
    }
    return false;
}

int SmartNo(int term){

    if(term<0 || term>50){
        return -1;
    }
    int i=2;
    int count=0;
    bool flag=true;
    while(flag){
        for(int j=1;j<i;j++){
            if(isFactor(i,j) && isPrime(j)){
                count++;
                break;
            }
        }
        i++;
        if(count==term){
                flag=false;
            }
    }
    return i-1;
}

int main(){
    // int x;
    // cout<<"enter the term you want"<<endl;
    // cin>>x;
    // cout<<"the smart no is "<<SmartNo(x)<<endl;

    // cout << "Testing" << endl;
    // cout<<"testing smart for 1 :"<< SmartNo(1)<<endl;
    // cout<<"testing smart for 2 :"<< SmartNo(2)<<endl;
    // cout<<"testing smart for 49 :"<< SmartNo(49)<<endl;
    // cout<<"testing smart for 50 :"<< SmartNo(50)<<endl;
    // cout<<"testing smart for 10 :"<< SmartNo(10)<<endl;
    // cout<<"testing smart for 60 :"<< SmartNo(60)<<endl;

    // cout <<"Testing isPrime for -1:"<<isPrime(-1)<<endl;
    // cout <<"Testing isPrime for 10:"<<isPrime(10)<<endl;
    // cout <<"Testing isPrime for 10:"<<isPrime(0)<<endl;
    // cout <<"Testing isPrime for 10:"<<isPrime(7)<<endl;

    cout<<"Testing for isFactor for 16 and 2 : " <<isFactor(16,2)<<endl;
    
    cout<<"Testing for isFactor for 16 and 5 : " <<isFactor(16,5)<<endl;

    cout<<"Testing for isFactor for 16 and 0 : " <<isFactor(16,0)<<endl;
}