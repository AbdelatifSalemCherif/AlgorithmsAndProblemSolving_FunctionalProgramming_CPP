/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>


using namespace std;

namespace PrintNumbersFromNto1
{
    int ReadIntNumber(string MessageToUser)
    {
        int IntNumber;

        cout << MessageToUser;
        cin >> IntNumber;

        return IntNumber;
    }

    void PrintNumbersFromNTo1(int N) {

        int i = N;

        while (i >= 1)
        {
            cout << i << " ";
            --i;
        }
    }

    //void PrintNumbersFromNTo1(int N)
    //{
    //    
    //    if (N >= 1) 
    //    { 
    //        cout << N << " ";
    //        PrintNumbersFromNTo1(N - 1); 
    //    }
    //}

    void Run()
    {

        PrintNumbersFromNTo1(ReadIntNumber("Please enter N ?\n"));

    }
}