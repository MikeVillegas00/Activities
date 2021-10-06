//Name         : Mike Villegas
//Activity Name: OE 3
//Description  : Application of branching with conditional statement
//Date         : 9/22/21


#include <iostream>

using namespace std;

const double Tax1 = 0.05;
const double Tax2 = 0.10;
const double Tax3 = 0.12;

int main(){

    string EmID,Name;
    int hours_worked;
    double Gross_Pay,Total_tax,NetP,Tax,Ans;
    double rate_per_hour;
   
   
    
      //INPUT DISPLAY//
    cout << "Enter Employee ID             : ";
    cin >> EmID;
    cout << "Enter your name               : ";
    cin >>Name;
    cout << "Enter number of hours worked  : ";
    cin >> hours_worked;
    cout << "Enter rate per hour           : ";
    cin >> rate_per_hour;
    cout << "\n=====================================" << endl;

  
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2); 
       
    if (hours_worked <= 40){
        Gross_Pay = rate_per_hour * hours_worked;
    }
    else (hours_worked > 40);{
        Gross_Pay =  rate_per_hour * 40 + 1.5 * rate_per_hour * (hours_worked - 40);
    } 
        if (Gross_Pay <= 20000 && Gross_Pay >= 1){
        Tax = Gross_Pay * Tax1;  
        }
        else if(Gross_Pay >= 30000 && Gross_Pay <= 40000){
        Tax = Gross_Pay * Tax2;
        }
        else if(Gross_Pay >40000){
        Tax = Gross_Pay * Tax3;
        }
        else if(hours_worked ==0 && rate_per_hour ==0){
        cout << "!!INVALID INPUT!!";
        return 0;
    }

       //OUTPUT DISPLAY//
    cout << "Employee ID no.        : " << EmID << endl;
    cout << "Employee Name          : " << Name << endl;
    cout << "Number of hours worked : " << hours_worked  << endl;
    cout << "Rate per Hour          : " << rate_per_hour << endl;
    cout << "Gross Pay              : " << Gross_Pay << endl; 
    cout << "Tax Rate               : " << Tax       << endl;
    cout << "Total Net Pay          : " << Gross_Pay - Tax << endl;
    cout <<"\n====================================" << endl;

    return 0;
}