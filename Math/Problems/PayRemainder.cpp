/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 23, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 1 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PayRemainder
{
    void Run()
    {

        unsigned int TotalBill, CostPaid, Remainder;

        cout << "Please enter the Total Bill ?" << endl;
        cin >> TotalBill;

        cout << "Please enter the Cost Paid ?" << endl;
        cin >> CostPaid;

        Remainder = CostPaid - TotalBill;

        cout << "you sould remainde : " << Remainder << endl;

    }
}