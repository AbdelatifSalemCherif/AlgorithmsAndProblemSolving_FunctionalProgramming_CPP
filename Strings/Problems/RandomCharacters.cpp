/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include <iostream>
#include<cstdlib>

using namespace std;

namespace RandomCharacters
{
    enum enCharacterType { CapitallLetter, SmallLetter, SpecialCharacter, DigitInOrder };

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

    void Run()
    {
        srand((unsigned)time(NULL));

        cout << RandomCharacter(enCharacterType::SmallLetter) << endl;
        cout << RandomCharacter(enCharacterType::CapitallLetter) << endl;
        cout << RandomCharacter(enCharacterType::SpecialCharacter) << endl;
        cout << RandomCharacter(enCharacterType::DigitInOrder) << endl;

    }
}