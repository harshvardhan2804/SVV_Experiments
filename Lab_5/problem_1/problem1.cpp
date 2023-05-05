#include<iostream>
#include<math.h>
using namespace std;


void printRoots(int a , int b ,int c)
{
    // checking for the invalid cases 
   if(a<0 || a > 100 || b<0 || b > 100 || c<0 || c > 100){
    cout<<"invalid input"<<endl;
    
   }
   // checking whether it is a quadratic or not
   else if(a==0){
    cout<<"Not a quadratic equation"<<endl;
    
   }

   else{
    int d = b*b - 4*a*c;
   
   // here we are checking whether roots are real or equal or imaginary and also printing them
    if(d>0){
       cout<<"Roots are real"<<endl;
       float x1 = (-1*b + sqrt(d))/2*a;
       float x2 = (-1*b - sqrt(d))/2*a;

       cout << x1 <<endl;
       cout << x2 <<endl;
    }  
    

    else if(d==0){
       cout<<"Roots are real and equal"<<endl;
       float x1 = (-1*b )/2*a;
       
       cout << x1 <<endl;
       
    }  
    else{
        cout<<"roots are imaginary"<<endl;
    }

    }


}

int main(){
    
    int a,b,c;

    cout<<"enter coeff of equations:"<<endl;
    
    cin >> a >> b >> c;

    printRoots(a,b,c);

    return 0;
}