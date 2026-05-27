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
#include<string>
#include<cctype>

#include"MyInput.h";
#include"MyOutput.h";
#include"MyCharProcess.h";

using namespace std;

namespace CountLettersMatchCase
{
    short CountLetterInPhrase(string Phrase, char Letter, bool MatchCase = true)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (MatchCase)
            {
                if (Phrase[i] == Letter)
                {
                    Counter++;
                }
            }
            else
            {
                if (toupper(Phrase[i]) == toupper(Letter))
                {
                    Counter++;
                }
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

        MyOutput::PrintCharacter("\nLetter \'", Letter, "\' ");
        MyOutput::PrintCharacter("or \'", MyCharProcess::InvertCharacter(Letter), "\' ");
        MyOutput::PrintNumber("Count = ", CountLetterInPhrase(Phrase, Letter, false), "\n");

    }
}