#include<iostream>
using namespace std;


void isEligible(int java,int cpp,int ooad){
   
    if(java>=70 && cpp>=60 && ooad >=60 && (java+cpp+ooad >=220 || java+cpp>=150)){
        

       if(java+cpp+ooad > 240){
        cout<<"you are eligible with  scholoarship"<<endl;
       }  
       else{
         cout<<"you are eligible without  scholoarship"<<endl;
       }  
    
    }

    else{
        cout<<"you are not eligible"<<endl;
    }
  
}



int main(){

    int java,cpp,ooad;

    cout<<"Enter java,cpp,ooad marks" <<endl;


    cin >> java >> cpp >> ooad;

    isEligible(java,cpp,ooad);
     

    return 0;
}