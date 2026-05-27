/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>
#include<cmath>
#include<string>


using namespace std;

namespace RectangleAreaThroughDiagonalAndSide
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float RectangleArea(float a, float Diameter)
    {
        return a * sqrt(pow(Diameter, 2) - pow(a, 2));
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {

        float a = ReadFloatFromUser("Please enter side of ractangle?"),
            d = ReadFloatFromUser("Please enter Diagram of ractangle?");


        PrintFloatToUser("\nRectangle of a= " + to_string(a) + " and diameter= " + to_string(d) + " area is : ",
            RectangleArea(a, d), "\n");
    }
}