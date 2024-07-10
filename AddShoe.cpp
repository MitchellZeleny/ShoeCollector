#include <array>
#include <string>
#include <iostream>
#include <vector>
#include "ShoeClass.cpp"
using namespace std;

// Function to add a shoe to your collection
class AddShoe
{

public:
    string addName;
    string addBrand;
    string addColor;
    string addYear;


    cout << "Enter the brand of the shoe you want to add to your collection: " << endl;
    getine(cin, addBrand);
    shoeBrand.push_back(addBrand);
    cout << "Enter the primary color of your " << addBrand << " shoe: " << endl;
    getline(cin, addColor);
    shoeColor.push_back(addColor);
    cout << "Spell the year your " << addColor << " " << addBrand << "'s were made: " << endl;
    getline(cin, addYear);
    shoeYear.push_back(addYear);
    cout << "Enter the name of your " << addYear << " " << addColor << " " << addBrand << "'s: " << endl;
    getline(cin, addName);
    shoeName.push_back(addName);
};
