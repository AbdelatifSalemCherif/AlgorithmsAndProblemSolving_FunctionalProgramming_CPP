/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 23, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<string>

#include"MyInput.h";
#include"MyCharProcess.h";


using namespace std;

namespace PrintAllVowelsInString
{
    void PrintAllVowels(string Phrase)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (MyCharProcess::CheckVowelLetter(Phrase[i]))
            {
                cout << Phrase[i] << "   ";
            }
        }
    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        PrintAllVowels(Phrase);

    }
}