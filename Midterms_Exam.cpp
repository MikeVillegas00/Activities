/*Name : Mike Villegas
Activity Name: Midterm Exam
Description : Length Converter
Date : 11/11/21 */

#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES
void Pause();                            
void MeterToKilometer(float Minp, float KilometersConv);
void CelsiusToFarenheit(float Denom, float Input3);
void KilometerToMile (float MilesConv, float Input2);
void KilometerToMeter(float MeterConv, float Input1);

int main()
{   
    //VARIABLE DECLARATIONS
    float KilometersConv = 0.0001; //Kilometer Conversion Factor
    float MeterConv = 1000; // Meter Conversion Factor
    double MilesConv = 0.62137119223733; //Mile Conversiion Factor [International]
    double Celsius,Farenheit,Denom = 1.8;//D is for the constant denominator in farenheit conversion formula
    int MInp,KmInp1,KmInp,KmInp2,MiInp;
    int ch, ans=0;

    do{
        //MAIN MENU
        cout << endl;
        cout << "Measurement Converter App"  << endl << endl;
        cout << "[1] Meter To kilometer"<< endl;
        cout << "[2] Kilometer To Meter"<< endl;
        cout << "[3] Kilometer to Mile" << endl;
        cout << "[4] Celsius To Farenheit" << endl;
        cout << "[0] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:
            {
                cout << "\n<< Convert Meter to Kilometers >>" << endl;
                cout << "Enter Meter/s To Convert: ";
                cin >> MInp;
                MeterToKilometer(KilometersConv, MInp); // Show the conversion by calling the function.
                Pause(); //PAUSE FUNCTION
                break;
            }

            case 2:
            {
                cout << "\n<< Convert Kilomters To Meters >>" << endl;
                cout << "Enter Kilometer/s To Convert: ";
                cin >> KmInp;
                KilometerToMeter(MeterConv, KmInp);
                Pause();//PAUSE FUNCTION
                break;
            }
            case 3:
            {
                cout << "\n<< Convert Kilomters To Miles >>" << endl;
                cout << "Enter Kilometer/s To Convert: ";
                cin >> KmInp1;
                KilometerToMile(MeterConv, KmInp1);
                Pause();//PAUSE FUNCTION
                break;
            }

            case 4:
            {
                cout << "\n<< Convert Celsius to Farenheit >>" << endl;
                cout << "Enter Celsius To Convert: ";
                cin >> KmInp2;
                CelsiusToFarenheit(Celsius, KmInp2);
                Pause();//PAUSE FUNCTION
                break;
            }
            case 0:

            {   cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                Pause();
                break;
            }
        }    

    }while(ans == 0);

} //End of main function

// Define the promptAndWait() function.
void Pause() 
{
    cin.ignore(100, '\n');
    cout << "\nPress any key to continue...";
    cin.get();
}

// Define the dollarsToPeso function.
void MeterToKilometer(float KilometersConv, float Input)
{
    //FORMULA
    KilometersConv = 0.0001;
    //Format
    cout.setf(ios::fixed);
    cout.precision(2);


    //PRINTED OUTPUT
    cout << "Converterd Result is: " << (Input * 0.0001) << "km \n";
}
void KilometerToMeter(float MeterConv, float Input1)
{
    //FORMULA
    MeterConv = 1000;
    //Format
    cout.setf(ios::fixed);
    cout.precision(2);

    //PRINTED OUTPUT
    cout << "Converted Result is: " << (Input1 * 1000) << "m\n";
}
void KilometerToMile(float MilesConv, float Input2)
{
    //FORMULA
    MilesConv = 0.62137119223733;
    //Format
    cout.setf(ios::fixed);
    cout.precision(2);

    //PRINTED OUTPUT
    cout << "Converted Result is: " << (Input2 * 0.62137119223733) << "m\n";

}
void CelsiusToFarenheit(float Denom, float Input3)
{   
    //FORMULA
    Denom = 1.8;
    //Format
    cout.setf(ios::fixed);
    cout.precision(2);

    //PRINTED OUTPUT
    cout << "Converted Result is: " << (Input3 * Denom ) + 32 << "°F\n"; 
}



