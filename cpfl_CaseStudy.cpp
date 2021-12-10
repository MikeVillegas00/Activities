//Name : Mike Villegas
//Activity Name : Case Study
//Description : Case Study
//Date : 12/10/21

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

//CONSTANT VARIABLE
const int Size =100;

//FUNCTION PROTOTYPE
void Pause();
void UnsortedPrev(int inp[], int SIZE);
void SortA(int inp[], int SIZE);
void SortD(int inpu[], int SIZE1);

//MAIN FUNCTION
int main(){

    ifstream in_stream;
    ofstream ou_stream;

    int ans = 0;
    int inp[Size], SIZE, ch;

    ou_stream.open("Case Study.txt");

    cout << "Enter array Size: ";
    cin >> SIZE;
    in_stream >> SIZE;
     
     for(int x = 0; x < SIZE; x++) //FOR LOOP IS USED TO COUNT THE ELEMENTS
     {
         cout << "Enter Elements [" << x << "]: ";
         cin >> inp[x];
     }
    
    do{
        //MAIN MENU 
        cout << endl;
        cout << "\n*||Array Sorter||*"       << endl << endl;
        cout << "[1] Preview Unsorted Array"<< endl;
        cout << "[2] Sorting Array [Ascending]" << endl;
        cout << "[3] Sorting Array [Descending]";
        cout << "\n[0] Exit the Program"<< endl;
        cout << "Select Function : ";
        
        cin >> ch;
        in_stream >> ch;

        //SWITCH CASE 
        switch(ch){
            case 1:
            {
                UnsortedPrev(inp, SIZE);           
                
                break;
            }

            case 2:
            {
                SortA(inp, SIZE);
                
                break;
            }
            case 3:
            {
                SortD(inp, SIZE);
                
                break;
            }
            case 0:

            {   cout << "\n||Array Sorter App Terminated|| \nThank you for using the app!";
                ou_stream << "\n||Array Sorter App Terminated|| \nThank you for using the app!";
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

    ifstream in_stream;
    ofstream ou_stream;

    ou_stream.open("Case Study.txt");

   for(int x = 0; x < SIZE; x++){

        cout << "Unsorted Array Elmement [" << x << "] "<< inp[x] << endl;
        ou_stream << "Unsorted Array Elmement [" << x << "] "<< inp[x] << endl;
    }
}
void SortA(int inp[], int SIZE) //FUNCTION FOR SORTING ARRAY IN ASCENDING ORDER
{
    int i, s, temp;

    ifstream in_stream;
    ofstream ou_stream;

    ou_stream.open("Case Study.txt");

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
    ou_stream << "Sorted Array [Ascended Order]:"<<endl;
    for(i=0; i<SIZE; i++)
    {
        cout<<inp[i]<<endl;
        ou_stream<<inp[i]<<endl;
    }
  
}
void SortD(int inpu[], int SIZE1)

{   int i, s, desc,inp1;

    ifstream in_stream;
    ofstream ou_stream;

    ou_stream.open("Case Study.txt");

    //SORTING ARRAY [DESCENDING]
    for (i = 0; i < SIZE1; ++i)   
    {
        for (int j = i + 1; j < SIZE1; ++j)
        {
            if (inpu[i] < inpu[j])
            {
                desc = inpu[i];
                inpu[i] = inpu[j];
                inpu[j] = desc;
            }
        }
    }
        //DESCENDING ARRAY PRINTED OUTPUT
    cout<<"\n Sorted Array [Descending Order]: \n";
    ou_stream <<"\nSorted Array [Descending Order]: \n";
    for (i = 0; i < SIZE1; ++i)
    {
        cout     <<" ";
        ou_stream<<" ";
        cout     <<inpu[i];
        ou_stream<<inpu[i];
        cout     <<"\n";
        ou_stream<<"\n";
    }

}