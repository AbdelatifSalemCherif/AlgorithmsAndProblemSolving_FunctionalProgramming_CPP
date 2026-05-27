/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May 20, 2026
* Total Functions       : 24 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace DecreaseDate
{
    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    sDate ReadDate(string Header = "")
    {
        sDate Date;

        cout << Header;

        Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
        Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");

        return Date;
    }

    bool IsLeapYear(short Year)
    {
        return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    }

    short NumberOfDaysInYear(short Year)
    {
        return (IsLeapYear(Year)) ? 366 : 365;
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

    bool IsFirstDayInMonth(sDate Date)
    {
        return Date.Day == 1;
    }

    bool IsFirstMonthInYear(sDate Date)
    {
        return Date.Month == 1;
    }

    int DayOrderInYear(sDate Date)
    {
        int Sum = 0;

        for (short i = 1; i < Date.Month; i++)
        {
            Sum += NumberOfDaysInMonth(Date.Year, i);
        }

        return Sum + Date.Day;

    }

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    sDate DecreaseDateByOneDay(sDate Date)
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

    int WhoManyDaysToEndYear(sDate Date)
    {
        return NumberOfDaysInYear(Date.Year) - DayOrderInYear(Date);
    }

    sDate DecreaseDateByXDay(sDate Date, int Days)
    {
        Days += WhoManyDaysToEndYear(Date);
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

    sDate DecreaseDateByOneWeek(sDate Date)
    {
        return DecreaseDateByXDay(Date, 7);
    }

    sDate DecreaseDateByXWeek(sDate Date, int Weeks)
    {
        return DecreaseDateByXDay(Date, 7 * Weeks);
    }

    sDate DecreaseDateByOneMonth(sDate Date)
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

    sDate DecreaseDateByXMonth(sDate Date, short Months)
    {
        for (short i = 1; i <= Months; i++)
        {
            Date = DecreaseDateByOneMonth(Date);
        }

        return Date;
    }

    sDate DecreaseDateByOneYear(sDate Date)
    {
        Date.Year--;

        return Date;
    }

    sDate DecreaseDateByXYear(sDate Date, short Years)
    {
        for (short i = 1; i <= Years; i++)
        {
            Date = DecreaseDateByOneYear(Date);
        }

        return Date;
    }

    sDate DecreaseDateByXYearFaster(sDate Date, short Years)
    {
        Date.Year -= Years;

        return Date;
    }

    sDate DecreaseDateByOneDecade(sDate Date)
    {
        return DecreaseDateByXYearFaster(Date, 10);
    }

    sDate DecreaseDateByXDecade(sDate Date, short Decades)
    {
        for (short i = 1; i <= Decades; i++)
        {
            Date = DecreaseDateByOneDecade(Date);
        }

        return Date;
    }

    sDate DecreaseDateByXDecadeFaster(sDate Date, short Decades)
    {
        Date.Year -= Decades * 10;

        return Date;
    }

    sDate DecreaseDateByOneCentury(sDate Date)
    {
        Date.Year -= 100;

        return Date;
    }

    sDate DecreaseDateByOneMillennium(sDate Date)
    {
        Date.Year -= 1000;

        return Date;
    }

    void Run()
    {
        sDate Date = ReadDate("Please enter a Date :\n");

        cout << endl << endl << "Date after :" << endl << endl;

        Date = DecreaseDateByOneDay(Date);
        PrintDate("01.Subtracting one day is : ", Date, "\n");

        Date = DecreaseDateByXDay(Date, 10);
        PrintDate("02.Subtracting 10 days is : ", Date, "\n");

        Date = DecreaseDateByOneWeek(Date);
        PrintDate("03.Subtracting one week is : ", Date, "\n");

        Date = DecreaseDateByXWeek(Date, 10);
        PrintDate("04.Subtracting 10 weeks is : ", Date, "\n");

        Date = DecreaseDateByOneMonth(Date);
        PrintDate("05.Subtracting one Month is : ", Date, "\n");

        Date = DecreaseDateByXMonth(Date, 5);
        PrintDate("06.Subtracting 5 Months is : ", Date, "\n");

        Date = DecreaseDateByOneYear(Date);
        PrintDate("07.Subtracting one Year is : ", Date, "\n");

        Date = DecreaseDateByXYear(Date, 10);
        PrintDate("08.Subtracting 10 Years is : ", Date, "\n");

        Date = DecreaseDateByXYearFaster(Date, 10);
        PrintDate("09.Subtracting 10 Years (faster) is : ", Date, "\n");

        Date = DecreaseDateByOneDecade(Date);
        PrintDate("10.Subtracting one Decade is : ", Date, "\n");

        Date = DecreaseDateByXDecade(Date, 10);
        PrintDate("11.Subtracting 10 Decades is : ", Date, "\n");

        Date = DecreaseDateByXDecadeFaster(Date, 10);
        PrintDate("12.Subtracting 10 Decades (faster) is : ", Date, "\n");

        Date = DecreaseDateByOneCentury(Date);
        PrintDate("13.Subtracting one Century is : ", Date, "\n");

        Date = DecreaseDateByOneMillennium(Date);
        PrintDate("14.Subtracting one Millennium is : ", Date, "\n");

    }
}