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

namespace AverageOf3Marks
{
    void Run()
    {
        short Mark1, Mark2, Mark3;

        cout << "Please enter the first mark ? " << endl;
        cin >> Mark1;

        cout << "Please enter the second mark ? " << endl;
        cin >> Mark2;

        cout << "Please enter the third mark ? " << endl;
        cin >> Mark3;

        cout << "\nthe avrege of your marks is : " << float(Mark1 + Mark2 + Mark3) / 3 << endl;
    }
}