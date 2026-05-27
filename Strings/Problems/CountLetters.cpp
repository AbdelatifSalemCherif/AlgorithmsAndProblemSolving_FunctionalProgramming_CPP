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
#include <string>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace CountLetters
{
    short CountLetterInPhrase(string Phrase, char Letter)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (Phrase[i] == Letter)
            {
                Counter++;
            }
        }

        return Counter;
    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        char Letter = MyInput::ReadCharacter();

        MyOutput::PrintCharacter("\nLetter \'", Letter, "\' ");
        MyOutput::PrintNumber("Count = ", CountLetterInPhrase(Phrase, Letter), "\n");

    }
}