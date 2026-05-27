/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 11 Functions
==================================================================
*/

#include<iostream>
#include<cstdlib>

using namespace std;

namespace GeneratKeys
{
    enum enCharacterType { CapitallLetter, SmallLetter, SpecialCharacter, DigitInOrder };

    int ReadPositiveNumber(string MessageToUser = "Please enter a positive Number \n")
    {
        int Number = 0;

        do {
            cout << MessageToUser;
            cin >> Number;
        } while (Number < 0);

        return Number;
    }

    int RandomInRange(int From, int To)
    {
        int Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    char RandomSmallLetter()
    {
        return char(RandomInRange(97, 122));
    }

    char RandomCapitalLetter()
    {
        return char(RandomInRange(65, 90));
    }

    char RandomSpecialCharacter()
    {
        int RandomIndexForIntervalles = RandomInRange(1, 4);

        switch (RandomIndexForIntervalles)
        {
        case 1:
            return char(RandomInRange(33, 47));
        case 2:
            return char(RandomInRange(58, 64));
        case 3:
            return char(RandomInRange(91, 96));
        default:
            return char(RandomInRange(123, 126));
        }
    }

    char RandomDigitInOrder()
    {
        return char(RandomInRange(48, 57));
    }

    char RandomCharacter(enCharacterType CharacterType)
    {
        switch (CharacterType)
        {
        case enCharacterType::CapitallLetter:
            return RandomCapitalLetter();
        case enCharacterType::SmallLetter:
            return RandomSmallLetter();
        case enCharacterType::SpecialCharacter:
            return RandomSpecialCharacter();
        default:
            return RandomDigitInOrder();
        }
    }

    string RandomWord(enCharacterType CharacterType, int Length)
    {
        string Word = "";

        for (int i = 0; i < Length; i++)
        {
            Word = Word + RandomCharacter(CharacterType);
        }

        return Word;
    }

    string RandomKey(enCharacterType CharacterType, int LengthOfWord, int LengthOfKey)
    {
        string Key = "";

        for (int i = 0; i < LengthOfKey - 1; i++)
            Key = Key + RandomWord(CharacterType, LengthOfWord) + "-";

        Key = Key + RandomWord(CharacterType, LengthOfWord);

        return Key;
    }

    void GenerateNKeys(int NumberOfKeys, int NumberOfWord, int NumberOfCharacterForaWord, enCharacterType CharacterType)
    {
        cout << endl;

        for (int i = 1; i <= NumberOfKeys; i++)
        {
            cout << "Key[" << i << "] : " << RandomKey(CharacterType, NumberOfCharacterForaWord, NumberOfWord) << endl;
        }

        cout << endl;
    }

    void Run()
    {
        srand((unsigned)time(NULL));

        GenerateNKeys(ReadPositiveNumber(), 4, 4, enCharacterType::CapitallLetter);

    }
}