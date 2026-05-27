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

#include"MyOutput.h";

using namespace std;

namespace JoinStringOverloadingInArray
{
    string JoinString(vector <string>& vPhrase, string Separator = " ")
    {
        string Phrase = "";

        for (string& i : vPhrase)
        {
            Phrase.append(i + Separator);
        }

        //Phrase.erase(Phrase.length() - Separator.length(), Separator.length());

        return Phrase.substr(0, Phrase.length() - Separator.length());
    }

    string JoinString(string ArrPhrase[], short Length, string Separator = " ")
    {
        string Phrase = "";

        for (short i = 0; i < Length; i++)
        {
            Phrase += ArrPhrase[i] + Separator;
        }

        //Phrase.erase(Phrase.length() - Separator.length(), Separator.length());

        return Phrase.substr(0, Phrase.length() - Separator.length());
    }

    void Run()
    {

        vector <string> vPhrase = { {"Mohammed"}, {"Qutada"}, {"Bachir"}, {"Amira"}, {"Assim"} };

        string ArrPhrase[] = { {"Mohammed"}, {"Qutada"}, {"Bachir"}, {"Amira"}, {"Assim"} };

        string Phrase = JoinString(vPhrase, ",");

        MyOutput::PrintString("Vector after Join :\n", Phrase, "\n\n");

        Phrase.clear();

        Phrase = JoinString(ArrPhrase, 5, "-");

        MyOutput::PrintString("Array after Join :\n", Phrase, "\n\n");

    }
}