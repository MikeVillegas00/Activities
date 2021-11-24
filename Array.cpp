//Name : Mike Villegas
//Activity Name : OE 6
//Description : Implementation of Array
//Date : 11/24/21

#include <iostream>
#include <cstdlib>

using namespace std;

//CONSTANT VARIABLE
const int Size =100;

//FUNCTION PROTOTYPE
void Pause();
void UnsortedPrev(int inp[], int SIZE);
void SortA(int inp[], int SIZE);

//MAIN FUNCTION
int main(){

    int ans = 0;
    int inp[Size], SIZE, ch;

    cout << "Enter array Size: ";
    cin >> SIZE;
     
     for(int x = 0; x < SIZE; x++) //FOR LOOP IS USED TO COUNT THE ELEMENTS
     {
         cout << "Enter Elements [" << x << "]: ";
         cin >> inp[x];
     }
    
    do{
        //MAIN MENU 
        cout << endl;
        cout << "\n*||Array Sorter||*"       << endl << endl;
        cout << "[1] Searching Array"<< endl;
        cout << "[2] Sorting Array [Ascending]" << endl;
        cout << "[0] Exit the Program"<< endl;
        cout << "Select Function : ";
        cin >> ch;

        //SWITCH CASE 
        switch(ch){
            case 1:
            {
                UnsortedPrev(inp, SIZE);           
                Pause();
                break;
            }

            case 2:
            {
                SortA(inp, SIZE);
                Pause();
                break;
            }
            case 0:

            {   cout << "\n||Array Sorter App Terminated|| \nThank you for using the app!";
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
    
} //MAIN FUNCTION ENDING

//FUNTION DEFINITION
void Pause() 
{
    cin.ignore(100, '\n');
    cout << "\nPress Enter to continue...";
    cin.get();
}

void UnsortedPrev(int inp[], int SIZE){ //FUNCTION FOR SEARCHING ARRAY

   for(int x = 0; x < SIZE; x++){

        cout << "Unsorted Array Elmement [" << x << "] "<< inp[x] << endl;
    }
}
void SortA(int inp[], int SIZE) //FUNCTION FOR SORTING ARRAY IN ASCENDING ORDER
{
    int i, s, temp;

     //SORTING ARRAY[ASCENDING]
    for(s=0; s<SIZE; s++)
    {
        for(i=s+1; i<SIZE; i++)
        {
            
            if(inp[i] < inp[s])
            {
                temp   = inp[s];
                inp[s] = inp[i];
                inp[i] = temp;
            }
        }
    }
        //ASCENDING ARRAY PRINTED OUTPUT  
    cout<<"Sorted Array [Ascended Order]:"<<endl;
    for(i=0; i<SIZE; i++)
    {
        cout<<inp[i]<<endl;
    }
  
}