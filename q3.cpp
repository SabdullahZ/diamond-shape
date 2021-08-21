/*name: syed abdullah zaidi
roll no. bsef20a044
section: afternoon*/

#include<iostream>
using namespace std;
int main()
{
	int input;
	cout << "enter a positive odd integer greater than 3: ";
	cin >> input;
	//input validation
	while (!(input % 2 == 1 && input > 3))
	{
		cout << "ERROR! Invalid input...you have to enter a positive odd integer greater than 3, "
			<< "inut again: ";
		cin >> input; //taking inputs again and again if user is continuesly giving invalid inputs 
	}
	//firstly making upper part of a diamond
	int space = input - 1;
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= space; j++)
		{
			cout << " ";
		}
		space--;
		for (int k  = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//secndly making lower part of a diamond
	space = 1;
	for (int i = 1; i <= input - 1; i++)
	{
		for (int j = 1; j <= space; j++)
		{
			cout << " ";
		}
		space++;
		for (int k = 1; k <= (2 * (input - i) - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}