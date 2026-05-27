/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 23, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 1 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PiggyBankCalculator
{
    void Run()
    {

        unsigned int Pennies, Nickels, Dimes, Quarters, Dollars, TotalPennies, TotalDollars;

        cout << "Please enter your Pennis ?" << endl;
        cin >> Pennies;

        cout << "Please enter your Nickels ?" << endl;
        cin >> Nickels;

        cout << "Please enter your Dimes ?" << endl;
        cin >> Dimes;

        cout << "Please enter your Quarters ?" << endl;
        cin >> Quarters;

        cout << "Please enter your Dollars ?" << endl;
        cin >> Dollars;


        TotalPennies = Pennies + 5 * Nickels + 10 * Dimes + 25 * Quarters + 100 * Dollars;

        TotalDollars = TotalPennies / 100;


        cout << "\nTotal of pennis : " << TotalPennies << endl;
        cout << "Total of Dollars : " << TotalDollars << endl;

    }
}