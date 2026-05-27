/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include <iostream>

using namespace std;

namespace MyABS
{
    int ReadIntNumber(string MessageToUser)
    {
        int Number = 0;

        cout << MessageToUser;

        cin >> Number;

        return Number;
    }

    int MyABS(int Number)
    {
        if (Number < 0)
            return (-1) * Number;

        return Number;
    }

    float ABS(float Number)
    {
        return (1 - 2 * (Number < 0)) * Number;
    }


    void Run()
    {
        int Number = ReadIntNumber("Please enter a number ?\n");

        cout << "My abs result is : " << MyABS(Number) << endl;
        cout << "C++ abs result is : " << abs(Number) << endl;

    }
}