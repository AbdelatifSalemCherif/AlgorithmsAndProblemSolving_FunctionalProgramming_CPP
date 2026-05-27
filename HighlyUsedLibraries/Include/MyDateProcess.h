/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 78 Functions
==================================================================
*/

#pragma once
#pragma warning(disable:4996)

#include<iostream>
#include<vector>
#include <string>

#include"MyInput.h";
#include"MyStringProcess.h";
#include"CheckNumbersInRange.h";

using namespace std;

namespace MyDateProcess
{

    enum enCompare { Before = -1, Equal = 0, After = 1 };

    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    struct sPeriod
    {
        sDate StartDate;
        sDate EndDate;
    };

    inline bool IsDate1BeforeDate2(sDate Date1, sDate Date2);

    inline short NumberOfDaysInMonth(short Year, short Month);

    inline bool IsValideDate(sDate Date)
    {
        return Date.Year > 0 && CheckNumbersInRange::CheckNumberInRange(Date.Month, (short)1, (short)12)
            && CheckNumbersInRange::CheckNumberInRange(Date.Day, (short)1, (short)NumberOfDaysInMonth(Date.Year, Date.Month));
    }

    inline sDate ReadDate(string Header = "")
    {
        sDate Date;

        cout << Header;

        Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
        Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");

        while (!IsValideDate(Date))
        {
            cout << "\a\n\nThis Date Not Exist In Gregorian Calendar !\n" << endl << Header;

            Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
            Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
            Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");
        }

        return Date;
    }

    inline sPeriod ReadPeriod(string Header = "", string MessageStartDate = "\nPlease enter Start Date :\n",
        string MessageEndDate = "\nPlease enter End Date :\n")
    {
        sPeriod Period;

        cout << Header;

        Period.StartDate = ReadDate(MessageStartDate);
        Period.EndDate = ReadDate(MessageEndDate);

        while (IsDate1BeforeDate2(Period.EndDate, Period.StartDate))
        {
            cout << "\a\n\nStart Date cannot be after End Date ! \n\n" << Header;

            Period.StartDate = ReadDate(MessageStartDate);
            Period.EndDate = ReadDate(MessageEndDate);
        }

        return Period;
    }

    inline bool IsLeapYear(short Year)
    {
        return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    }

    inline short NumberOfDaysInYear(short Year)
    {
        return (IsLeapYear(Year)) ? 366 : 365;
    }

    inline int NumberOfHoursInYear(short Year)
    {
        return NumberOfDaysInYear(Year) * 24;
    }

    inline int NumberOfMinutesInYear(short Year)
    {
        return NumberOfHoursInYear(Year) * 60;
    }

    inline int NumberOfSecondsInYear(short Year)
    {
        return NumberOfMinutesInYear(Year) * 60;
    }

    inline short NumberOfDaysInMonth(short Year, short Month)
    {
        if (Month < 1 || Month>12)
        {
            return 0;
        }

        short NumbersOfDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


        return (Month == 2 && IsLeapYear(Year)) ? 29 : NumbersOfDay[Month];

    }

    inline int NumberOfHoursInMonth(short Year, short Month)
    {
        return NumberOfDaysInMonth(Year, Month) * 24;
    }

    inline int NumberOfMinutesInMonth(short Year, short Month)
    {
        return NumberOfHoursInMonth(Year, Month) * 60;
    }

    inline int NumberOfSecondsInMonth(short Year, short Month)
    {
        return NumberOfMinutesInMonth(Year, Month) * 60;
    }

