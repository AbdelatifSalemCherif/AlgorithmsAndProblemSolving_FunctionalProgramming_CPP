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

namespace CircleAreaAlongTheCircumference
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float CirculeAreaOfCircumference(float l)
    {
        return pow(l, 2) / (4 * 3.14);
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {


        float l = ReadFloatFromUser("Please enter the circumference l of the circule?");


        PrintFloatToUser("\nCircule of circumference l= " + to_string(l) + " area is : ", CirculeAreaOfCircumference(l), "\n");

    }
}