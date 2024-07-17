#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class shoeCollect
{
public:
    vector<string> shoeBrand;
    vector<string> shoeColor;
    vector<int> shoeYear;
    vector<string> shoeName;
};

void saveData(const shoeCollect& userData)
{
    ofstream outData("userdata.txt");
    if (outData.is_open())
    {
        for (size_t i = 0; i < userData.shoeBrand.size(); ++i)
        {
            outData << userData.shoeBrand[i] << endl;
            outData << userData.shoeColor[i] << endl;
            outData << userData.shoeYear[i] << endl;
            outData << userData.shoeName[i] << endl;
        }
        outData.close();
        cout << "Your shoe collection has been saved." << endl;
    }
    else
    {
        cout << "Unable to create a file to save your collection." << endl;
    }
}

bool openFile(shoeCollect& userData)
{
    ifstream openData("userdata.txt");
    if (openData.is_open())
    {
        while (!openData.eof())
        {
            string brand, color, name;
            int year;
            getline(openData, brand);
            getline(openData, color);
            openData >> year;
            openData.ignore(); 
            getline(openData, name);

            userData.shoeBrand.push_back(brand);
            userData.shoeColor.push_back(color);
            userData.shoeYear.push_back(year);
            userData.shoeName.push_back(name);
        }
        openData.close();
        cout << "Your shoe collection file has been opened." << endl;
        return true;
    }
    else
    {
        cout << "No data found in file, create a shoe collection!" << endl;
        return false;
    }
}

