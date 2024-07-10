#include <string>
#include <iostream>
#include <vector>
#include "ShoeClass.cpp"
using namespace std;

// Function to delete shoe from your collection
class DltShoe
{
public:
    string dltName;
    string dltBrand;
    string dltColor;
    string dltYear;

    cout << "Enter the brand of the shoe you want to delete from your collection: " << endl;
    getine(cin, dltBrand);
    cout << "Enter the primary color of your " << dltBrand << " shoe: " << endl;
    getline(cin, dltColor);
    cout << "Spell the year your " << dltColor << " " << dltBrand << "'s were made: " << endl;
    getline(cin, dltYear);
    cout << "Enter the name of your " << dltYear << " " << dltColor << " " << dltBrand << "'s: " << endl;
    getline(cin, dltName);
    int size = sizeof(shoeBrand);

    // Loop through the shoeBrand array to find the shoe to delete 
    // and that each variable matches the shoe to delete
    for (int i = 0; i < size; i++)
    {
        if (shoeBrand[i] == dltBrand && shoeColor[i] == dltColor && shoeYear[i] == dltYear && shoeName[i] == dltName)
        {

            shoeBrand.remove(dltBrand);
            shoeColor.remove(dltColor);
            shoeYear.remove(dltYear);
            shoeName.remove(dltName);
            cout << "Your shoe has been deleted!" << endl;
        }
        else
        {

            cout << "This shoe is not in your collection, add it!" << endl;
        }
    }
};
