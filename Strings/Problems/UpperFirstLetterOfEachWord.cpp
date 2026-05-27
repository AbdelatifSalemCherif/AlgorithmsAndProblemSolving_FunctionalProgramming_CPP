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
#include"MyOutput.h";


using namespace std;

namespace UpperFirstLetterOfEachWord
{
    string ToUpperAllFirstLetters(string Phrase)
    {
        Phrase[0] = toupper(Phrase[0]);

        for (short i = 1; i < Phrase.length(); i++)
        {
            if (Phrase[i] == ' ')
            {
                Phrase[i + 1] = toupper(Phrase[i + 1]);
                i++;
            }
        }

        return Phrase;
    }

    void Run()
    {

        MyOutput::PrintString("\nString After Conversion : \n"
            , ToUpperAllFirstLetters(MyInput::ReadString("Please Enter your String ?\n")), "\n");

    }
}