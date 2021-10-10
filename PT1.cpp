//Name         : Mike Villegas
//Activity Name: PT 1
//Description  : Odd or even scheme
//Date         : 10/10/21


#include <iostream>
using namespace std;

int main(){
	int N;
	int N1, N2, N3, N4, N5;

	cout << "Enter a range of number:";
	cin >> N;

	do{	
		if (N == 5) //If range entered is 5
		{
			cout << "Enter a number/s :";
			cin >> N1 >> N2 >> N3 >> N4 >> N5;
			

			if (N1 % 2 == 0 )
			{
				cout << N1 << " IS EVEN\n";
			}
			else
			{
				cout << N1 << " IS ODD\n";
			}

			if (N2 % 2 == 0 )
			{
				cout << N2 << " IS EVEN\n";
			}
			else
			{
				cout << N2 << " IS ODD\n";
			}

			if (N3 % 2 == 0 )
			{
				cout << N3 << " IS EVEN\n";
			}
			else
			{
				cout << N3 << " IS ODD\n";
			}

			if (N4 % 2 == 0 )
			{
				cout << N4 << " IS EVEN\n";
			}
			else
			{
				cout << N4 << " IS ODD\n";
			}

			if (N5 % 2 == 0 )
			{
				cout << N5 << " IS EVEN\n";
			}
			else
			{
				cout << N5 << " IS ODD\n";
			}
			
		}
		
		else if (N == 4)//If range entered is 4
		{
			cout << "Enter a number/s :";
			cin >> N1 >> N2 >> N3 >> N4;
		

			if (N1 % 2 == 0 )
			{
				cout << N1 << " IS EVEN\n";
			}
			else
			{
				cout << N1 << " IS ODD\n";
			}

			if (N2 % 2 == 0 )
			{
				cout << N2 << " IS EVEN\n";
			}
			else
			{
				cout << N2 << " IS ODD\n";
			}

			if (N3 % 2 == 0 )
			{
				cout << N3 << " IS EVEN\n";
			}
			else
			{
				cout << N3 << " IS ODD\n";
			}

			if (N4 % 2 == 0 )
			{
				cout << N4 << " IS EVEN\n";
			}
			else
			{
				cout << N4 << " IS ODD\n";
			}
		}

		else if (N == 3)//If range entered is 3
		{
			cout << "Enter a number/s :";
			cin >> N1 >> N2 >> N3;
			
			if (N1 % 2 == 0 )
			{
				cout << N1 << " IS EVEN\n";
			}
			else
			{
				cout << N1 << " IS ODD\n";
			}

			if (N2 % 2 == 0 )
			{
				cout << N2 << " IS EVEN\n";
			}
			else
			{
				cout << N2 << " IS ODD\n";
			}

			if (N3 % 2 == 0 )
			{
				cout << N3 << " IS EVEN\n";
			}
			else
			{
				cout << N3 << " IS ODD\n";
			}
		}

		else if (N == 2)//If range entered is 2
		{
			cout << "Enter a number/s :";
			cin >> N1 >> N2;
			
			if (N1 % 2 == 0 )
			{
				cout << N1 << " IS EVEN\n";
			}
			else
			{
				cout << N1 << " IS ODD\n";
			}

			if (N2 % 2 == 0 )
			{
				cout << N2 << " IS EVEN\n";
			}
			else
			{
				cout << N2 << " IS ODD\n";
			}
		}

		else if (N == 1)//If range entered is 1
		{
			cout << "Enter a number/s :";
			cin >> N1;

			if (N1 % 2 == 0 )
			{
				cout << N1 << " IS EVEN\n";
			}
			else
			{
				cout << N1 << " IS ODD\n";
			}
		}
			
		else//If range entered is not within the limit
		{
			cout << "Invalid Input! Only enter numbers [1-5]";	
		}
		
		
	}
	while(N = 0);


	return 0;
}