/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 24, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace ReplaceWords
{
    string ReplaceWord(string Phrase, string NewWord, short LastWordPosition, short LastWordLength)
    {
        short& From = LastWordPosition;
        short To = From + LastWordLength;

        //return Substr(Phrase, 0, From) + NewWord + Substr(Phrase, To, Phrase.length() - To);

        return Phrase.substr(0, From) + NewWord + Phrase.substr(To, Phrase.length() - To);
    }

    string ReplaceAllWords(string Phrase, string LastWord, string NewWord)
    {
        short LastWordPosition = Phrase.find(LastWord), LastWordLength = LastWord.length();

        while (LastWordPosition != Phrase.npos)
        {
            Phrase = Phrase.replace(LastWordPosition, LastWordLength, NewWord);

            //Phrase = ReplaceWord(Phrase, NewWord, LastWordPosition, LastWordLength);

            LastWordPosition = Phrase.find(LastWord);
        }

        return Phrase;
    }

    void Run()
    {

        string Phrase = MyInput::ReadString(), LastWord = MyInput::ReadString("\nEnter a word to replace it ?"),
            NewWord = MyInput::ReadString("\nEnter a word to Add it on string ?");

        MyOutput::PrintString("\nOriginal String :\n", Phrase, "\n");

        MyOutput::PrintString("\nString after repalce :\n", ReplaceAllWords(Phrase, LastWord, NewWord), "\n");

    }
}