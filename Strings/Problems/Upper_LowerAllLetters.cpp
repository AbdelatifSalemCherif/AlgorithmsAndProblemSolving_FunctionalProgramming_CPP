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

namespace Upper_LowerAllLetters
{
    string ToLowerAllPhrase(string Phrase)
    {

        for (short i = 0; i < Phrase.length(); i++)
        {
            Phrase[i] = tolower(Phrase[i]);
        }

        return Phrase;
    }

    string ToUpperAllPhrase(string Phrase)
    {

        for (short i = 0; i < Phrase.length(); i++)
        {
            Phrase[i] = toupper(Phrase[i]);
        }

        return Phrase;
    }

    void Run()
    {
        string Phrase = MyInput::ReadString("Please enter your string ?\n");

        MyOutput::PrintString("\nString after Upper :\n", ToUpperAllPhrase(Phrase), "\n");

        MyOutput::PrintString("\nString after Lower :\n", ToLowerAllPhrase(Phrase), "\n");

        MyOutput::PrintString("\nYour String is :\n", Phrase, "\n");

    }
}