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
#include"MyOutput.h";
#include"MyCharProcess.h";


using namespace std;

namespace CountVowel
{
    short CountAllVowels(string Phrase)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (MyCharProcess::CheckVowelLetter(Phrase[i]))
            {
                Counter++;
            }
        }

        return Counter;
    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        MyOutput::PrintNumber("\nNumber of vowels is : ", CountAllVowels(Phrase), "\n");

    }
}