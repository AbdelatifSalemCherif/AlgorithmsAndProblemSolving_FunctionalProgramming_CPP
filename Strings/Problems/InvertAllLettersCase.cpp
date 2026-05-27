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

#include"MyInput.h";
#include"MyOutput.h";
#include"MyCharProcess.h";


using namespace std;

namespace InvertAllLettersCase
{
    string InvertAllLettersCase(string Phrase)
    {
        for (short i = 0; i < Phrase.length(); i++)
        {
            Phrase[i] = MyCharProcess::InvertCharacter(Phrase[i]);
        }

        return Phrase;
    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        MyOutput::PrintString("\nString after inverting all letters case :\n", InvertAllLettersCase(Phrase), "\n");

        MyOutput::PrintString("\nYour original string :\n", Phrase, "\n");

    }
}