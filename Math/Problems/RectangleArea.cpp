/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>
#include<string>

using namespace std;

namespace RectangleArea
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float RectangleArea(float a, float b)
    {
        return a * b;
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {
        float a = ReadFloatFromUser("Please enter a of rectangle ?"), b = ReadFloatFromUser("Please enter b of rectangle ?");


        PrintFloatToUser("\nRectangle with a=" + to_string(a) + " and b=" + to_string(b) + " area is : ", RectangleArea(a, b), "\n");

    }
}