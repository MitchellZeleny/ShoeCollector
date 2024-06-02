#include "getter.cpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Shoe
{
    public:
    string shoeBrand;
    string shoeColor;
    int shoeYear;
    string shoeName;
};

int main()
{
    vector<Shoe> shoeCollection;
    cout << "Enter the brand of the shoe in your collection: " << endl;
    getine(cin, shoeBrand);
    cout << "Enter the primary color of your " << shoeBrand << " shoe: " << endl;
    getline(cin, shoeColor);
    cout << "Enter the year your " << shoeColor << " " << shoeBrand << "'s were made: " << endl;
    cin >> shoeYear;
    cout << "Enter the name of your " << shoeYear << " " << shoeColor << " " << shoeBrand << "'s: " << endl;
    getline(cin, shoeName);
}