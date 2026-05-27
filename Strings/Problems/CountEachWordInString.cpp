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

using namespace std;

namespace CountEachWordInString
{
    short CountAllWords(string Phrase, string Separator = " ")
    {
        short Counter = 0, SeparatorPosition = Phrase.find(Separator);

        string Word = Phrase.substr(0, SeparatorPosition);

        while (SeparatorPosition != Phrase.npos)
        {

            if (Word != Separator && Word != "")
            {
                Counter++;
            }

            Phrase.erase(0, SeparatorPosition + Separator.length());

            SeparatorPosition = Phrase.find(Separator);

            Word = Phrase.substr(0, SeparatorPosition);
        }

        return (Word != Separator && Word != "") ? Counter + 1 : Counter;
    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        MyOutput::PrintNumber("\nThe number of words in your string is : ", CountAllWords(Phrase), "\n");

    }
}