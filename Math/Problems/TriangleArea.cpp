/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 23, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 1 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace TriangleArea
{
    void Run()
    {
        float a, h;

        cout << "Please enter the a of triangle ?" << endl;
        cin >> a;

        cout << "Please enter the h of triangle ?" << endl;
        cin >> h;


        cout << "the area of triangle is : " << a * h / 2 << endl;
    }
}