/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 22, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include <iostream>
#include<cctype>

#include"MyInput.h";
#include"MyOutput.h";


using namespace std;

namespace InvertCharacterCase
{
    char InvertCharacter(char Char)
    {
        return (isupper(Char)) ? tolower(Char) : toupper(Char);
    }

    void Run()
    {

        MyOutput::PrintCharacter("\nCharacter after inverting case :\n", InvertCharacter(MyInput::ReadCharacter()), "\n");

    }
}