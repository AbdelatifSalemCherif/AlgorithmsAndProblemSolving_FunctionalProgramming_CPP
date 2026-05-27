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

namespace CircleArea
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float CircleArea(float rayon)
    {
        return 3.14 * pow(rayon, 2);
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {


        float r = ReadFloatFromUser("Please enter tha ray r of your circule ?");


        PrintFloatToUser("\nCircle of rayon= " + to_string(r) + " area is : ", CircleArea(r), "\n");

    }
}