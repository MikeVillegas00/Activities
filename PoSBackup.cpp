//Name : Mike Luis Villegas
//Activity Name: OE 2 
//Description : POS Computer System that computers atleast 3 kinds of product input, plus 12% VAT
//Date : 9/14/21

#include <iostream>
using namespace std;

const float TAX =  0.12; 

int main(void){

    string P1,P2,P3,Cname;
    int Q1,Q2,Q3; 
    float t_price,pid,PR1,PR2,PR3,VAT;
    
    
    //INPUT

    cout << "Enter your name : ";
    cin >> Cname;
    cout << "\n" <<endl;
    cout << "Enter product  : ";
    cin >> P1;
    cout << "Enter Price    : ";
    cin >> PR1;
    cout << "Enter Quantity : ";
    cin >> Q1;
    cout << "Enter product  : ";
    cin >> P2;
    cout << "Enter Price    : ";
    cin >> PR2;
    cout << "Enter Quantity : ";
    cin >> Q2;
    cout << "Enter product  : ";
    cin >> P3;
    cout << "Enter Price    : ";
    cin >> PR3;
    cout << "Enter Quantity : ";
    cin >> Q3;
    
    
    //Formula
    t_price = (Q1 * PR1+TAX) + (Q2 * PR2+TAX) + (Q3 * PR3+TAX);
    VAT = (PR1 * TAX) + (PR2 * TAX ) + (PR3 * TAX);
    

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    //OUTPUT DISPLAY 1
    cout << "========================================" << endl;
    cout << "\n              7-Eleven                   " << endl;
    cout << "\n               Malvar                    " << endl;
    cout << "\n ";
    cout << "========================================" << endl;
    cout << "\nSTORE: 00501            REGISTER: 001    " << endl;
    cout << "\nCASHIER: Bough Gart ";
    cout << "\nDate: 9/14/21 ";
    cout << "\n ";
    cout << "========================================" << endl;
    cout << "\n ";
    cout << "\nCUSTOMER RECEIPT COPY";
    cout << "\nCustomer Number:";
    cout << "\n289431074102338";
    cout << "\n";

    //OUTPUT DISPLAY 2
    cout << "Name         :" << Cname << endl;
    cout << "\n " << endl;
    cout.precision(2);
    cout << "Product Name : " << P1  << endl;
    cout << "Product ID   : 121"     << endl; 
    cout << "Price        : " << "P" << PR1 << endl;
    cout << "Quantity     : " << Q1  << endl;
    cout << "Product Name : " << P2  << endl;
    cout << "Product ID   : 122"     << endl; 
    cout << "Price        : " << "P" << PR2 << endl;
    cout << "Quantity     : " << Q2  << endl;
    cout << "Product Name : " << P3  << endl;
    cout << "Product ID   : 123"     << endl; 
    cout << "Price        : " << "P" << PR3 << endl;
    cout << "Quantity     : " << Q3  << endl;
    cout << "========================================" << endl;
    cout << "VAT (12%)    : " << VAT << endl; 
    cout << "Total Amount : " << "P" << VAT * t_price << endl;

    cout << "\nThank you for your purchase!" << endl;
    
    cout << "========================================" << endl;


    return 0;
}