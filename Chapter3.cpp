#include <iostream>

using namespace std;

int main(void){
    int num_hours_work;
    double rate_per_hour;
    double gross_pay;

    cout << "Numberog hours worked : ";
    cin >> num_hours_work;
    cout << 'Enter rate per hour   : ';
    cin >> rate_per_hour;

    if(num_hours_work==0 || rate_per_hour ==0){
        cout << "You did not put anything!";
        return 0;
    }
    else if(num_hours_work <= 40){
        gross_pay = rate_per_hour  * num_hours_work;
    }
    else if{(num_hours_work>40)
         gross_pay = rate_per_hour * 40 + 1.5 * (num_hours_work - 40);


    }

    cout << "Number of hours worked : " << num_hours_work << endl;
    cout << "your Gross Pay        >> " << gross_pay      << endl;



    return 0;
    
}