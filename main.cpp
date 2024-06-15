#include "getter.cpp"
#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

// Objects inside Shoe vector
class Shoe
{
    public:
    string shoeBrand[] = {};
    string shoeColor[] = {};
    int shoeYear[] = {};
    string shoeName[] = {};
}

// Function to add a shoe to your collection
class addShoe
{
    string addName;
    string addBrand;
    string addColor;
    int addYear

    if (instr == 1)
    {
        cout << "Enter the brand of the shoe you want to add to your collection: " << endl;
        getine(cin, addBrand);
        shoeBrand.push_back(addBrand);
        cout << "Enter the primary color of your " << addBrand << " shoe: " << endl;
        getline(cin, addColor);
        shoeColor.push_back(addColor);
        cout << "Enter the year your " << addColor << " " << addBrand << "'s were made: " << endl;
        cin >> addYear;
        shoeYear.push_back(addYear);
        cout << "Enter the name of your " << addYear << " " << addColor << " " << addBrand << "'s: " << endl;
        getline(cin, addName);
        shoeName.push_back(addName);
    }    
}

// Function to delete shoe from your collection
class dltShoe
{
    string dltName;
    string dltBrand;
    string dltColor;
    int dltYear;

    if (instr == 2)
    {
        cout << "Enter the brand of the shoe you want to delete from your collection: " << endl;
        getine(cin, dltBrand);
        cout << "Enter the primary color of your " << dltBrand << " shoe: " << endl;
        getline(cin, dltColor);
        cout << "Enter the year your " << dltColor << " " << dltBrand << "'s were made: " << endl;
        cin >> dltYear;
        cout << "Enter the name of your " << dltYear << " " << dltColor << " " << dltBrand << "'s: " << endl;
        getline(cin, dltName);
        int size = sizeof(shoeBrand) - 1;
        for (int i = 0; i < size; i++)
        {
            if (shoeBrand[i] == dltBrand && shoeColor[i] == dltColor && shoeYear[i] == dltYear && shoeName[i] == dltName)
            {
                shoeBrand.remove(dltBrand);
                shoeColor.remove(dltColor);
                shoeYear.remove(dltYear);
                shoeName.remove(dltName);
            }
            else
            {
                cout << "This shoe is not in your collection, add it!" << endl;
            }
        }
    }
}

// Function to see if a shoe is already in your collection
class findShoe
{
    string tempName;
    string tempBrand;
    string tempColor;
    int tempYear;
    if (instr == 3)
    {
        cout << "Enter the brand of the shoe you want to know if it is already in your collection or not: " << endl;
        getine(cin, tempBrand);
        cout << "Enter the primary color of your " << tempBrand << " shoe: " << endl;
        getline(cin, tempColor);
        cout << "Enter the year your " << tempColor << " " << tempBrand << "'s were made: " << endl;
        cin >> tempYear;
        cout << "Enter the name of your " << tempYear << " " << tempColor << " " <<tempBrand << "'s: " << endl;
        getline(cin, tempName);
    }
}

int main()
{
    vector<Shoe> shoeCollection; 
    int instr;
    cout << "Enter 1 to add a shoe to your collection." << endl;
    cout << "Eenter 2 to delete a shoe from your collection." << endl;
    cout << "Enter 3 to search for a shoe in your collection." << endl;
    cin >> instr;

    
    
}
