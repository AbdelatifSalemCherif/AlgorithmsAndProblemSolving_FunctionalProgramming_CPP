/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>
#include<string>

using namespace std;

namespace PrintMultiplicationTableFrom1To10
{
    string AddSpacesToCharaters(string Message = " ", int N = 5)
    {
        while (Message.length() < N)
        {
            if (Message.length() % 2 == 0)
                Message = " " + Message;
            else
                Message += " ";

        }

        return Message;
    }

    string Header()
    {
        string Header = AddSpacesToCharaters("Multiplicationf Table from 1 to 10", 60) + "\n" + AddSpacesToCharaters(" ", 10);
        for (int i = 1; i <= 10; i++)
        {
            Header += AddSpacesToCharaters(to_string(i));
        }

        Header += "\n";

        string NineLines = "-----";

        for (int i = 1; i <= 12; i++)
        {
            Header += NineLines;
        }

        return Header + "\n";
    }

    void PrintMultiplicationTabe()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << AddSpacesToCharaters(to_string(i)) << AddSpacesToCharaters("|");
            for (int j = 1; j <= 10; j++)
            {
                cout << AddSpacesToCharaters(to_string(i * j));
            }
            cout << endl;
        }
    }

    void Run()
    {

        cout << Header();

        PrintMultiplicationTabe();

    }
}