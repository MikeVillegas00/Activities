/*Name : Mike Villegas
Activity Name: OE 5
Description : Void functions and functions with parameters implementations.
Date : 03/11/21 */


#include <iostream> 
using namespace std;

int main(){ 
    char A[25];
	int input,B1,B2,k=0;
    int RevN = 0, R;

    void reverse(int x);//FUNCTIONS
    {    
        for (int S=0; A[S]!='\0';S++)
            {  
                k++;
            }
            

        for (int S= k-1; S>=0; S--)
            {
                cout << A[S];
            }
    }
    
	do
    {   //MENU
        cout << "\n ";
		cout << "\nWhat would you like to reverse?" << endl;
		cout << "Press [1] for string " << endl;
		cout << "Press [2] for integer" << endl;
		cout << "Press [3] to exit" << endl;
		cout << "Enter input : ";
		cin >> input; 

		while (input < 1 || input > 3)
		{
			cout << "Please enter a valid choice" << endl;
			cout << "Enter 1, 2, or 3: " << endl;
			cin >> input;
		}
           
        //Choices
		switch (input)
		{
		case 1:
			
            cout << "Enter Any String : ";
            cin >> A;

            void reverse(int x); //FUNCTIONS
            {    
                for (int S=0; A[S]!='\0';S++)
                    {  
                        k++;
                    }
                        cout << "Reversed String  : ";

                for (int S= k-1; S>=0; S--)
                {
                    cout << A[S];
                }               
            }
            break;
        
		case 2:

			cout << "\nEnter an integer to reverse :  ";
			cin >> B1;

            void rev(int y);//FUNCTIONS

            while(B1 !=0){
                R = B1%10;
                RevN = RevN*10 + R;
                B1 /= 10;
            }

            cout << "Reversed integer :  " << RevN;
            break;

		case 3: 

            cout << "Thank You" << endl;
        
            break;
        
        default: 
            cout << "Please try Again" << endl;
		}
        

	}while (input <= 2 && input >= 1);//END LOOP

    void rev(int y);// FUNCTIONS

    while(B1 !=0){
                R = B1%10;
                RevN = RevN*10 + R;
                B1 /= 10;
            }

    return 0;
}