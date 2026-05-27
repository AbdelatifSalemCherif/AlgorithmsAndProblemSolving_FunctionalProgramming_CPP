/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 25 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace IncreaseDate
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

    bool IsLastDayInMonth(sDate Date)
    {
        return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
    }

    bool IsLastMonthInYear(sDate Date)
    {
        return Date.Month == 12;
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

    bool IsLessDate(sDate Date1, sDate Date2)
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

    int CalculateDiffrenceFromTowDates(sDate Date1, sDate Date2, bool IncludingLastDay2 = false)
    {
        bool IsDate1AfterDate1 = !IsLessDate(Date1, Date2);

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

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    sDate IncreaseDateByOneDay(sDate Date)
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

    sDate IncreaseDateByXDay(sDate Date, int Days)
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

            if (IsLastMonthInYear(Date))
            {
                Date.Month = 0;
            }

            DaysOfMonth = NumberOfDaysInMonth(Date.Year, ++Date.Month);
        }

        Date.Day = Days;

        return Date;
    }

    sDate IncreaseDateByOneWeek(sDate Date)
    {
        return IncreaseDateByXDay(Date, 7);
    }

    sDate IncreaseDateByXWeek(sDate Date, int Weeks)
    {
        return IncreaseDateByXDay(Date, 7 * Weeks);
    }

    sDate IncreaseDateByOneMonth(sDate Date)
    {
        return IncreaseDateByXDay(Date, NumberOfDaysInMonth(Date.Year, Date.Month));
    }

    sDate IncreaseDateByXMonth(sDate Date, short Months)
    {
        for (short i = 1; i <= Months; i++)
        {
            Date = IncreaseDateByOneMonth(Date);
        }

        return Date;
    }

    sDate IncreaseDateByOneYear(sDate Date)
    {
        Date.Year++;

        return Date;
    }

    sDate IncreaseDateByXYear(sDate Date, short Years)
    {
        for (short i = 1; i <= Years; i++)
        {
            Date = IncreaseDateByOneYear(Date);
        }

        return Date;
    }

    sDate IncreaseDateByXYearFaster(sDate Date, short Years)
    {
        Date.Year += Years;

        return Date;
    }

    sDate IncreaseDateByOneDecade(sDate Date)
    {
        return IncreaseDateByXYearFaster(Date, 10);
    }

    sDate IncreaseDateByXDecade(sDate Date, short Decades)
    {
        for (short i = 1; i <= Decades; i++)
        {
            Date = IncreaseDateByOneDecade(Date);
        }

        return Date;
    }

    sDate IncreaseDateByXDecadeFaster(sDate Date, short Decades)
    {
        Date.Year += Decades * 10;

        return Date;
    }

    sDate IncreaseDateByOneCentury(sDate Date)
    {
        Date.Year += 100;

        return Date;
    }

    sDate IncreaseDateByOneMillennium(sDate Date)
    {
        Date.Year += 1000;

        return Date;
    }

    void Run()
    {
        sDate Date = ReadDate("Please enter a Date :\n");

        cout << endl << endl << "Date after :" << endl << endl;

        Date = IncreaseDateByOneDay(Date);
        PrintDate("01.Adding one day is : ", Date, "\n");

        Date = IncreaseDateByXDay(Date, 10);
        PrintDate("02.Adding 10 days is : ", Date, "\n");

        Date = IncreaseDateByOneWeek(Date);
        PrintDate("03.Adding one week is : ", Date, "\n");

        Date = IncreaseDateByXWeek(Date, 10);
        PrintDate("04.Adding 10 weeks is : ", Date, "\n");

        Date = IncreaseDateByOneMonth(Date);
        PrintDate("05.Adding one Month is : ", Date, "\n");

        Date = IncreaseDateByXMonth(Date, 5);
        PrintDate("06.Adding 5 Months is : ", Date, "\n");

        Date = IncreaseDateByOneYear(Date);
        PrintDate("07.Adding one Year is : ", Date, "\n");

        Date = IncreaseDateByXYear(Date, 10);
        PrintDate("08.Adding 10 Years is : ", Date, "\n");

        Date = IncreaseDateByXYearFaster(Date, 10);
        PrintDate("09.Adding 10 Years (faster) is : ", Date, "\n");

        Date = IncreaseDateByOneDecade(Date);
        PrintDate("10.Adding one Decade is : ", Date, "\n");

        Date = IncreaseDateByXDecade(Date, 10);
        PrintDate("11.Adding 10 Decades is : ", Date, "\n");

        Date = IncreaseDateByXDecadeFaster(Date, 10);
        PrintDate("12.Adding 10 Decades (faster) is : ", Date, "\n");

        Date = IncreaseDateByOneCentury(Date);
        PrintDate("13.Adding one Century is : ", Date, "\n");

        Date = IncreaseDateByOneMillennium(Date);
        PrintDate("14.Adding one Millennium is : ", Date, "\n");

    }
}