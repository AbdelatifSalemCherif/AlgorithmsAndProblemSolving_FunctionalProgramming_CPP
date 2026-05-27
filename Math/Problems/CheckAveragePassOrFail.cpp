/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 30, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace CheckAveragePassOrFail
{
    float ReadFloatNumber(string MessageToUser)
    {
        float floatNumber;

        cout << MessageToUser;
        cin >> floatNumber;

        return floatNumber;
    }

    bool CheckIfMarkGreaterThan50(float Mark)
    {
        if (Mark >= 50)
        {
            return true;
        }
        return false;
    }

    float CalculateAverageOfArray3Numbers(float Mark[3])
    {
        return (Mark[0] + Mark[1] + Mark[2]) / 3;
    }

    void ReadFloatArrayOf3Numbers(float FloatArray[3], string MessageOfArray_0, string MessageOfArray_1, string MessageOfArray_2)
    {
        cout << MessageOfArray_0;
        cin >> FloatArray[0];

        cout << MessageOfArray_1;
        cin >> FloatArray[1];

        cout << MessageOfArray_2;
        cin >> FloatArray[2];
    }

    //void PrintFloatNumber(string MessageBefore, float FloatNumber , string MessageAfter)
    //{
    //    cout << MessageBefore << FloatNumber << MessageAfter;
    //}

    void Run()
    {
        float Mark[3];

        ReadFloatArrayOf3Numbers(Mark, "Please enter Mark 1 ?\n", "Please enter Mark 2 ?\n", "Please enter Mark 3 ?\n");

        if (CheckIfMarkGreaterThan50(CalculateAverageOfArray3Numbers(Mark)))
        {
            cout << endl << "Pass" << endl;
        }

        else {
            cout << endl << "Fail" << endl;
        }

    }
}