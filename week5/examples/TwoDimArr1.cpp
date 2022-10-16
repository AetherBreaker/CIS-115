// This program demonstrates a two-dimensional array.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float sales[3][4];		// 2D array, 3 rows and 4 columns.
	float totalSales = 0;	// To hold the total sales.
	int div, qtr;			// Loop counters.
	
	cout << "This program will calculate the total sales of\n";
	cout << "all the company's divisions.\n";
	cout << "Enter the following sales information:\n\n";


	// Nested loops to fill the array with quarterly
	// sales figures for each division.
	
	for (div = 0; div < 3; div++)               // outside loop - for rows
	{
		for (qtr = 0; qtr < 4; qtr++)           // inside loop - for columns
		{
			cout << "Division " << (div + 1);
			cout << ", Quarter " << (qtr + 1) << ": $";
			cin >> sales[div][qtr];
		}
		cout << endl; // Print blank line.
	}

	// Nested loops to add all the elements.
	for (div = 0; div < 3; div++)
		for (qtr = 0; qtr < 4; qtr++)
			totalSales += sales[div][qtr];
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "The total sales for the company are: $";
	cout << totalSales << endl;
	cout << endl;
	cout << "The Contents of this array is: " << endl;
	for (div = 0; div < 3; div++)
	{
	    cout << "Row: " << div << "  ";
		for (qtr = 0; qtr < 4; qtr++)
		{
		    //	cout << "Row: " << (div + 1);            // uncomment these 2
		    // 	cout << ", Col:" << (qtr + 1) << ": ";   // lines to visualize
			cout << sales[div][qtr] << "  " ;            // loops.
		}
		cout << endl; // Print blank line.
	}

	return 0;
}