    inline short DayIndex(short Year, short Month, short Day)
    {
        short a = (14 - Month) / 12, y = Year - a, m = Month + 12 * a - 2;

        return (Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    }

    inline short DayIndex(sDate Date)
    {
        return DayIndex(Date.Year, Date.Month, Date.Day);
    }

    inline string GetDayName(short ThisDayIndex)
    {
        string DaysName[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Sutarurday" };

        return DaysName[ThisDayIndex];
    }

    inline string GetMonthName(short ThisMonthIndex)
    {
        string MonthNames[13] = { "","Jan", "Fib", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dic" };

        return MonthNames[ThisMonthIndex];
    }

    inline bool IsLastDayInMonth(sDate Date)
    {
        return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
    }

    inline bool IsLastMonthInYear(sDate Date)
    {
        return Date.Month == 12;
    }

    inline bool IsFirstDayInMonth(sDate Date)
    {
        return Date.Day == 1;
    }

    inline bool IsFirstMonthInYear(sDate Date)
    {
        return Date.Month == 1;
    }

    inline bool IsEqualDate(sDate Date1, sDate Date2)
    {
        return (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day);
    }

    inline bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
    {

        if (Date1.Year <= Date2.Year)
        {
            if (Date1.Year == Date2.Year)
            {
                if (Date1.Month == Date2.Month)
                {
                    return Date1.Day < Date2.Day;
                }
                else if (Date1.Month < Date2.Month)
                {
                    return true;
                }

            }
            else
            {
                return true;
            }
        }

        return false;
    }

    inline bool IsDate1AfterDate2(sDate Date1, sDate Date2)
    {
        return IsDate1BeforeDate2(Date2, Date1);
    }

    inline int DayOrderInYear(sDate Date)
    {
        int Sum = 0;

        for (short i = 1; i < Date.Month; i++)
        {
            Sum += NumberOfDaysInMonth(Date.Year, i);
        }

        return Sum + Date.Day;

    }

    inline bool IsEndOfWeek(sDate Date, bool IsArabCountry = true)
    {
        short ThisDayIndex = DayIndex(Date);

        return IsArabCountry ? ThisDayIndex == 6 : ThisDayIndex == 0;
    }

    inline bool IsWeekEnd(sDate Date, bool IsArabeCountry = true)
    {
        short ThisDayIndex = DayIndex(Date);

        return IsArabeCountry ? ThisDayIndex > 4 : ThisDayIndex == 0 || ThisDayIndex == 6;
    }

    inline bool IsBusinessDay(sDate Date, bool IsArabeCountry = true)
    {
        return !IsWeekEnd(Date, IsArabeCountry);
    }

    inline bool IsEndOfWeek(short ThisDayIndex, bool IsArabCountry = true)
    {
        return IsArabCountry ? ThisDayIndex == 6 : ThisDayIndex == 0;
    }

    inline bool IsWeekEnd(short ThisDayIndex, bool IsArabeCountry = true)
    {

        return IsArabeCountry ? ThisDayIndex > 4 : ThisDayIndex == 0 || ThisDayIndex == 6;
    }

    inline bool IsBusinessDay(short ThisDayIndex, bool IsArabeCountry = true)
    {
        return !IsWeekEnd(ThisDayIndex, IsArabeCountry);
    }

    inline short DaysUntilTheEndOfYear(sDate Date)
    {
        return NumberOfDaysInYear(Date.Year) - DayOrderInYear(Date);
    }

    inline short DaysUntilTheEndOfMonth(sDate Date)
    {
        return NumberOfDaysInMonth(Date.Year, Date.Month) - Date.Day;
    }

    inline int DaysUntilTheEndOfWeek(sDate Date, bool IsArabeCountry = true)
    {
        short ThisDayIndex = DayIndex(Date);

        return IsArabeCountry ? 7 - (ThisDayIndex + 1) : (++ThisDayIndex > 2) ? 9 - ThisDayIndex : 2 - ThisDayIndex;
    }

    inline sDate DateFromDayOrderInYear(short Year, int DayOrderInYear)
    {
        sDate Date;

        Date.Year = Year;

        short NumberOfDayInMonth;

        for (short i = 1; i <= 12; i++)
        {
            NumberOfDayInMonth = NumberOfDaysInMonth(Year, i);

            if (DayOrderInYear <= NumberOfDayInMonth)
            {
                Date.Month = i;
                Date.Day = DayOrderInYear;
                i = 13;
            }

            DayOrderInYear -= NumberOfDayInMonth;
        }

        return Date;
    }

    inline int CalculateDiffrenceFromTowDates(sDate Date1, sDate Date2, bool IncludingLastDay2 = false)
    {
        bool IsDate1AfterDate1 = !IsDate1BeforeDate2(Date1, Date2);

        if (IsDate1AfterDate1)
        {
            sDate Temp = Date2;

            Date2 = Date1;
            Date1 = Temp;
        }


        int Sum = DayOrderInYear(Date2) - DayOrderInYear(Date1);

        while (Date1.Year < Date2.Year)
        {
            Sum += NumberOfDaysInYear(Date1.Year++);
        }


        return (IncludingLastDay2) ? ((IsDate1AfterDate1) ? (-1) * Sum - 1 : ++Sum) : ((IsDate1AfterDate1) ? (-1) * Sum : Sum);
    }

    inline sDate GetTodayDate()
    {
        sDate TodayDate;

        time_t t = time(0);

        tm* Time = localtime(&t);

        TodayDate.Year = Time->tm_year + 1900;
        TodayDate.Month = Time->tm_mon + 1;
        TodayDate.Day = Time->tm_mday;

        return TodayDate;
    }

    inline void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    inline sDate IncreaseDateByOneDay(sDate Date)
    {
        if (IsLastDayInMonth(Date))
        {
            if (IsLastMonthInYear(Date))
            {
                Date.Year++;
                Date.Month = 1;
                Date.Day = 1;
            }
            else
            {
                Date.Month++;
                Date.Day = 1;
            }
        }
        else
        {
            Date.Day++;
        }

        return Date;
    }

    inline sDate IncreaseDateByXDay(sDate Date, int Days)
    {
        Days += DayOrderInYear(Date);
        Date.Day = 1;
        Date.Month = 1;

        int DaysOfYear = NumberOfDaysInYear(Date.Year), DaysOfMonth = 31;


        while (Days >= DaysOfYear)
        {
            Days -= DaysOfYear;
            DaysOfYear = NumberOfDaysInYear(++Date.Year);

        }

        while (Days > DaysOfMonth)
        {
            Days -= DaysOfMonth;
            DaysOfMonth = NumberOfDaysInMonth(Date.Year, ++Date.Month);
        }

        Date.Day = Days;

        return Date;
    }

    inline sDate IncreaseDateByOneWeek(sDate Date)
    {
        return IncreaseDateByXDay(Date, 7);
    }

    inline sDate IncreaseDateByXWeek(sDate Date, int Weeks)
    {
        return IncreaseDateByXDay(Date, 7 * Weeks);
    }

    inline sDate IncreaseDateByOneMonth(sDate Date)
    {
        if (++Date.Month == 13)
        {
            Date.Month = 1;
            Date.Year++;
        }

        short DaysInThisMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

        Date.Day = (Date.Day > DaysInThisMonth) ? DaysInThisMonth : Date.Day;

        return Date;
    }

    inline sDate IncreaseDateByXMonth(sDate Date, short Months)
    {
        for (short i = 1; i <= Months; i++)
        {
            Date = IncreaseDateByOneMonth(Date);
        }

        return Date;
    }

    inline sDate IncreaseDateByOneYear(sDate Date)
    {
        Date.Year++;

        return Date;
    }

    inline sDate IncreaseDateByXYear(sDate Date, short Years)
    {
        for (short i = 1; i <= Years; i++)
        {
            Date = IncreaseDateByOneYear(Date);
        }

        return Date;
    }

    inline sDate IncreaseDateByXYearFaster(sDate Date, short Years)
    {
        Date.Year += Years;

        return Date;
    }

    inline sDate IncreaseDateByOneDecade(sDate Date)
    {
        return IncreaseDateByXYearFaster(Date, 10);
    }

    inline sDate IncreaseDateByXDecade(sDate Date, short Decades)
    {
        for (short i = 1; i <= Decades; i++)
        {
            Date = IncreaseDateByOneDecade(Date);
        }

        return Date;
    }

    inline sDate IncreaseDateByXDecadeFaster(sDate Date, short Decades)
    {
        Date.Year += Decades * 10;

        return Date;
    }

    inline sDate IncreaseDateByOneCentury(sDate Date)
    {
        Date.Year += 100;

        return Date;
    }

    inline sDate IncreaseDateByOneMillennium(sDate Date)
    {
        Date.Year += 1000;

        return Date;
    }

    inline sDate DecreaseDateByOneDay(sDate Date)
    {
        if (IsFirstDayInMonth(Date))
        {
            if (IsFirstMonthInYear(Date))
            {
                Date.Year--;
                Date.Month = 12;
                Date.Day = 31;
            }
            else
            {
                Date.Day = NumberOfDaysInMonth(Date.Year, --Date.Month);
            }
        }
        else
        {
            Date.Day--;
        }

        return Date;
    }

    inline sDate DecreaseDateByXDay(sDate Date, int Days)
    {
        Days += DaysUntilTheEndOfYear(Date);
        Date.Day = 31;
        Date.Month = 12;

        int DaysOfYear = NumberOfDaysInYear(Date.Year), DaysOfMonth = 31;


        while (Days >= DaysOfYear)
        {
            Days -= DaysOfYear;
            DaysOfYear = NumberOfDaysInYear(--Date.Year);

        }

        while (Days >= DaysOfMonth)
        {
            Days -= DaysOfMonth;

            DaysOfMonth = NumberOfDaysInMonth(Date.Year, --Date.Month);
        }

        Date.Day = DaysOfMonth - Days;

        return Date;
    }

    inline sDate DecreaseDateByOneWeek(sDate Date)
    {
        return DecreaseDateByXDay(Date, 7);
    }

    inline sDate DecreaseDateByXWeek(sDate Date, int Weeks)
    {
        return DecreaseDateByXDay(Date, 7 * Weeks);
    }

    inline sDate DecreaseDateByOneMonth(sDate Date)
    {
        if (--Date.Month == 0)
        {
            Date.Month = 12;
            Date.Year--;
        }


        short DaysInThisMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

        Date.Day = (Date.Day > DaysInThisMonth) ? DaysInThisMonth : Date.Day;

        return Date;
    }

    inline sDate DecreaseDateByXMonth(sDate Date, short Months)
    {
        for (short i = 1; i <= Months; i++)
        {
            Date = DecreaseDateByOneMonth(Date);
        }

        return Date;
    }

    inline sDate DecreaseDateByOneYear(sDate Date)
    {
        Date.Year--;

        return Date;
    }

    inline sDate DecreaseDateByXYear(sDate Date, short Years)
    {
        for (short i = 1; i <= Years; i++)
        {
            Date = DecreaseDateByOneYear(Date);
        }

        return Date;
    }

    inline sDate DecreaseDateByXYearFaster(sDate Date, short Years)
    {
        Date.Year -= Years;

        return Date;
    }

    inline sDate DecreaseDateByOneDecade(sDate Date)
    {
        return DecreaseDateByXYearFaster(Date, 10);
    }

    inline sDate DecreaseDateByXDecade(sDate Date, short Decades)
    {
        for (short i = 1; i <= Decades; i++)
        {
            Date = DecreaseDateByOneDecade(Date);
        }

        return Date;
    }

    inline sDate DecreaseDateByXDecadeFaster(sDate Date, short Decades)
    {
        Date.Year -= Decades * 10;

        return Date;
    }

    inline sDate DecreaseDateByOneCentury(sDate Date)
    {
        Date.Year -= 100;

        return Date;
    }

    inline sDate DecreaseDateByOneMillennium(sDate Date)
    {
        Date.Year -= 1000;

        return Date;
    }

    inline int GetActualVacationDays(sDate DateFrom, sDate DateTo, bool IsArabCountry = true)
    {
        int NumberOfDays = CalculateDiffrenceFromTowDates(DateFrom, DateTo);

        int ActualVacation = (NumberOfDays / 7) * 5;

        short ThisDayIndex = DayIndex(DateFrom);

        for (short i = NumberOfDays % 7; i >= 1; i--)
        {
            if (IsBusinessDay(ThisDayIndex, IsArabCountry))
            {
                ActualVacation++;
            }

            ThisDayIndex = (ThisDayIndex == 6) ? 0 : ThisDayIndex + 1;
        }

        return ActualVacation;
    }

    inline sDate GetDateByActualVacation(sDate DateFrom, int ActualVacation, bool AreWeekEndFriAndSat = true)
    {

        short NumberOfWeeks = ActualVacation / 5, ThisDayIndex = DayIndex(DateFrom);

        ActualVacation %= 5;

        DateFrom = IncreaseDateByXWeek(DateFrom, NumberOfWeeks);

        while (ActualVacation > 0 || IsWeekEnd(ThisDayIndex, AreWeekEndFriAndSat))
        {
            ActualVacation -= (IsBusinessDay(ThisDayIndex, AreWeekEndFriAndSat)) ? 1 : 0;

            DateFrom = IncreaseDateByXDay(DateFrom, 1);

            ThisDayIndex += (ThisDayIndex == 6) ? -6 : 1;
        }

        return DateFrom;

    }

    inline void Ordered2Periods(sPeriod& Period1, sPeriod& Period2)
    {
        if (IsDate1AfterDate2(Period1.StartDate, Period2.StartDate))
        {
            sPeriod Temp = Period1;

            Period1 = Period2;
            Period2 = Temp;
        }
    }

    inline bool IsOverlapPeriods(sPeriod Period1, sPeriod Period2)
    {
        //Ordered2Periods(Period1, Period2);

        return !IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) && !IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate);
    }

    inline int GetPeriodLengthInDays(sPeriod Period, bool IncludingEndDay = false)
    {
        return CalculateDiffrenceFromTowDates(Period.StartDate, Period.EndDate, IncludingEndDay);
    }

    inline bool IsDateWithinPeriod(sPeriod Period, sDate Date)
    {
        return !IsDate1BeforeDate2(Date, Period.StartDate) && !IsDate1AfterDate2(Date, Period.EndDate);
    }

    inline int CountOverlapDays(sPeriod Period1, sPeriod Period2)
    {
        if (IsOverlapPeriods(Period1, Period2))
        {
            sDate DateFrom = (IsDate1BeforeDate2(Period1.StartDate, Period2.StartDate)) ? Period2.StartDate : Period1.StartDate,
                DateTo = (IsDate1BeforeDate2(Period1.EndDate, Period2.EndDate)) ? Period1.EndDate : Period2.EndDate;

            return CalculateDiffrenceFromTowDates(DateFrom, DateTo);
        }

        return 0;
    }

    inline bool IsValidatStringDate(string DateString)
    {
        vector <string> vDateString = MyStringProcess::SplitStringToVector(DateString, "/");

        return vDateString.size() == 3 && MyStringProcess::IsANumber(vDateString[0]) &&
            MyStringProcess::IsANumber(vDateString[1]) && MyStringProcess::IsANumber(vDateString[2]);

    }

    inline sDate StringToDate(string DateString)
    {
        sDate Date;

        vector <string> vDateString = MyStringProcess::SplitStringToVector(DateString, "/");

        Date.Day = (short)stoi(vDateString[0]);

        Date.Month = (short)stoi(vDateString[1]);

        Date.Year = (short)stoi(vDateString[2]);

        return Date;
    }

    inline string ReadDateString(string MessageToUser)
    {
        string DateString = MyInput::ReadString(MessageToUser);

        while (!IsValidatStringDate(DateString) || !IsValideDate(StringToDate(DateString)))
        {
            cout << "\a\n\n" << DateString << " don\'t Exist dans Gregorien Calendar !" << endl << endl;
            DateString = MyInput::ReadString(MessageToUser);
        }

        return DateString;
    }

    inline string DateToString(sDate Date, string  Format = "dd/mm/yyyy")
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

}