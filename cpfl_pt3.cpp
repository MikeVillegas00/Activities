//Name : Mike Luis Villegas
//Activity Name: PT3
//Description : Implementayion of input/output stream
//Date : 11/20/21

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void){

    ifstream in_stream;
    ofstream ou_stream;

    string Pname;
    int Quant; 
    float Price,t_price,pid;

    ou_stream.open("CPFL_PT3.txt");

    //INPUT
    cout << "Enter product : ";
    cin >> Pname;
    in_stream >> Pname;
    cout << "Enter Price : ";
    cin >> Price;
    in_stream >> Price;
    cout << "Enter Quantity : ";
    cin >> Quant;
    in_stream >> Quant;
  
    //PRINTING INPUT TO FILE
    ou_stream << "\nProduct Name : " << Pname;
    ou_stream << "\nPrice : " << Price;
    ou_stream << "\nQuantity : " << Quant;

    //FORMULA
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