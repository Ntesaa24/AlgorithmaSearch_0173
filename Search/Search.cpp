#include <iostream>
using namespace std; 

int arr[20]; // Array to be seacrhed 
int n;		// Number of elements in the array 
int i;		// Index of array element 

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimu 1 and maximum 20 elemnts.\n\n";
	}

	// Accept array elemnts 
	cout << "\n----------------\n";
	cout << " Enter array elements \n";
	cout << "-----------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSeacrh()
{
	char ch; 
	int ctr; // Number of comparisons 
	int item; 

	do 
	{
		// Accept the number to be seacrhed 
		cout << "\nEnter the element you wnt to seacrh: "; //step 1 
		cin >> item; 

		ctr = 0; 
		i = 0; //step 2 
		while (i < n) // step 3 
		{
			ctr++; 
			if (arr[i] == item)
			{ 
