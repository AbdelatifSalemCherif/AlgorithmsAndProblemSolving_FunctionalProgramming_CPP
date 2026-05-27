/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 22, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 30 Functions
==================================================================
*/

#pragma once

#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include"MyCharProcess.h"

using namespace std;

namespace MyStringProcess
{
    enum enLeftRightMiddle { Left, Right, Middle };

    inline short CountAllUpperCase(string Phrase)
    {
        short UpperCase = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (isupper(Phrase[i]))
            {
                UpperCase++;
            }
        }

        return UpperCase;
    }

    inline short CountAllLowerCase(string Phrase)
    {
        short LowerCase = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (islower(Phrase[i]))
            {
                LowerCase++;
            }
        }

        return LowerCase;
    }

    inline short CountAllVowels(string Phrase)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (MyCharProcess::CheckVowelLetter(Phrase[i]))
            {
                Counter++;
            }
        }

        return Counter;
    }

    inline short CountAllLetters(string Phrase, char Letter, bool MatchCase = true)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (MatchCase)
            {
                if (Phrase[i] == Letter)
                {
                    Counter++;
                }
            }
            else
            {
                if (toupper(Phrase[i]) == toupper(Letter))
                {
                    Counter++;
                }
            }
        }

        return Counter;
    }

    inline short CountAllWords(string Phrase, string Separator = " ")
    {
        short Counter = 0, SeparatorPosition = Phrase.find(Separator);

        string Word = Phrase.substr(0, SeparatorPosition);

        while (SeparatorPosition != Phrase.npos)
        {

            if (Word != Separator && Word != "")
            {
                Counter++;
            }

            Phrase.erase(0, SeparatorPosition + Separator.length());

            SeparatorPosition = Phrase.find(Separator);

            Word = Phrase.substr(0, SeparatorPosition);
        }



        return (Word != Separator && Word != "") ? Counter + 1 : Counter;
    }











    inline void SplitStringToVector(string Phrase, vector <string>& vPhrase, string Separitor = " ")
    {
        vPhrase.clear();

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


    }

    inline vector<string> SplitStringToVector(string Phrase, string Separitor = " ")
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

    inline string JoinString(vector <string>& vPhrase, string Separator = " ")
    {
        string Phrase = "";

        for (string& i : vPhrase)
        {
            Phrase.append(i + Separator);
        }

        //Phrase.erase(Phrase.length() - Separator.length(), Separator.length());

        return Phrase.substr(0, Phrase.length() - Separator.length());
    }

    inline string JoinString(string ArrPhrase[], short Length, string Separator = " ")
    {
        string Phrase = "";

        for (short i = 0; i < Length; i++)
        {
            Phrase += ArrPhrase[i] + Separator;
        }

        //Phrase.erase(Phrase.length() - Separator.length(), Separator.length());

        return Phrase.substr(0, Phrase.length() - Separator.length());
    }










    inline string ToLowerAllPhrase(string Phrase)
    {

        for (short i = 0; i < Phrase.length(); i++)
        {
            Phrase[i] = tolower(Phrase[i]);
        }

        return Phrase;
    }

    inline string ToUpperAllPhrase(string Phrase)
    {

        for (short i = 0; i < Phrase.length(); i++)
        {
            Phrase[i] = toupper(Phrase[i]);
        }

        return Phrase;
    }

    inline string ToUpperAllFirstLetters(string Phrase)
    {
        Phrase[0] = toupper(Phrase[0]);

        for (short i = 1; i < Phrase.length(); i++)
        {
            if (Phrase[i] == ' ')
            {
                Phrase[i + 1] = toupper(Phrase[i + 1]);
                i++;
            }
        }

        return Phrase;
    }

    inline string ToLowerAllFirstLetters(string Phrase)
    {
        Phrase[0] = tolower(Phrase[0]);

        for (short i = 1; i < Phrase.length(); i++)
        {
            if (Phrase[i] == ' ')
            {
                Phrase[i + 1] = tolower(Phrase[i + 1]);
                i++;
            }
        }

        return Phrase;
    }

    inline string ReverseString(string Phrase)
    {
        string Copy = Phrase;
        short Length = Phrase.length();

        for (short i = 0; i < Length; i++)
        {
            Phrase[i] = Copy[Length - 1 - i];
        }

        return Phrase;
    }

    inline string TrimLeft(string Phrase, string Delim = " ")
    {
        short DelimPosition = Phrase.find(Delim);


        while (DelimPosition == 0)
        {
            Phrase.erase(0, Delim.length());

            DelimPosition = Phrase.find(Delim);
        }




        return Phrase;
    }

    inline string TrimRight(string Phrase, string Delim = " ")
    {

        Phrase = TrimLeft(ReverseString(Phrase), ReverseString(Delim));

        return ReverseString(Phrase);
    }

    inline string Trim(string Phrase, string Delim = " ")
    {
        return TrimLeft(TrimRight(Phrase, Delim), Delim);
    }


    inline string ReverseWordsOrder(string Phrase, string Separator = " ")
    {
        vector <string> vPhrase;

        vPhrase = SplitStringToVector(Phrase, Separator);

        vector <string>::iterator WordPointer = vPhrase.end();

        Phrase.clear();

        while (WordPointer != vPhrase.begin())
        {
            WordPointer--;

            Phrase.append(*WordPointer + Separator);
        }


        return Phrase.substr(0, Phrase.length() - Separator.length());
    }

    //string ReverseWordsOrder(string Phrase, string Separator = " ")
