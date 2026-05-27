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
#include<vector>
#include<string>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace SplitString
{
    void SplitStringToVector(string Phrase, vector <string>& vPhrase, string Separitor = " ")
    {
        short SeparitorPosition = Phrase.find(Separitor);
        string Word = Phrase.substr(0, SeparitorPosition);

        while (SeparitorPosition != Phrase.npos)
        {
            if (Word != Separitor && Word != "")
            {
                vPhrase.push_back(Word);
            }

            Phrase.erase(0, SeparitorPosition + Separitor.length());

            SeparitorPosition = Phrase.find(Separitor);
            Word = Phrase.substr(0, SeparitorPosition);
        }

        if (Word != Separitor && Word != "")
        {
            vPhrase.push_back(Word);
        }


    }

    void Run()
    {
        string Phrase = MyInput::ReadString();

        vector <string> vPhrase;

        SplitStringToVector(Phrase, vPhrase);


        cout << "\nToken = " << vPhrase.size();
        MyOutput::PrintVector(vPhrase, "\nVector Elements\n", "\n", "Word [", true, "] : ");

    }
}