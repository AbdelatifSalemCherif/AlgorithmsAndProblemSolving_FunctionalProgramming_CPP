/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include <iostream>
#include <string>

using namespace std;

namespace EncryptDecryptText
{
    string ReadWord(string MessageToUser = "Please enter a word ?\n")
    {
        string Word = "";

        cout << MessageToUser;

        getline(cin, Word);

        return Word;
    }


    string EncryptionWord(string Word, int Key)
    {
        int Length = Word.length();
        for (int i = 0; i < Length; i++)
        {
            Word[i] = char(int(Word[i]) + Key);
        }

        return Word;
    }

    string DecryptionWord(string Word, int Key)
    {
        int Length = Word.length();
        for (int i = 0; i < Length; i++)
        {
            Word[i] = char(int(Word[i]) - Key);
        }

        return Word;
    }


    void Run()
    {
        int Key = 2;
        string Word = ReadWord(), Encryption = EncryptionWord(Word, Key);


        cout << "\nText Before Encryption : " << Word << endl;

        cout << "Text After Encryption : " << Encryption << endl;

        cout << "Text After Decryption : " << DecryptionWord(Encryption, Key) << endl;

    }
}