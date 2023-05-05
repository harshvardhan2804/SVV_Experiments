#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

bool checkString(string str1)
{
    int i, x=0, p;
    p=str1.length();
    for (i = 0; i < p ; i++)
    {
        if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] == ' '))
        {
            continue;
        }
        else{ return false; }
    }
    return true;
}

bool checkString2(string str1)
{
    int i, p;
    p=str1.length();
    for (i = 0; i < 4 ; i++)
    {
        if (isdigit(str1[i]))
        {
            return false;
        }    
    }

    for (i = 4; i < p ; i++)
    {
        if (!isdigit(str1[i]))
        {
            return false;
        }
    }

    
    return true;
}

bool checkId(string str){

    int n = str.length();

    if(n!=10){
        return false;
    }

    
    if(!checkString2(str)){
            return false;
    }
    
    return true;
}

bool checkDesignation(string des){
    if(des.length()>20){
        return false;
    }

    for(int i=0;i<des.length();i++){
        if(isdigit(des[i])){
            return false;
        }
    }

    return true;
}

bool isValidInfo(string name , string id , string des){
    
    if(name.length()< 5 || name.length() > 15 && !checkString(name)){
       cout<<"Name is invalid"<<endl;
       return false; 
    }

    else if(!checkId(id)){
        cout<<"Id is invalid"<<endl;
        return false;
    }

    else if(!checkDesignation(des)){
        cout<<"Designation is invalid"<<endl;
        return false;
    }

    return true;
}


int main(){
    
    string name , emp_id , desig;

    cout<<"Enter name :" <<endl;
    cin >> name;

    cout<<"Enter employee id :" <<endl;
    cin >> emp_id;

    cout<<"Enter designation :" <<endl;
    cin >> desig;

    if(isValidInfo(name,emp_id,desig)){
        cout<<name<<"\n";
        cout<<emp_id<<"\n";
        cout<<desig<<"\n";
    }


    return 0;
}