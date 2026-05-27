/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 23, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace TrimLeft_TrimRight_Trim
{
    string ReverseString(string Phrase)
    {
        string Copy = Phrase;
        short Length = Phrase.length();

        for (short i = 0; i < Length; i++)
        {
            Phrase[i] = Copy[Length - 1 - i];
        }

        return Phrase;
    }

    string TrimLeft(string Phrase, string Delim = " ")
    {
        short DelimPosition = Phrase.find(Delim);


        while (DelimPosition == 0)
        {
            Phrase.erase(0, Delim.length());

            DelimPosition = Phrase.find(Delim);
        }

        return Phrase;
    }

    string TrimRight(string Phrase, string Delim = " ")
    {

        Phrase = TrimLeft(ReverseString(Phrase), ReverseString(Delim));

        return ReverseString(Phrase);
    }

    string Trim(string Phrase, string Delim = " ")
    {
        return TrimLeft(TrimRight(Phrase, Delim), Delim);
    }

    void Run()
    {
        string Phrase = MyInput::ReadString("String = ");

        MyOutput::PrintString("\nTrim Left = ", TrimLeft(Phrase, "."), "\n");

        MyOutput::PrintString("\nTrim Right = ", TrimRight(Phrase, "."), "\n");

        MyOutput::PrintString("\nTrim = ", Trim(Phrase, "."), "\n");

    }
}