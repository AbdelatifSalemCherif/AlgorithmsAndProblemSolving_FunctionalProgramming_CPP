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
#include<cmath>
#include<string>


using namespace std;

namespace CircleAreaInscribedInAnIsoscelesTriangle
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float CirculeAreaOfTriangle(float a, float b)
    {
        return 3.14 * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {


        float a = ReadFloatFromUser("Please enter enter a of triangle of the circule ?"),
            b = ReadFloatFromUser("Please enter b of the triangle of the circule?");

        PrintFloatToUser("\nCircule of Trangle with a= " + to_string(a) + " and b= " + to_string(b) + " area is : ",
            CirculeAreaOfTriangle(a, b), "\n");

    }
}