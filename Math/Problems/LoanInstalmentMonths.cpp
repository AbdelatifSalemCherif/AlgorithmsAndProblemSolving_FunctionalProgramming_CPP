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

namespace LoanInstalmentMonths
{
    void Run()
    {

        float LoanAmont, MonthlyPayment = 12, NumberOfMonths;

        cout << "Please enter Loan Amont?" << endl;
        cin >> LoanAmont;

        cout << "Please enter Monthly Payment ?" << endl;
        cin >> MonthlyPayment;

        NumberOfMonths = LoanAmont / MonthlyPayment;

        cout << "you will payed the Loan after : " << NumberOfMonths << " Months" << endl;

    }
}