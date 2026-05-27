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
#include<cctype>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace IsVowel
{
    bool CheckVowelLetter(char Letter)
    {
        Letter = tolower(Letter);

        return Letter == 'a' || Letter == 'o' || Letter == 'e' || Letter == 'i' || Letter == 'u';
    }

    void Run()
    {
        char Letter = MyInput::ReadCharacter();

        if (CheckVowelLetter(Letter))
        {
            MyOutput::PrintCharacter("\nYes, Letter \'", Letter, "\' is vowel\n");
        }
        else
        {
            MyOutput::PrintCharacter("\nNo, Letter \'", Letter, "\' is Not vowel\n");
        }

    }

}