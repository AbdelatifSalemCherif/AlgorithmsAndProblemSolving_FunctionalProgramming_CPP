/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 12, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 35 Functions
==================================================================
*/

#pragma once

#include<iostream>
#include<string>
#include<cctype>

#include"CheckNumbersInRange.h";
#include"MyStringProcess.h";
#include"MyOutput.h";

using namespace std;

namespace MyInput
{

    inline int ValidateNumber(int& Number)
    {

        while (cin.fail())
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\aInvalid number, Enter a valid number ?" << endl;

            cin >> Number;
        }

        return Number;
    }

    inline float ValidateNumber(float& Number)
    {

        while (cin.fail())
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\aInvalid number, Enter a valid number ?" << endl;

            cin >> Number;
        }

        return Number;
    }

    inline double ValidateNumber(double& Number)
    {

        while (cin.fail())
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\aInvalid number, Enter a valid number ?" << endl;

            cin >> Number;
        }

        return Number;
    }

    inline short ValidateNumber(short& Number)
    {

        while (cin.fail())
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\aInvalid number, Enter a valid number ?" << endl;

            cin >> Number;
        }

        return Number;
    }

    inline long long ValidateNumber(long long& Number)
    {

        while (cin.fail())
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\aInvalid number, Enter a valid number ?" << endl;

            cin >> Number;
        }

        return Number;
    }

    inline long double ValidateNumber(long double& Number)
    {

        while (cin.fail())
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\aInvalid number, Enter a valid number ?" << endl;

            cin >> Number;
        }

        return Number;
    }







    inline int ReadNumber(int TypeFunction = 0, string MessageToUser = "\nPlease enter an Integer Number ?\n")
    {
        int Number = 0;
        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        return Number;

    }

    inline float ReadNumber(float TypeFunction = 0, string MessageToUser = "\nPlease enter a float Number ?\n")
    {
        float Number = 0;
        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        return Number;

    }

    inline short ReadNumber(short TypeFunction = 0, string MessageToUser = "\nPlease enter a Short Number ?\n")
    {
        short Number = 0;
        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        return Number;

    }

    inline long long int ReadNumber(long long TypeFunction = 0, string MessageToUser = "\nPlease enter a Long Integer Number ?\n")
    {
        long long int Number = 0;
        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        return Number;

    }

    inline double ReadNumber(double TypeFunction = 0, string MessageToUser = "\nPlease enter a Double Number ?\n")
    {
        double Number = 0;
        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);


        return Number;
    }

    inline long double ReadNumber(long double TypeFunction = 0, string MessageToUser = "\nPlease enter a Long Double Number ?\n")
    {
        long double Number = 0;
        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        return Number;

    }

    inline bool ReadBoolian(string MessageToUser = "\nPlease enter true (1) or false (0) ?\n")
    {
        bool Bool = true;
        cout << MessageToUser;
        cin >> Bool;

        return Bool;
    }

    inline string ReadString(string MessageToUser = "\nPlease enter a String ?\n")
    {
        string String = " ";
        cout << MessageToUser;
        getline(cin >> ws, String);
        /*cin.ignore(1, '\n');*/


        return String;

    }

    inline char ReadCharacter(string MessageToUser = "\nPlease enter a Character ?\n")
    {
        char Char = 'A';
        cout << MessageToUser;
        cin >> Char;

        return Char;

    }








    inline int ReadPositiveNumber(int TypeFunction = 0, string MessageToUser = "\nPlease enter a positive integer ?\n"
        , string ErrorMessage = "\n\nShould be a Positive Number !\n\n")
    {
        int Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckPostiveNumber(Number))
        {
            cout << "\a" << ErrorMessage << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);

        }

        return Number;
    }

    inline float ReadPositiveNumber(float TypeFunction = 0, string MessageToUser = "\nPlease enter a positive float ?\n"
        , string ErrorMessage = "\n\nShould be a Positive Number !\n\n")
    {
        float Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckPostiveNumber(Number))
        {
            cout << "\a" << ErrorMessage << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);

        }

        return Number;
    }

    inline short ReadPositiveNumber(short TypeFunction = 0, string MessageToUser = "\nPlease enter a positive short ?\n"
        , string ErrorMessage = "\n\nShould be a Positive Number !\n\n")
    {
        short Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckPostiveNumber(Number))
        {
            cout << "\a" << ErrorMessage << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);

        }

        return Number;
    }

    inline double ReadPositiveNumber(double TypeFunction = 0, string MessageToUser = "\nPlease enter a positive double ?\n"
        , string ErrorMessage = "\n\nShould be a Positive Number !\n\n")
    {
        double Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckPostiveNumber(Number))
        {
            cout << "\a" << ErrorMessage << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);

        }

        return Number;
    }

    inline long long ReadPositiveNumber(long long TypeFunction = 0, string MessageToUser = "\nPlease enter a positive long integer ?\n"
        , string ErrorMessage = "\n\nShould be a Positive Number !\n\n")
    {
        long long Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckPostiveNumber(Number))
        {
            cout << "\a" << ErrorMessage << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);

        }
        return Number;
    }

    inline long double ReadPositiveNumber(long double TypeFunction = 0, string MessageToUser = "\nPlease enter a positive Long Double ?\n"
        , string ErrorMessage = "\n\nShould be a Positive Number !\n\n")
    {
        long double Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckPostiveNumber(Number))
        {
            cout << "\a" << ErrorMessage << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);

        }

        return Number;
    }









    inline int ReadNumberInRange(int From, int To, string MessageToUser)
    {
        int Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckNumberInRange(Number, From, To))
        {
            cout << "\a\n\nShould be Between " << From << " to " << To << endl << endl << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);
        }

        return Number;
    }

    inline float ReadNumberInRange(float From, float To, string MessageToUser)
    {
        float Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckNumberInRange(Number, From, To))
        {
            cout << "\a\n\nShould be Between " << From << " to " << To << endl << endl << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);
        }

        return Number;
    }

    inline short ReadNumberInRange(short From, short To, string MessageToUser)
    {
        short Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckNumberInRange(Number, From, To))
        {
            cout << "\a\n\nShould be Between " << From << " to " << To << endl << endl << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);
        }

        return Number;
    }

    inline long long ReadNumberInRange(long long From, long long To, string MessageToUser)
    {
        long long Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckNumberInRange(Number, From, To))
        {
            cout << "\a\n\nShould be Between " << From << " to " << To << endl << endl << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);
        }

        return Number;
    }

    inline double ReadNumberInRange(double From, double To, string MessageToUser)
    {
        double Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckNumberInRange(Number, From, To))
        {
            cout << "\a\n\nShould be Between " << From << " to " << To << endl << endl << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);
        }
        return Number;
    }

    inline long double ReadNumberInRange(long double From, long double To, string MessageToUser)
    {
        long double Number = 0;

        cout << MessageToUser;
        cin >> Number;

        Number = ValidateNumber(Number);

        while (!CheckNumbersInRange::CheckNumberInRange(Number, From, To))
        {
            cout << "\a\n\nShould be Between " << From << " to " << To << endl << endl << MessageToUser;
            cin >> Number;

            Number = ValidateNumber(Number);
        }

        return Number;
    }


    inline int ReadNumbreMultipleOf(int Divider, string MessageToUser)
    {
        int Number = ReadNumber((int)0, MessageToUser);

        while (Number % Divider != 0)
        {
            Number = ReadNumber((int)0, MessageToUser);
        }


        return Number;

    }








    inline void RestScreen()
    {
        system("CLS");
        system("Color 0F");
    }


    inline bool ReadYesOrNo(string MessageToUser, bool CleanConsol = false)
    {
        bool Yes = false, No = false;

        string UserChoice = "";

        do {
            cout << MessageToUser;
            cin >> UserChoice;

            Yes = MyStringProcess::ToUpperAllPhrase(UserChoice) == "Y" || MyStringProcess::ToUpperAllPhrase(UserChoice) == "YES";
            No = MyStringProcess::ToUpperAllPhrase(UserChoice) == "N" || MyStringProcess::ToUpperAllPhrase(UserChoice) == "NO";


        } while (UserChoice.length() > 3 || (!Yes && !No));

        if (CleanConsol && Yes)
            RestScreen();


        return Yes;

    }





    inline int RandomNumberInRange(int From, int To)
    {
        int Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    inline short RandomNumberInRange(short From, short To)
    {
        short Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    inline long long RandomNumberInRange(long long From, long long To)
    {
        long long Number = rand();

        return (Number % (To - From + 1)) + From;
    }

    inline char RandomCharacterInRange(char From, char To)
    {
        short Number = RandomNumberInRange((short)0, (short)127);


        return char((Number % (short(To) - short(From) + 1)) + short(From));
    }

    inline string RandomWordInRange(short Length, char From, char To)
    {
        string Word = "";

        for (short i = 0; i < Length; i++)
        {
            Word = Word + RandomCharacterInRange(From, To);
        }

        return Word;
    }




}