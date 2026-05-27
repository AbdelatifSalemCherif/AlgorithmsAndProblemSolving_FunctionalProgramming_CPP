/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 22, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>

#include"MyInput.h";

using namespace std;

namespace PrintFirstLetterOfEachWord
{
    void PrintFirstLettersOfPhrase(string Phrase)
    {
        cout << Phrase[0] << endl;

        for (short i = 1; i < Phrase.length(); i++)
        {
            if (Phrase[i] == ' ')
            {
                cout << Phrase[++i] << endl;;
            }
        }
    }

    void Run()
    {
        PrintFirstLettersOfPhrase(MyInput::ReadString());

    }
}