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

namespace CircleAreaInscribedInSquare
{
    float ReadFloatFromUser(string MessageToUser)
    {
        float Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    float CirculeAreaFromSquare(float AOfSquare)
    {
        return 3.14 * pow(AOfSquare, 2) / 4;
    }

    void PrintFloatToUser(string MessageToUserBefore, float Float, string MessageToUserAfter)
    {
        cout << MessageToUserBefore << Float << MessageToUserAfter;
    }

    void Run()
    {


        float A = ReadFloatFromUser("Please enter the A of the square of the circule?");


        PrintFloatToUser("\nCircle of square with A= " + to_string(A) + " area is : ", CirculeAreaFromSquare(A), "\n");

    }
}