int main()
{
    shoeCollect collection;

    int instr;
    cout << "Enter 1 to add a shoe to your collection." << endl;
    cout << "Enter 2 to delete a shoe from your collection." << endl;
    cout << "Enter 3 to search for a shoe in your collection." << endl;
    cout << "Enter 4 to display your shoe collection." << endl;
    cout << "Enter 5 to save your shoe collection to a file." << endl;
    cout << "Enter 6 to open your shoe collection file." << endl;
    cin >> instr;
    cin.ignore();

    //Adding a Shoe to you collection
    if (instr == 1)
    {
        string addName, addBrand, addColor;
        int addYear;

        cout << "Enter the brand of the shoe you want to add to your collection: ";
        getline(cin, addBrand);
        collection.shoeBrand.push_back(addBrand);
        cout << "Enter the primary color of your " << addBrand << " shoe: ";
        getline(cin, addColor);
        collection.shoeColor.push_back(addColor);
        cout << "Enter the numerical value of the year your " << addColor << " " << addBrand << "'s were made: ";
        cin >> addYear;
        collection.shoeYear.push_back(addYear);
        cin.ignore(); // clear newline from input buffer
        cout << "Enter the name of your " << addYear << " " << addColor << " " << addBrand << "'s: ";
        getline(cin, addName);
        collection.shoeName.push_back(addName);
        cout << "Shoe added to collection!" << endl;
    }
    // Deleting a shoe from your collection 
    else if (instr == 2)
    {
    // Temporary variables to delete a shoe from your collection
        string dltName;
        string dltBrand;
        string dltColor;
        int dltYear;

        cout << "Enter the brand of the shoe you want to delete from your collection: " << endl;
        getline(cin, dltBrand);
        cout << "Enter the primary color of your " << dltBrand << " shoe: " << endl;
        getline(cin, dltColor);
        cout << "Enter the numerical value of the year your " << dltColor << " " << dltBrand << "'s were made: " << endl;
        cin >> dltYear;
        cout << "Enter the name of your " << dltYear << " " << dltColor << " " << dltBrand << "'s: " << endl;
        getline(cin, dltName);

        // Loop to make sure each variable matches the shoe to delete
        // and that you do not delete the wrong shoe
        for (int i = 0; i < shoeBrand.size(); i++)
        {
            if (shoeBrand[i] == dltBrand && shoeColor[i] == dltColor && shoeYear[i] == dltYear && shoeName[i] == dltName)
            {

                shoeBrand.erase(shoeBrand.begin() + i);
                shoeColor.erase(shoeColor.begin() + i);  
                shoeYear.erase(shoeYear.begin() + i);   
                shoeName.erase(shoeName.begin() + i);    
                cout << "Your shoe has been deleted!" << endl;
            }
            else
            {

                cout << "This shoe is not in your collection, add it!" << endl;
            }
        }
    }
    // Searching for a shoe in your collection
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
    // displaying your shoe collection
    else if (instr == 4)
    {
        // loop through each array and display their values with a tab seperating the variables
        for (int i = 0; i < sizeof(shoeBrand); i++)
        {
            cout << shoeBrand[i] << "\t" << shoeColor[i] << "\t" << shoeYear[i] << "\t" << shoeName[i] << endl;
        }
    }
    // saving your shoe collection
    else if (instr == 5)
    {
        saveData(collection);
    }
    // deleting your shoe collection
    else if (instr == 6)
    {
        openFile(collection);
    }
    else
    {
        cout << "Invalid input." << endl;
    }

    string cont;
    cout << "Do you need to perform more actions to your shoe collection?" << endl;
    cout << "Enter 'yes' to continue, enter 0 to quit." << endl;
    cin >> cont;

    while (cont == "yes")
    {
        int action;
        cout << "What action do you want to perform?" << endl;
        cout << "Enter 1 to add a shoe, 2 to delete a shoe, " << endl;
        cout << "3 to find a shoe, or 4 to display your shoe collection." << endl;
        cout << "Enter 5 to save your shoe collection to a file." << endl;
        cout << "Enter 6 to open your shoe collection file." << endl;
        cin >> action;

        if (action == 1)
        {
            cout << "Enter the brand of the shoe you want to add to your collection: ";
            getline(cin, addBrand);
            collection.shoeBrand.push_back(addBrand);

            cout << "Enter the primary color of your " << addBrand << " shoe: ";
            getline(cin, addColor);
            collection.shoeColor.push_back(addColor);

            cout << "Enter the numerical value of the year your " << addColor << " " << addBrand << "'s were made: ";
            cin >> addYear;
            collection.shoeYear.push_back(addYear);
            cin.ignore(); // clear newline from input buffer

            cout << "Enter the name of your " << addYear << " " << addColor << " " << addBrand << "'s: ";
            getline(cin, addName);
            collection.shoeName.push_back(addName);

            cout << "Shoe added to collection!" << endl;
            cout << "Do you need to perform another action to your shoe collection?" << endl;
            cout << "Enter 'yes' to continue or 0 to exit" << endl;
            cin >> cont
        }
        else if (action == 2)
        {
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
            for (int i = 0; i < shoeBrand.size(); i++)
            {
                if (shoeBrand[i] == dltBrand && shoeColor[i] == dltColor && shoeYear[i] == dltYear && shoeName[i] == dltName)
                {

                    shoeBrand.erase(shoeBrand.begin() + i);
                    shoeColor.erase(shoeColor.begin() + i);  
                    shoeYear.erase(shoeYear.begin() + i);   
                    shoeName.erase(shoeName.begin() + i);    
                    cout << "Your shoe has been deleted!" << endl;
                    cout << "Do you need to perform another action to your shoe collection?" << endl;
                    cout << "Enter 'yes' to continue or 0 to exit" << endl;
                    cin >> cont
                }
                else
                {

                    cout << "This shoe is not in your collection, add it!" << endl;
                    cout << "Do you need to perform another action to your shoe collection?" << endl;
                    cout << "Enter 'yes' to continue or 0 to exit" << endl;
                    cin >> cont
                }
            }
        }
        else if (action == 3)
        {
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
                    cout << "Do you need to perform another action to your shoe collection?" << endl;
                    cout << "Enter 'yes' to continue or 0 to exit" << endl;
                    cin >> cont
                }
                else
                {

                    cout << "This shoe is not in your collection." << endl;
                    cout << "Do you need to perform another action to your shoe collection?" << endl;
                    cout << "Enter 'yes' to continue or 0 to exit" << endl;
                    cin >> cont
                }
            }
        }
        else if (action == 4)
        {
            // loop through each array and display their values with a tab seperating the variables
            for (int i = 0; i < sizeof(shoeBrand); i++)
            {
                cout << shoeBrand[i] << "\t" << shoeColor[i] << "\t" << shoeYear[i] << "\t" << shoeName[i] << endl;
            }
            cout << "Do you need to perform another action to your shoe collection?" << endl;
            cout << "Enter 'yes' to continue or 0 to exit" << endl;
            cin >> cont
        }
        else if (action == 5)
        {
            saveData(collection);
        }
        else if (action == 6)
        {
            openFile(collection);
        }
        else
        {
            cout << "Invalid input." << endl;
        }
    }
    
    return 0;
}