//{
//    string PhraseReversed = MyStringProcess::ReverseString(Phrase), SeparatorReversed = MyStringProcess::ReverseString(Separator);
//
//    Phrase = "";
//
//    short SeparatorPosition = PhraseReversed.find(SeparatorReversed);
//    string Word = PhraseReversed.substr(0, SeparatorPosition);
//
//    while (SeparatorPosition != PhraseReversed.npos)
//    {
//        if (Word != SeparatorReversed && Word != "")
//        {
//            Phrase += MyStringProcess::ReverseString(Word) + Separator;
//        }
//
//        PhraseReversed.erase(0, SeparatorPosition + SeparatorReversed.length());
//
//        SeparatorPosition = PhraseReversed.find(SeparatorReversed);
//
//        Word = PhraseReversed.substr(0, SeparatorPosition);
//    }
//    
//    return (Word != SeparatorReversed && Word != "") ? 
//        Phrase + MyStringProcess::ReverseString(Word) : Phrase.substr(0, Phrase.length() - Separator.length());
//}

    inline string Erase(string Phrase, short From, short WordLength)
    {
        string Word = "";

        if (Phrase == "")
        {
            return Word;
        }

        short To = (From + WordLength >= Phrase.length()) ? Phrase.length() : From + WordLength;


        for (short i = 0; i < From; i++)
        {
            Word += Phrase[i];
        }

        for (short i = To; i < Phrase.length(); i++)
        {
            Word += Phrase[i];
        }


        return Word;
    }

    inline string Substr(string Phrase, short From, short WordLength)
    {
        string Word = "";

        if (Phrase == "")
            return Word;

        short To = (From + WordLength >= Phrase.length()) ? Phrase.length() : From + WordLength;


        for (short i = From; i < To; i++)
        {
            Word += Phrase[i];
        }

        return Word;

    }

    inline string ReplaceWord(string Phrase, string NewWord, short LastWordPosition, short LastWordLength)
    {
        short& From = LastWordPosition;
        short To = From + LastWordLength;

        //return Substr(Phrase, 0, From) + NewWord + Substr(Phrase, To, Phrase.length() - To);

        return Phrase.substr(0, From) + NewWord + Phrase.substr(To, Phrase.length() - To);
    }

    inline short Find(string Phrase, string Word, bool MuchCase = true)
    {

        if (MuchCase)
        {
            for (short i = 0; i < Phrase.length() - Word.length() + 1; i++)
            {

                if (Word == Substr(Phrase, i, Word.length()))
                {
                    return i;
                }

            }
        }

        else
        {

            string PhraseUpperCase = ToUpperAllPhrase(Phrase), WordUpperCase = ToUpperAllPhrase(Word);

            for (short i = 0; i < Phrase.length() - Word.length() + 1; i++)
            {

                if (WordUpperCase == Substr(PhraseUpperCase, i, Word.length()))
                {
                    return i;
                }

            }
        }

        return -1;
    }

    inline string ReplaceAllWords_UsingOwnFind(string Phrase, string LastWord, string NewWord, bool MuchCase = true)
    {

        short LastWordPosition = Find(Phrase, LastWord, MuchCase), LastWordLength = LastWord.length();

        while (LastWordPosition != Phrase.npos)
        {
            //Phrase = Phrase.replace(LastWordPosition, LastWordLength, NewWord);

            Phrase = ReplaceWord(Phrase, NewWord, LastWordPosition, LastWordLength);

            LastWordPosition = Find(Phrase, LastWord, MuchCase);
        }


        return Phrase;
    }

    inline string ReplaceAllWords_UsingSplitVector(string Phrase, string LastWord, string NewWord, bool MuchCase = true, string Separator = " ")
    {
        vector <string> vPhrase = SplitStringToVector(Phrase, Separator);

        if (MuchCase)
        {
            for (string& i : vPhrase)
            {
                if (i == LastWord)
                {
                    i = NewWord;
                }
            }
        }
        else
        {
            LastWord = ToUpperAllPhrase(LastWord);

            for (string& i : vPhrase)
            {
                if (ToUpperAllPhrase(i) == LastWord)
                {
                    i = NewWord;
                }
            }
        }



        return JoinString(vPhrase, Separator);
    }

    inline string DeleteAllPunctuations(string Phrase)
    {
        string PhraseWithoutPuctuations = "";

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (!ispunct(Phrase[i]))
            {
                PhraseWithoutPuctuations += Phrase[i];
            }
        }

        return PhraseWithoutPuctuations;
    }

    inline string ReapetWord(string Word, short NumberOfRepetition)
    {
        string Phrase;

        Phrase = "";

        for (short i = 1; i <= NumberOfRepetition; i++)
        {
            Phrase += Word;
        }

        return Phrase;
    }

    inline string FillWordSideWithSameCaracter(string Word, char Caracter, short TotalLength, enLeftRightMiddle WordStayIn = Left)
    {
        string Phrase = Word;

        switch (WordStayIn)
        {
        case Left:
            for (short i = TotalLength - Word.length(); i > 0; i--)
            {
                Phrase += Caracter;
            }

            return Phrase;
        case Right:
            for (short i = TotalLength - Word.length(); i > 0; i--)
            {
                Phrase = Caracter + Phrase;
            }

            return Phrase;

        default:
            for (short i = (TotalLength - Word.length()) / 2; i > 0; i--)
            {
                Phrase = Caracter + Phrase + Caracter;
            }

            return Phrase;
        }
    }









    inline void PrintAllVowels(string Phrase)
    {
        short Counter = 0;

        for (short i = 0; i < Phrase.length(); i++)
        {
            if (MyCharProcess::CheckVowelLetter(Phrase[i]))
            {
                cout << Phrase[i] << "   ";
            }
        }
    }

    inline void PrintAllWords(string Phrase, string Separator = " ")
    {
        short SeparatorPosition = Phrase.find(Separator);

        string Word = Phrase.substr(0, SeparatorPosition);

        while (SeparatorPosition != Phrase.npos)
        {

            if (Word != Separator && Word != "")
            {
                cout << Word << endl;
            }

            Phrase.erase(0, SeparatorPosition + Separator.length());


            SeparatorPosition = Phrase.find(Separator);

            Word = Phrase.substr(0, SeparatorPosition);
        }

        if (Word != Separator && Word != "")
        {
            cout << Word << endl;
        }

    }




    inline bool IsANumber(string Number)
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





}