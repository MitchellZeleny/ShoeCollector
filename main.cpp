#include "getter.cpp"
#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

class Shoe
{
    public:
    string shoeBrand[] = {};
    string shoeColor[] = {};
    int shoeYear[] = {};
    string shoeName[] = {};
    int instr;
    vector<variant<string, int>> shoeCollection;
};

class addShoe
{
    if (instr == 1)
    {
        cout << "Enter the brand of the shoe in your collection: " << endl;
        getine(cin, shoeBrand);
        cout << "Enter the primary color of your " << shoeBrand << " shoe: " << endl;
        getline(cin, shoeColor);
        cout << "Enter the year your " << shoeColor << " " << shoeBrand << "'s were made: " << endl;
        cin >> shoeYear;
        cout << "Enter the name of your " << shoeYear << " " << shoeColor << " " << shoeBrand << "'s: " << endl;
        getline(cin, shoeName);
    };    
};

class dltShoe
{
    if (instr == 2)
    {

    };
};

class findShoe
{
    if (instr == 3)
    {

    };
};

int main()
{
    cout << "Enter 1 to add a shoe to your collection." << endl;
    cout << "Eenter 2 to delete a shoe from your collection." << endl;
    cout << "Enter 3 to search for a shoe in your collection." << endl;
    cin >> instr;

    
    
}
