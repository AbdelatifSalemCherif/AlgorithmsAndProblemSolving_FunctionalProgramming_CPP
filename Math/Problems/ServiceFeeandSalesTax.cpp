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


namespace ServiceFeeandSalesTax
{
    void Run()
    {

        float BillValue, TotalBill;

        cout << "enter the Bill Value ?" << endl;
        cin >> BillValue;

        TotalBill = BillValue + BillValue * 10 / 100 + BillValue * 16 / 100;

        cout << "the Total Bill is : " << TotalBill << endl;

    }
}