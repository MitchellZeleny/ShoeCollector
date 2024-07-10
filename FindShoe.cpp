#include "ShoeClass.cpp"


// Function to see if a shoe is already in your collection
class FindShoe
{
public:
    string tempName;
    string tempBrand;
    string tempColor;
    string tempYear;

    cout << "Enter the brand of the shoe you want to know if it is already in your collection or not: " << endl;
    getine(cin, tempBrand);
    cout << "Enter the primary color of your " << tempBrand << " shoe: " << endl;
    getline(cin, tempColor);
    cout << "Spell the year your " << tempColor << " " << tempBrand << "'s were made: " << endl;
    getline(cin, tempYear);
    cout << "Enter the name of your " << tempYear << " " << tempColor << " " << tempBrand << "'s: " << endl;
    getline(cin, tempName);

    for (int i = 0; i < size; i++)
    {

        if (shoeBrand[i] == tempBrand && shoeColor[i] == tempColor && shoeYear[i] == tempYear && shoeName[i] == tempName)
        {

            cout << "This shoe is already in your collection." << endl;
        }
        else
        {

            int answer;
            cout << "Do you want to add this shoe to your collection?" << endl;
            cout << "Enter 1 for yes or 2 for no." << endl;
            cin >> answer;
            
            if (answer == 1)
            {

                shoeBrand.push_back(tempBrand);
                shoeColor.push_back(tempColor);
                shoeYear.push_back(tempYear);
                shoeName.push_back(tempName);
            }
            else
            {

                cout << "This shoe will not be added to your collection." << endl;
            }
        }
    }

};
