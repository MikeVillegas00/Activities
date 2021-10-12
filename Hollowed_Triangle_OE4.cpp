/*Name : Mike Villegas
Activity Name: OE 4
Description :Using For loop on creating a Hollow triangle
Date : October 12, 2021*/

#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "Enter the height of the triangle : ";//User Input
    cin >> i;

    for (int Trows = 1; Trows <= i; Trows++)//Rows depend on user input
    {   
        for (int space = 1; space <= (i - Trows); space++)//For the spacing of the *
        {
            cout << " ";
        }
        for (int Tcol = 1; Tcol <= Trows * 2 - 1; Tcol++)//Total columns that will depend on total rows
        {
            if (Tcol == 1 || Tcol == Trows * 2 - 1)//If T.Columns is equal to T.Rows 
            {
                cout << "*";
            }
            else if (Trows == i)//if false, execute T.Rows equal to user input
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}