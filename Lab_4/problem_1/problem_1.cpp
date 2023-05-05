#include<iostream>

using namespace std;

int calcSalary(int a,int b,int c)
{
    if(a<=48)
{
    return a*b;
}
else
{
    if(c)
    {
      return (48)*b+(c)*2*b+(a-48-c)*1.25*b;
    }
    else
    {
        return (48)*b+(a-48)*b*1.25;
    }
}
}
int main()
{    int hrs;
    cout<<"Enter the number of hours worked:"<<endl;
    cin>>hrs;
    int rate;
    cout<<"Enter hourly rate:"<<endl;
    cin>>rate;
    int holidayHrs;
    cout<<"Enter the number of hours he was working on holiday:"<<endl;
    cin>>holidayHrs;
    int ans=calcSalary(hrs,rate,holidayHrs);
    cout<<"The salary is: "<<ans<<endl;

     return 0;
}