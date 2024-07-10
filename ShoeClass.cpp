#include <array>
#include <string>
#include <iostream>
using namespace std;

// Objects inside Shoe vector
class Shoe
{

private:
    // Create arrays to store shoe information of 100 possible shoes
    array<string, 100> shoeBrand{};
    array<string, 100> shoeColor{};
    array<string, 100> shoeYear{};
    array<string, 100> shoeName{};
};
