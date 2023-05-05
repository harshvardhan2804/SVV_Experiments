#include<iostream>
using namespace std;

class Date{
  
  int day;
  int month;
  int year;

public:

  Date(int day, int  month , int year){
    this->day = day;
    this->month = month;
    this->year = year;
  }

  void calcNextDay(int day,int month ,int year);
  void printNextDay(int day,int month ,int year);
};

void Date :: printNextDay(int day,int month ,int year){
    cout<<"Date :"<< day <<"/"<<month<<"/"<<year<<endl;
}

void Date :: calcNextDay(int day,int month ,int year)
{
   
   if(day == 31 && month == 12 && year == 2025){
    cout<<"Output will be invalid as it gets out of bound"<<endl;
   }

  if(day>31 || month > 12 || year > 2025 || day < 1 || month < 1 || year <1901){
    cout<<"Invalid Date"<<endl;
  }

  else{

    if(day == 31){
       if(month==12){
         day = 01;
         month = 01;
         year +=1;
         printNextDay(day,month,year);
       }

       else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
         cout<<"Invalid Date"<<endl;
       }

       else{
         day = 01;
         month +=1;
         printNextDay(day,month,year);
       }
        
    }

   else if(day == 30){
       

        if(month == 2){
         cout<<"Invalid Date"<<endl;
        }

       else{
         day+=1;
         month;
         printNextDay(day,month,year);
       }
        
    }
    else if(month == 2 && day == 28){
        day = 01;
        month = 03;
        printNextDay(day,month,year);
    }

    else{
        day += 1;
        printNextDay(day,month,year);
    }
  }
}

int main(){
    
    int dd , mm , yyyy;

    cout << "Enter date :"<<endl;

    cin >> dd >> mm >> yyyy;

    Date d = Date(dd,mm,yyyy);

    d.calcNextDay(dd,mm,yyyy);
    
    return 0;
}