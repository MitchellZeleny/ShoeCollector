#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;



int main()
{
    // Create multiple vectors to store different shoes with multiple variables 
    struct shoeCollect
    {
        vector<string> shoeBrand;
        vector<string> shoeColor;   
        vector<int> shoeYear;
        vector<string> shoeName; 
    }

    // User input to adjust their shoe collection
    int instr;
    cout << "Enter 1 to add a shoe to your collection." << endl;
    cout << "Eenter 2 to delete a shoe from your collection." << endl;
    cout << "Enter 3 to search for a shoe in your collection." << endl;
    cout << "Enter 4 to display your shoe collection." << endl;
    cout << "Enter 5 to save your shoe collection to a file." << endl;
    cout << "Enter 6 to open your shoe collection file." << endl;
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
    else if (instr == 5)
    {
        void saveData(const shoeCollect& userData)
        {
            ofstream saveData("userdata.txt");
            if (outData.is_open())
            {
                saveData << userData.shoeBrand << endl;
                saveData << userData.shoeName << endl;
                saveData << userData.shoeYear << endl;
                saveData << userData.shoeColor << endl;
                saveData.close();
                cout << "Your shoe collection has been saved." << endl;
            }
            else
            {
                cout << "Unable to create a file to save your collection." << endl;
            }
        }
    }
    else if (instr == 6)
    {
        bool openFile(shoeCollect& userData)
        {
            ifstream openData("userdata.txt");
            if (openData.is_open())
            {
                getine(openFile,userData.shoeBrand);
                getine(openFile,userData.shoeName);
                getine(openFile,userData.shoeColor);
                openData >> userData.shoeYear;
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
            void saveData(const shoeCollect& userData)
            {
                ofstream saveData("userdata.txt");
                if (outData.is_open())
                {
                    saveData << userData.shoeBrand << endl;
                    saveData << userData.shoeName << endl;
                    saveData << userData.shoeYear << endl;
                    saveData << userData.shoeColor << endl;
                    saveData.close();
                    cout << "Your shoe collection has been saved." << endl;
                }
                else
                {
                    cout << "Unable to create a file to save your collection." << endl;
                }
            } 
        }
        else if (action == 6)
        {
            bool openFile(shoeCollect& userData)
            {
                ifstream openData("userdata.txt");
                if (openData.is_open())
                {
                    getine(openFile,userData.shoeBrand);
                    getine(openFile,userData.shoeName);
                    getine(openFile,userData.shoeColor);
                    openData >> userData.shoeYear;
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
        }
        else
        {
            cout << "Invalid input." << endl;
        }
    }
    
    return 0;
}

