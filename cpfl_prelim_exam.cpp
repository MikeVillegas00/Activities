//Name         : Mike Villegas
//Activity Name: Exam
//Description  : Prelim Hands-On Exam
//Date         : 10/6/21


#include <iostream>
#include <string>

using namespace std;

const double tax = 0.12;

int main(void){

    //Declarations
    string EmID,Name, Status,PD;
    int hours_worked,Misc;
    double Gross_Pay,Total,NetP,Tax,Ans;
    double rate_per_hour,TaxGP;
    
    Tax = 0.12;
    float PH = 150;
    float SSS = 250;
    float PG = 200;
   
    
      //INPUT DISPLAY//
    cout << "Enter your name              : ";
    getline(cin,Name);
    cout << "Enter Employee number        : ";
    cin >> EmID;
    cout << "Date of Payday               : ";
    cin >> PD;
    cout << "\n";
    cout << "Hours worked    : ";
    cin >> hours_worked;
    cout << "Hourly pay rate : ";
    cin >> rate_per_hour;
    
    
  
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2); 

    if(hours_worked ==0 && rate_per_hour ==0){
        cout << "!!INVALID INPUT!!";
        return 0;
    }
    else if (hours_worked <= 40){
        Gross_Pay = rate_per_hour * hours_worked;
    }
    else if (hours_worked > 40){
            Gross_Pay =  rate_per_hour * 40 + 1.5 * rate_per_hour * (hours_worked - 40);
    }  
       
    //Formula
    Misc = PH + SSS + PG;
    TaxGP = Tax * Gross_Pay;
    NetP = Gross_Pay - (Misc + TaxGP); 
 

       //OUTPUT DISPLAY//
    cout << "\n_____________________________________" << endl;
    cout << "Payroll summary for : " << Name << endl;
    cout << "Employee ID no.     : " << EmID << endl;
    cout << "Payroll date        : " << PD   << endl;
    cout << "\n ";

    cout << "You worked for " << hours_worked << " hours at P" << rate_per_hour <<  " per hour " << endl;
    cout << "Gross Pay           : " << Gross_Pay << endl; 
    cout << "Withholding Tax     : " << Tax * Gross_Pay  << endl;
    cout << "Philhealth          : " << PH   << endl;
    cout << "SSS                 : " << SSS  << endl;
    cout << "Pagibig             : " << PG   << endl;
    cout <<"\n________________________________________" << endl;
    cout << "Net Pay : " << NetP << endl;
    
      //Conditions for Employee status
    if(NetP <= 5000.00){
        cout << "Employee Status : Contractual" << endl;
    }
    else if(NetP >= 5001.00 && NetP <= 10000){
        cout << "Employee Status : Probationary  "  << endl;
    }
    else if(NetP > 10001){
        cout << "Employee Status : Regular " << endl;
    }  

    return 0;
}