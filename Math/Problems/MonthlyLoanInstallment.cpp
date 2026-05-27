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

namespace MonthlyLoanInstallment
{
    void Run()
    {

        float LoanAmont, MonthlyPayment, NumberOfMonths;

        cout << "Please enter Loan Amont?" << endl;
        cin >> LoanAmont;

        cout << "Please How Months you want to settle the Loan ?" << endl;
        cin >> NumberOfMonths;

        MonthlyPayment = LoanAmont / NumberOfMonths;

        cout << "you have to pay : " << MonthlyPayment << " per Month" << endl;

    }
}