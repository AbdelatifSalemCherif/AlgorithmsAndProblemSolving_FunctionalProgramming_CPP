/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>
#include<fstream>

#include"MyInput.h";
#include"MyStringProcess.h";

using namespace std;

namespace FindClientByAccountNumber
{
    struct stBankClientRecord
    {
        string AccountNumber;
        string PinCode;
        string Name;
        string Phone;
        float AccountBalance = 0;
    };

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

    vector <stBankClientRecord> LoadClients(string FileName, string Separator = " ")
    {
        vector <stBankClientRecord> Clients;

        fstream File;

        File.open(FileName, ios::in);

        if (File.is_open())
        {
            string Line = "";

            stBankClientRecord Client;

            while (getline(File, Line))
            {
                if (Line != "" && Line != " ")
                {
                    Client = ConvertLineToRecord(Line, Separator);

                    Clients.push_back(Client);
                }
            }

            File.close();

        }

        return Clients;
    }

    bool FindClient(vector <stBankClientRecord>& vClients, string AccountNumber, stBankClientRecord& Client)
    {
        for (stBankClientRecord& C : vClients)
        {
            if (C.AccountNumber == AccountNumber)
            {
                Client = C;

                return true;
            }
        }

        return false;
    }

    void PrintBankClientRecord(stBankClientRecord& ClientData, string Header = "\nThe Following is extracted client record :\n")
    {
        cout << Header;

        cout << "Account Number : " << ClientData.AccountNumber << endl;
        cout << "Pin code       : " << ClientData.PinCode << endl;
        cout << "Name           : " << ClientData.Name << endl;
        cout << "Phone          : " << ClientData.Phone << endl;
        cout << "Acount Balance : " << ClientData.AccountBalance << endl;

    }

    void Run()
    {
        string FileName = "DataTest/Clients.txt";

        vector <stBankClientRecord> vClients = LoadClients(FileName, "#//#");

        string AccountNumber = MyInput::ReadString("Please enter account number ? ");

        stBankClientRecord Client;



        if (FindClient(vClients, AccountNumber, Client))
        {
            PrintBankClientRecord(Client, "\nThe following are the client details :\n");
        }
        else
        {
            cout << "Client with Account Number (" << AccountNumber << ") Not Found !" << endl;
        }

    }
}