/**
 * @brief The first programming project from Chapter 1. The following is 
 * directly from the text
 * 
 * A metric ton is 35,273.92 ounces. Write a program that will read the weight 
 * of a package of breakfast ceral in ounces and output the weight in metric 
 * tons as well as the number of boxes needed to yield one metric ton of cereal.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float OUNCES_PER_TON = 35273.92;
    float ounces_per_box;
    float boxes_per_ton;

    cout << "How many ounces are there in one box of cereal? ";
    cin >> ounces_per_box;
    cout << "\nOne box of cereal is equaivalent to " << 
        ounces_per_box/OUNCES_PER_TON << " tons." << endl;
    cout.setf(ios::fixed);
    cout.precision(0);
    cout << "There are about " << OUNCES_PER_TON/ounces_per_box << 
    " number of boxes in one ton of cereal." << endl;

    return 0;
}