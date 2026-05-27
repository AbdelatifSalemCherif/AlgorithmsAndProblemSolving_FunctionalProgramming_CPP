/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace Swap2Numbers
{
    int ReadNumber(string MessageToUser)
    {
        int Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }


    void Swap2Numbers(int& Number1, int& Number2)
    {
        int Number3;

        Number3 = Number1;
        Number1 = Number2;
        Number2 = Number3;
    }


    void Run()
    {
        int Number1 = ReadNumber("Please enter Number 1 ?"), Number2 = ReadNumber("Please enter Number 2 ?");

        Swap2Numbers(Number1, Number2);

        cout << endl << Number1 << " " << Number2 << endl;

    }
}