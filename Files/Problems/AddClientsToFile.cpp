/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 26, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>
#include<fstream>

#include"MyInput.h";

using namespace std;

namespace AddClientsToFile
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

    string ConvertRecordToLine(stBankClientRecord& Client, string Separator = " ")
    {
        string ClientData = "";

        ClientData += Client.AccountNumber + Separator;
        ClientData += Client.PinCode + Separator;
        ClientData += Client.Name + Separator;
        ClientData += Client.Phone + Separator;
        ClientData += to_string(Client.AccountBalance);

        return ClientData;
    }

    void AddRecordToFile(string FileName, string Record)
    {
        fstream File;

        File.open(FileName, ios::out | ios::app);

        if (File.is_open())
        {
            File << Record << "\n";

            File.close();
        }

    }

    void Run()
    {
        string FileName = "Level3/_04_Files/Data/Clients.txt";

        stBankClientRecord Client;

        do {
            Client = ReadBankClientRecord("\n\nAdding new client :\n");

            AddRecordToFile(FileName, ConvertRecordToLine(Client, "#//#"));

        } while (MyInput::ReadYesOrNo("Client Added Successfully, do you want to add more clients ? (yes or no) ? ", true));

    }
}