/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 24, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>

#include"MyInput.h";
#include"MyOutput.h";
#include"MyStringProcess.h";

using namespace std;

namespace ReverseWords
{
    string ReverseWordsOrder(string Phrase, string Separator = " ")
    {
        vector <string> vPhrase;

        vPhrase = MyStringProcess::SplitStringToVector(Phrase, Separator);

        vector <string>::iterator WordPointer = vPhrase.end();

        Phrase.clear();

        while (WordPointer != vPhrase.begin())
        {
            WordPointer--;

            Phrase.append(*WordPointer + Separator);
        }


        return Phrase.substr(0, Phrase.length() - Separator.length());
    }

    void Run()
    {

        string Phrase = MyInput::ReadString();

        MyOutput::PrintString("\nString After Reversing Words :\n", ReverseWordsOrder(Phrase), "\n");

    }
}