/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 30, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace CommissionPercentage
{
    float ReadFloatNumber(string MessageToUser)
    {
        float FloatNumber;

        cout << MessageToUser;
        cin >> FloatNumber;

        return FloatNumber;
    }

    float CalculatSalesAmount(float TotalSales)
    {
        if (TotalSales > 1000000) { return TotalSales / 100; }
        else if (TotalSales > 500000) { return (TotalSales * 2) / 100; }
        else if (TotalSales > 100000) { return (TotalSales * 3) / 100; }
        else if (TotalSales > 50000) { return (TotalSales * 5) / 100; }
        else { return TotalSales; }

    }

    void Run()
    {
        float TotalesSeles = ReadFloatNumber("Please enter Total Sales ?\n");

        cout << CalculatSalesAmount(TotalesSeles) << endl;

    }
}