/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 27, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>
#include<fstream>

#include"MyInput.h";
#include"MyStringProcess.h";


using namespace std;

namespace ShowAllClients
{
    struct stBankClientRecord
    {
        string AccountNumber;
        string PinCode;
        string Name;
        string Phone;
        float AccountBalance = 0;
    };

    stBankClientRecord ReadBankClientRecord(string Header = "\nPlease enter client data : ")
    {
        stBankClientRecord Client;

        cout << Header;

        Client.AccountNumber = MyInput::ReadString("\nEnter Acoount Number ? ");
        Client.PinCode = MyInput::ReadString("\nEnter Pin Code ? ");
        Client.Name = MyInput::ReadString("\nEnter Name ? ");
        Client.Phone = MyInput::ReadString("\nEnter Phone ? ");
        Client.AccountBalance = MyInput::ReadNumber((float)0, "\nEnter Account Balance ? ");


        return Client;
    }

    stBankClientRecord ConvertLineToRecord(string Client, string Separator = " ")
    {
        stBankClientRecord ClientData;

        vector <string> vClientData = MyStringProcess::SplitStringToVector(Client, Separator);

        short SeparatorPosition = Client.find(Separator);

        ClientData.AccountNumber = vClientData[0];

        ClientData.PinCode = vClientData[1];

        ClientData.Name = vClientData[2];

        ClientData.Phone = vClientData[3];

        ClientData.AccountBalance = stof(vClientData[4]);


        return ClientData;
    }

    vector <string> ReadFileLines(string FileName)
    {
        vector <string> vLines;

        fstream File;

        File.open(FileName, ios::in);

        if (File.is_open())
        {
            string Line = "";

            while (getline(File, Line))
            {

                if (Line != "" && Line != " ")
                {
                    vLines.push_back(Line);
                }
            }

            File.close();

        }

        return vLines;
    }

    vector <stBankClientRecord> SplitLinesToVectorClients(vector <string>& vClientsLines, string Separator = " ")
    {
        vector <stBankClientRecord> vClients;

        for (short i = 0;i < vClientsLines.size();i++)
        {
            vClients.push_back(ConvertLineToRecord(vClientsLines[i], Separator));
        }

        return vClients;
    }

    string ManipilatorSpaces(string Word, short TotalLength)
    {
        short SpacesLength = TotalLength - Word.length();

        for (short i = 0; i < SpacesLength; i++)
        {
            Word += " ";
        }

        return Word;
    }

    void PrintClients(vector <stBankClientRecord>& vClients)
    {
        cout << "\t\t\tClient List (" << vClients.size() << ") Client(s)" << endl;

        cout << "------------------------------------------------------------------------------------------------" << endl;

        cout << ManipilatorSpaces("|Account Number", 15) << ManipilatorSpaces("|Pin Code", 9) << ManipilatorSpaces("|Client Name", 25)
            << ManipilatorSpaces("|Phone", 11) << ManipilatorSpaces("|Account Balance", 12) << endl;

        cout << "------------------------------------------------------------------------------------------------" << endl;

        for (stBankClientRecord& i : vClients)
        {
            cout << ManipilatorSpaces("|" + i.AccountNumber, 15) << ManipilatorSpaces("|" + i.PinCode, 9)
                << ManipilatorSpaces("|" + i.Name, 25) << ManipilatorSpaces("|" + i.Phone, 11)
                << ManipilatorSpaces("|" + to_string(i.AccountBalance), 12) << endl;
        }

        cout << "------------------------------------------------------------------------------------------------" << endl;
    }

    void Run()
    {
        string FileName = "DataTest/Clients.txt";

        vector <string> vClientsLines = ReadFileLines(FileName);

        vector <stBankClientRecord> vClients = SplitLinesToVectorClients(vClientsLines, "#//#");

        PrintClients(vClients);

    }
}