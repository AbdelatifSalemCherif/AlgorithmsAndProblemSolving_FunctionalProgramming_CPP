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

using namespace std;

namespace PrintEachWordInString
{

    void PrintAllWords(string Phrase, string Separator = " ")
    {
        short SeparatorPosition = Phrase.find(Separator);

        string Word = Phrase.substr(0, SeparatorPosition);

        while (SeparatorPosition != Phrase.npos)
        {

            if (Word != Separator && Word != "")
            {
                cout << Word << endl;
            }

            Phrase.erase(0, SeparatorPosition + Separator.length());


            SeparatorPosition = Phrase.find(Separator);

            Word = Phrase.substr(0, SeparatorPosition);
        }

        if (Word != Separator && Word != "")
        {
            cout << Word << endl;
        }

    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        cout << "\n" << endl;
        PrintAllWords(Phrase);
        cout << endl;

    }
}