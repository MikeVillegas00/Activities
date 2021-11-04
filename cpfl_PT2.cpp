/*Name : Mike Villegas
Activity Name: PT 2
Description : Conversion App using functions
Date : 04/11/21 */

#include <iostream>
using namespace std;

//function for monetary formatting
    struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
    };

 
// First function prototypes
void promptAndWait();                            
void dollarsToPeso(float rate, unsigned dollars);
void pesoTodollars(float Prate, unsigned peso);

int main()
{   //Declare the variables for the user input.
    
    float conversionRate = 50.73; // $1 = 50.73 Pesos
    float conversionPRate = 0.019728;
    unsigned dollarsIn,pesoIn;
    int ch, ans=0;

    do{
        //system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[0] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:
            {
                cout << "\n<< Convert Dollar to PHP >>" << endl;
                dollarsToPeso(conversionRate, dollarsIn); // Show the exchange rate by calling the function.
               
                // Prompt the user and take US dollars input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : ";
                cin >> dollarsIn;
                dollarsToPeso(conversionRate, dollarsIn); // Show the conversion by calling the function.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 2:
            {
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                pesoTodollars(conversionPRate, pesoIn);//exchange rate func

                // Prompt the user and take Philippine Peso input.
                cout << "Enter a PHP amount (without the peso sign, commas or a decimal : ";
                cin >> pesoIn;
                pesoTodollars(conversionPRate, pesoIn);
                promptAndWait();//Promt function
                break;
            }
            case 0:

            {   cout << "Conversion App Terminated \nThank you for using the app!";
                promptAndWait();
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                promptAndWait();
                break;
            }
        }    

    }while(ans == 0);

} //End of main function

// Define the promptAndWait() function.
void promptAndWait() 
{
    cin.ignore(100, '\n');
    cout << "\nPress Enter to continue...";
    cin.get();
}

// Define the dollarsToPeso function.
void dollarsToPeso(float rate, unsigned dollar) 
{
    //Format
    cout.setf(ios::fixed);
    cout.precision(2);

    //Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$" << dollar << " US = "<< "P" << (rate * dollar) << " Pesos. \n";
}
void pesoTodollars(float Prate, unsigned int peso){

    //Format
    //cout.setf(ios::fixed);
    //cout.precision(1);

    //Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\nP" << peso << " PHP = "<< "$" << (Prate * peso) << " Dollars. \n";
}

