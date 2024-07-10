#include "ShoeClass.cpp"
#include "AddShoe.cpp"
#include "DltShoe.cpp"
#include "FindShoe.cpp"
#include "DisplayShoe.cpp"
using namespace std;


int main()
{
    vector<Shoe> shoeCollection; 
    int instr;
    cout << "Enter 1 to add a shoe to your collection." << endl;
    cout << "Eenter 2 to delete a shoe from your collection." << endl;
    cout << "Enter 3 to search for a shoe in your collection." << endl;
	cout << "Enter 4 to display your shoe collection." << endl;
    cin >> instr;

    if (instr == 1) 
	{
		AddShoe();
	}
	else if (instr == 2) 
	{
		DltShoe();
	}
	else if (instr == 3) 
	{
		FindShoe();
	}
	else if (instr == 4)
	{
		DisplayShoe();
	}
	else 
	{
		cout << "Invalid input." << endl;
	}
	return 0;
}

