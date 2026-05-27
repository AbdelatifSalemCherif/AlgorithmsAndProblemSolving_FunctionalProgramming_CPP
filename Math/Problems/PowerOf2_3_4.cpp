/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 6 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PowerOf2_3_4
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float FloatPower2(float Number)
    {

        return Number * Number;
    }

    float FloatPower3(float Number)
    {

        return Number * Number * Number;
    }

    float FloatPower4(float Number)
    {

        return Number * Number * Number * Number;
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {


        float Number = ReadFloatFromUser("Please enter a Number ?");


        PrintFloatToUser("\nYour Number is : ", Number, "\n");
        PrintFloatToUser("Number power 2 : ", FloatPower2(Number), "\n");
        PrintFloatToUser("Number power 3 : ", FloatPower3(Number), "\n");
        PrintFloatToUser("Number power 4 : ", FloatPower4(Number), "\n");

    }
}