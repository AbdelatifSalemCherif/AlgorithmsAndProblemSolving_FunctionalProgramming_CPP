/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 26, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<string>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace RemovePunctuations
{
    string DeleteAllPunctuations(string Phrase)
    {
        string PhraseWithoutPuctuations = "";

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (!ispunct(Phrase[i]))
            {
                PhraseWithoutPuctuations += Phrase[i];
            }
        }

        return PhraseWithoutPuctuations;
    }

    void Run()
    {

        string Phrase = MyInput::ReadString();

        MyOutput::PrintString("\nOriginal String :\n", Phrase, "\n");

        MyOutput::PrintString("\n\nPunctuations Removed :\n", DeleteAllPunctuations(Phrase), "\n");

    }
}