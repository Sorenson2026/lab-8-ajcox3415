/*This program will ask the user for an intiger inbetween 1 and 10. The user will 
be able to enter as many numbers as they want and the program will output how many numbers
they input, the minimum, the maximum, and the average
AJ Cox
3/10/2026*/

#include <iostream>
#include <iomanip>
using namespace std;

//This main will ask the user for numbers until they enter 0 and then output the count, min, max and average.
int main()
{
	int count = 0;
	int num, min = 100, max = -100, sum = 0;
	double average;

	// Asks for first number.
	cout << "Hello! Welcome to my program!\n";
	cout << "Enter an integer (0 to quit): ";
	cin >> num;

	//Input validation
	while (num < 0 || num > 10) 
	{
		cout << "That is invalid. Please enter a number between 1 and 10 (0 to quit): ";
		cin >> num;
	}
		
	

	while (num != 0)
	{
		
		sum += num;

		if (num < min)
			min = num;
		if (num > max)
			max = num;
		count++;
			
		cout << "Enter another integer (0 to quit): ";
		cin >> num;
		
		//Input validation
		while (num < 0 || num > 10)
		{
			cout << "That is invalid. Please enter a number between 1 and 10 (0 to quit): ";
			cin >> num;
		}
			
		
	}
	//Calculates average
	average = static_cast<double> (sum) / count;

	//Outputs the count, min, max, and average
	cout << left;
	cout << "\nCount Min   Max   Average" << endl;
	cout <<  setw(6) << count << setw(6) << min << setw(6) << max << setw(6) << setprecision(2) << fixed << average;

	return 0;
}