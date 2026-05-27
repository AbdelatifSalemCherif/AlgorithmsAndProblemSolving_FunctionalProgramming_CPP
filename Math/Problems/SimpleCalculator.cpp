/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace SimpleCalculator
{
    float ReadFloatNumber(string MessageToUser)
    {
        float FloatNumber;

        cout << MessageToUser;
        cin >> FloatNumber;

        return FloatNumber;
    }

    char ReadChar(string MessageToUser)
    {
        char Char;

        cout << MessageToUser;
        cin >> Char;

        return Char;
    }

    float CalculatBySymbole(float Number1, float Number2, char OperationType)
    {
        switch (OperationType)
        {
        case '+':
            return Number1 + Number2;
            break;
        case '-':
            return Number1 - Number2;
            break;
        case '*':
            return Number1 * Number2;
            break;
        case '/':
            return Number1 / Number2;
            break;
        default:
            return NAN;
        }

    }

    void Run()
    {

        cout << CalculatBySymbole(ReadFloatNumber("Please enter Number 1 ?\n"),
            ReadFloatNumber("Please enter Number 2 ?\n"), ReadChar("Please enter Operation type + - / * ?\n")) << endl;

    }
}