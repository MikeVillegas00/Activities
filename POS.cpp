//Name : Mike Luis Villegas
//Activity Name: OE 2 
//Description : 
//Date : 9/14/21

#include <iostream>


using namespace std;

int main(void){

    string Pname;
    int Quant; 
    float Price,t_price,pid;
    
    
    //INPUT

    cout << "Enter product : ";
    cin >> Pname;
    cout << "Enter Price : ";
    cin >> Price;
    cout << "Enter Quantity : ";
    cin >> Quant;
  

    t_price = (Quant * Price) + .12;
    

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    //OUTPUT DISPLAY

    cout << "Product Name : " << Pname << endl;
    cout << "Price        : " << "P" << Price << endl;
    cout << "Quantity     : " << Quant << endl;
    cout << "Total Amount : " <<  "P" << t_price << endl; 



}