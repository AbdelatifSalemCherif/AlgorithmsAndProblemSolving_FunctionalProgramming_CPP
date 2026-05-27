/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 22, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include <iostream>
#include<cctype>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace CountSmall_CapitalLetters
{
    short CountAllUpperCase(string Phrase)
    {
        short UpperCase = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (isupper(Phrase[i]))
            {
                UpperCase++;
            }
        }

        return UpperCase;
    }

    short CountAllLowerCase(string Phrase)
    {
        short LowerCase = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (islower(Phrase[i]))
            {
                LowerCase++;
            }
        }

        return LowerCase;
    }


    void Run()
    {
        string Phrase = MyInput::ReadString();

        MyOutput::PrintNumber("\nString Length = ", (short)Phrase.length(), "\n");

        MyOutput::PrintNumber("Capital Letters Count = ", CountAllUpperCase(Phrase), "\n");

        MyOutput::PrintNumber("Small Letters Count = ", CountAllLowerCase(Phrase), "\n");

    }
}