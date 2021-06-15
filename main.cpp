#include <iostream>

#include <string>

#include <iomanip> 

using namespace std;

double sellingPrice(double price, double percent);

int main()

{
	/*
	An electronics company sells circuit boards at a particular percent profit. 
	Write a program that reads the percent profit and the cost of a circuit board, 
	calculates the selling price of the circuit board and displays 
	the selling price on the screen.
	*/

	double myBoard_Price = 0;
	double myBoard_Percentage = 0; 

	cout << "Input the price: " << endl; 
	cin >> myBoard_Price;
	cout << "Input the percentage: " << endl; 
	cin >> myBoard_Percentage; 

	cout << "The price is: $" << setprecision(2) << fixed
		<< (sellingPrice(myBoard_Price, myBoard_Percentage)) << endl;

	system("pause");

	return 0;
}


double sellingPrice(double price, double percent)
{
	return price + price * (percent / 100);
}
