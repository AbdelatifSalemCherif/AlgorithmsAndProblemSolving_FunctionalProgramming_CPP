/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace Find3LettersPassword
{
    bool CheckIntInRang(int Number, int From, int To)
    {
        return Number >= From && Number <= To;
    }

    bool IsStringOf3Letters(string String)
    {
        int Int[3];
        Int[0] = int(String[0]);
        Int[1] = int(String[1]);
        Int[2] = int(String[2]);

        bool LengthIs3 = String.length() == 3,
            AllAreLetters = CheckIntInRang(Int[0], 65, 90) && CheckIntInRang(Int[1], 65, 90) && CheckIntInRang(Int[2], 65, 90);

        return LengthIs3 && AllAreLetters;
    }

    string Read3_LetterPassWord(string MessageToUser = "Please Enter your Password (3letters)?\n")
    {
        string Password = "AAA";


        do {
            cout << MessageToUser;
            cin >> Password;

        } while (!IsStringOf3Letters(Password));

        return Password;
    }

    void Find3_LetterPassword(string Password)
    {
        cout << endl;

        int Counter = 0;
        string Word = "   ";

        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                for (int k = 1; k <= 26; k++)
                {
                    Word[0] = char(i + 64);
                    Word[1] = char(j + 64);
                    Word[2] = char(k + 64);

                    cout << "Trial [" << ++Counter << "] : " << Word << endl;
                    if (Password == Word)
                    {
                        cout << endl << "Password is " << Word << "\nFound after " << Counter << " Trial(s)" << endl;

                        i = 50;
                        j = 50;
                        k = 50;
                    }

                }
            }
        }




    }

    void Run()
    {

        Find3_LetterPassword(Read3_LetterPassWord());

    }
}