/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 8, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 10 Functions
==================================================================
*/

#include<iostream>
#include<vector>
#include<string>

#include"MyInput.h";
#include"MyStringProcess.h";
#include"CheckNumbersInRange.h";

using namespace std;

namespace FormatDate
{
    enum enFormatDate {
        DaySlashMonthSlashYear, YearSlashMonthSlashDay, MonthSlashDaySlashYear, DayDashMonthDashYear, MonthDashDayDashYear,
        Details
    };

    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    bool IsLeapYear(short Year)
    {
        return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    }

    short NumberOfDaysInMonth(short Year, short Month)
    {
        if (Month < 1 || Month>12)
        {
            return 0;
        }

        short NumbersOfDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


        return (Month == 2 && IsLeapYear(Year)) ? 29 : NumbersOfDay[Month];

    }

    bool IsValideDate(sDate Date)
    {
        return Date.Year > 0 && CheckNumbersInRange::CheckNumberInRange(Date.Month, (short)1, (short)12)
            && CheckNumbersInRange::CheckNumberInRange(Date.Day, (short)1, (short)NumberOfDaysInMonth(Date.Year, Date.Month));
    }

    bool IsANumber(string Number)
    {
        for (short i = Number.length() - 1; i >= 0; i--)
        {
            if ((short)Number[i] < 48 || (short)Number[i] > 57)
            {
                return false;
            }
        }

        return true;
    }

    vector<string> SplitStringToVector(string Phrase, string Separitor = " ")
    {
        vector <string> vPhrase;

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

        return vPhrase;
    }

    bool IsValidatStringDate(string DateString)
    {
        vector <string> vDateString = SplitStringToVector(DateString, "/");

        return vDateString.size() == 3 && IsANumber(vDateString[0]) && IsANumber(vDateString[1]) && IsANumber(vDateString[2]);

    }

    sDate StringToDate(string DateString)
    {
        sDate Date;

        vector <string> vDateString = SplitStringToVector(DateString, "/");

        Date.Day = (short)stoi(vDateString[0]);

        Date.Month = (short)stoi(vDateString[1]);

        Date.Year = (short)stoi(vDateString[2]);

        return Date;
    }

    string ReadDateString(string MessageToUser)
    {
        string DateString = MyInput::ReadString(MessageToUser);

        while (!IsValidatStringDate(DateString) || !IsValideDate(StringToDate(DateString)))
        {
            cout << "\a\n\n" << DateString << " don\'t Exist dans Gregorien Calendar !" << endl << endl;
            DateString = MyInput::ReadString(MessageToUser);
        }

        return DateString;
    }

    string DateToString(sDate Date, string  Format = "dd/mm/yyyy")
    {
        string Temp[3] = { "dd","mm","yyyy" };
        short arrDate[3] = { Date.Day, Date.Month, Date.Year };
        short Position;

        for (short i = 0; i < 3; i++)
        {
            Format = MyStringProcess::ReplaceAllWords_UsingOwnFind(Format, Temp[i], to_string(arrDate[i]), false);
        }

        return Format;
    }

    void Run()
    {
        string DateAsString = ReadDateString("Please enter Date dd/mm/yyyy ? ");

        sDate Date = StringToDate(DateAsString);

        cout << DateToString(Date) << endl;
        cout << DateToString(Date, "yyyy/mm/dd") << endl;
        cout << DateToString(Date, "mm/dd/yyyy") << endl;
        cout << DateToString(Date, "dd-mm-yyyy") << endl;
        cout << DateToString(Date, "mm-DD-yyyy") << endl;
        cout << DateToString(Date, "Day: DD, Month: mm, Year: yyyy") << endl;
        cout << DateToString(Date, "Day: DD, Month: mm, Year: yyyy") << endl;

    }
}