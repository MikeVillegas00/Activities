//Name          : Mike Luis Villegas      
//Activity Name : OE 1
//Description   : Input and Output
//Date          : September 7, 2021


#include <iostream>
#include <string>
using namespace std;

int main(){

    
    string Name,Gender,Age,Address,YnS,CNumber;
    int age;
    
    //Intro
   cout << "Good Evening Sir Isaac Morallo" << endl;
   cout << "\n___________________________________________" <<endl;

   //INPUT
   cout << "Enter Your Name    : ";
   getline(cin,Name);
   cout << "Enter Your Gender  : ";
   getline(cin,Gender);
   cout << "Enter Your Age     : ";
   cin >> Age;
   cin.ignore();
   cout << "Enter Your Address : ";
   getline(cin,Address);
   cout << "Enter Your YnS     :";
   getline(cin,YnS);
   cout << "Enter Your CNumber :";
   getline(cin,CNumber);
   cout << "\n___________________________________________" <<endl;
   

   //DISPLAY OUTPUT
    cout << "\nName             : " << Name;
    cout << "\nGender           : " << Gender;
    cout << "\nAge              : " << Age;
    cout << "\nAddress          : " << Address;
    cout << "\nYear and Section : " << YnS;
    cout << "\nContact No.      : " << CNumber;
  
    return 0;
}