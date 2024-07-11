#include <array>
#include <string>
#include <iostream>
using namespace std;



int main()
{
	// Create multiple arrays to store up to 200 different shoes with multiple variables 
    array<string, 200> shoeBrand{}; 
    array<string, 200> shoeColor{};
    array<int, 200> shoeYear{};
    array<string, 200> shoeName{};

	// User input to adjust their shoe collection
    int instr;
    cout << "Enter 1 to add a shoe to your collection." << endl;
    cout << "Eenter 2 to delete a shoe from your collection." << endl;
    cout << "Enter 3 to search for a shoe in your collection." << endl;
    cout << "Enter 4 to display your shoe collection." << endl;
    cin >> instr;

    if (instr == 1) 
	{
		// Temporary variables to add onto your shoe collection 
		string addName;
    		string addBrand;
		int addYear;
    		string addColor;

		cout << "Enter the brand of the shoe you want to add to your collection: " << endl;
    		getline(cin, addBrand);
    		shoeBrand.push_back(addBrand);
    		cout << "Enter the primary color of your " << addBrand << " shoe: " << endl;
    		getline(cin, addColor);
    		shoeColor.push_back(addColor);
    		cout << "Enter the numerical value of the year your " << addColor << " " << addBrand << "'s were made: " << endl;
    		cin >> addYear;
    		shoeYear.push_back(addYear);
    		cout << "Enter the name of your " << addYear << " " << addColor << " " << addBrand << "'s: " << endl;
    		getline(cin, addName);
    		shoeName.push_back(addName);
	}
	else if (instr == 2) 
	{
		// Temporary variables to delete a shoe from your collection
		string dltName;
    		string dltBrand;
    		string dltColor;
    		int dltYear;
		string dltArrayName(string nameArr[], int n = 200, int w)
		string dltArrayBrand(
		int dltArrayYear(
		string dltArrayColor(

		cout << "Enter the brand of the shoe you want to delete from your collection: " << endl;
    		getline(cin, dltBrand);
    		cout << "Enter the primary color of your " << dltBrand << " shoe: " << endl;
    		getline(cin, dltColor);
    		cout << "Enter the numerical value of the year your " << dltColor << " " << dltBrand << "'s were made: " << endl;
    		cin >> dltYear;
    		cout << "Enter the name of your " << dltYear << " " << dltColor << " " << dltBrand << "'s: " << endl;
    		getline(cin, dltName);

    		// Loop through the shoeBrand array to find the shoe to delete 
    		// and that each variable matches the shoe to delete
    		for (int i = 0; i < sizeof(shoeBrand); i++)
    		{
        		if (shoeBrand[i] == dltBrand && shoeColor[i] == dltColor && shoeYear[i] == dltYear && shoeName[i] == dltName)
        		{

            			
            			cout << "Your shoe has been deleted!" << endl;
        		}
        		else
        		{

            			cout << "This shoe is not in your collection, add it!" << endl;
        		}
		}
	}
	else if (instr == 3) 
	{
		string tempName;
    		string tempBrand;
		int tempYear;
    		string tempColor;

    		cout << "Enter the brand of the shoe you want to know if it is already in your collection or not: " << endl;
    		getline(cin, tempBrand);
    		cout << "Enter the primary color of your " << tempBrand << " shoe: " << endl;
    		getline(cin, tempColor);
    		cout << "Enter the numerical value the year your " << tempColor << " " << tempBrand << "'s were made: " << endl;
    		cin >> tempYear;
    		cout << "Enter the name of your " << tempYear << " " << tempColor << " " << tempBrand << "'s: " << endl;
    		getline(cin, tempName);

    		for (int i = 0; i < sizeof(shoeBrand); i++)
    		{

        		if (shoeBrand[i] == tempBrand && shoeColor[i] == tempColor && shoeYear[i] == tempYear && shoeName[i] == tempName)
        		{

            			cout << "This shoe is already in your collection." << endl;
        		}
        		else
        		{

            			cout << "This shoe is not in your collection." << endl;
        		}
    		}
	}
	else if (instr == 4)
	{
		// loop through each array and display their values with a tab seperating the variables
		for (int i = 0; i < sizeof(shoeBrand); i++)
		{
			cout << shoeBrand[i] << "\t" << shoeColor[i] << "\t" << shoeYear[i] << "\t" << shoeName[i] << endl;
		}
	}
	else 
	{
		cout << "Invalid input." << endl;
	}
	return 0;
}


