/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace CheckPerfectNember
{
    int ReadPositiveNumber(string MessageToUser = "Please enter a positive Number ?\n")
    {
        int Number = 0;

        do {
            cout << MessageToUser;
            cin >> Number;
        } while (Number < 0);

        return Number;
    }

    bool IsPerfectNumber(int Number)
    {
        if (Number == 0 || Number == 1 || Number == 2 || Number == 3)
            return false;

        int Sum = 1, Round = round(Number / 2);

        if (Number % 2 != 0)
        {
            for (int i = 3; i <= Round; i += 2)
            {
                if (Number % i == 0)
                    Sum += i;
            }
        }
        else {
            Sum += 2;
            for (int i = 3; i <= Round; i++)
            {
                if (Number % i == 0)
                    Sum += i;
            }
        }

        return (Number == Sum);
    }

    string ConvertIsPerfectNumberToString(bool IsPerfectNumber)
    {
        if (IsPerfectNumber)
            return "Perfect Number";
        return "Not a Perfect Number";
    }

    void Run()
    {

        cout << "\nThis Number is : " << ConvertIsPerfectNumberToString(IsPerfectNumber(ReadPositiveNumber())) << endl;

    }
}