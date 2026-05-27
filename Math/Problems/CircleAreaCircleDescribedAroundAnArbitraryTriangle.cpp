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

namespace CircleAreaCircleDescribedAroundAnArbitraryTriangle
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float CirculeAreaOfTriangle(float a, float b, float c)
    {
        float p;

        p = (a + b + c) / 2;

        return 3.14 * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {

        float a = ReadFloatFromUser("Please enter enter a of triangle of the circule?"),
            b = ReadFloatFromUser("Please enter b of the triangle of the circule?"),
            c = ReadFloatFromUser("Please enter c of the triangle of the circule?");


        PrintFloatToUser("\nCircule of Trangle with a= " + to_string(a) + " and b= " + to_string(b) + "and c= " + to_string(c)
            + "area is : ", CirculeAreaOfTriangle(a, b, c), "\n");

    }
}