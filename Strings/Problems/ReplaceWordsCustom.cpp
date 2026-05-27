/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 25, 2024 (Stored in .txt Archives)
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

namespace ReplaceWordsCustom
{
    string ReplaceAllWords_UsingSplitVector(string Phrase, string LastWord, string NewWord, bool MuchCase = true
        , string Separator = " ")
    {
        vector <string> vPhrase = MyStringProcess::SplitStringToVector(Phrase, Separator);

        if (MuchCase)
        {
            for (string& i : vPhrase)
            {
                if (i == LastWord)
                {
                    i = NewWord;
                }
            }
        }
        else
        {
            LastWord = MyStringProcess::ToUpperAllPhrase(LastWord);

            for (string& i : vPhrase)
            {
                if (MyStringProcess::ToUpperAllPhrase(i) == LastWord)
                {
                    i = NewWord;
                }
            }
        }

        return MyStringProcess::JoinString(vPhrase, Separator);
    }

    void Run()
    {

        string Phrase = MyInput::ReadString(), LastWord = MyInput::ReadString("\nEnter a word to replace it ?"),
            NewWord = MyInput::ReadString("\nEnter a word to Add it on string ?");

        MyOutput::PrintString("\nOriginal String :\n", Phrase, "\n");

        MyOutput::PrintString("\nReplace with much case :\n", ReplaceAllWords_UsingSplitVector(Phrase, LastWord, NewWord), "\n");

        MyOutput::PrintString("\nReplace without much case :\n"
            , ReplaceAllWords_UsingSplitVector(Phrase, LastWord, NewWord, false), "\n");

    }
}