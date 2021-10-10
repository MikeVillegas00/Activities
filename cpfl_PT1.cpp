//Name : Mike Villegas
//Activity Name: PT 1
//Description :Implementation of "while" loop and "if" statement
//Date : October 1, 2021



#include <iostream>

using namespace std;

int main(){
    
    int R,N1,N2,N3,N4,N5,G;
    int CH,Input,i;
    
    do{
        cout << "    TESTER" << endl;
        cout << " Enter Range: ";
        //cin >> R;

        
        //cout <<  
        cin >> N1 >> N2 >> N3 >> N4 >> N5;
    

        if(N1 % 2 == 0){
            cout << N1 <<" IS EVEN" << endl;
        }
        else if(N1 % 2 != 0){
            cout << N1 <<" IS ODD" << endl;
        }

        if(N2 % 2 == 0){
            cout << N2 <<" IS EVEN" << endl;
        }
        else if(N2 % 2 != 0){
            cout << N2 <<" IS ODD" << endl;
        }

        if(N3 % 2 == 0){
            cout << N3 <<" IS EVEN" << endl;
        }
        else if(N3 % 2 != 0){
            cout << N3 <<" IS ODD" << endl;
        }

        if(N4 % 2 == 0){
            cout << N4 <<" IS EVEN" << endl;
        }
        else if(N4 % 2 != 0){
            cout << N4 <<" IS ODD" << endl;
        }

        if(N5 % 2 == 0){
            cout << N5 <<" IS EVEN" << endl;
        }
        else if(N5 % 2 != 0){
            cout << N5 <<" IS ODD" << endl;
        }
    }while(G == 'a');
    

    

    return 0;
}
    
    
