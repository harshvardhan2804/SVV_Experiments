#include<iostream>
#include<math.h>
using namespace std;


double calculateAmount(int calls){
    int ans = 0;
    if(calls<0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    if(calls <= 120){
        ans = 300;
    }

    else if(calls > 120 && calls <= 190){
        ans = 300 + (calls-120);
    }

    else if(calls > 190 && calls <= 240){
        ans = 300 + 70 + (calls-190)*(0.80);
    }

    else{
        ans = 300 + 70 + 40 + (calls-240)*(0.40) ;
    }

    return ans;

}

int main(){
    
    int calls;
    cout<<"Enter total calls :" <<endl;
    
    cin >> calls;
    
    cout<<"call charge is :"<<calculateAmount(calls)<<endl;

    return 0;
}