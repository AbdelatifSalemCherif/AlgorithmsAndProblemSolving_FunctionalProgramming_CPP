/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 29, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 9 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>
#include<fstream>

#include"MyInput.h";
#include"MyStringProcess.h";


using namespace std;

namespace DeleteClientByAccountNumber
{
    struct stBankClientRecord
    {
        string AccountNumber;
        string PinCode;
        string Name;
        string Phone;
        float AccountBalance = 0;

        bool MarkDelete = false;
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

    bool MarkToDelete(string AccountNumber, vector <stBankClientRecord>& vClients)
    {
        for (stBankClientRecord& C : vClients)
        {
            if (AccountNumber == C.AccountNumber)
            {
                C.MarkDelete = true;

                return true;
            }
        }

        return false;
    }

    void SaveClientsToFile(string FileName, vector <stBankClientRecord>& vClients, string Separator = " ")
    {
        fstream File;

        File.open(FileName, ios::out);

        if (File.is_open())
        {
            string Line = "";

            for (stBankClientRecord& C : vClients)
            {
                if (!C.MarkDelete)
                {
                    Line = ConvertRecordToLine(C, Separator);

                    File << Line << endl;
                }
            }

            File.close();
        }

    }

    bool DelteClient(string FileName, vector <stBankClientRecord>& vClients, string AccountNumber, string Separator = " ")
    {
        if (MarkToDelete(AccountNumber, vClients))
        {
            SaveClientsToFile(FileName, vClients, Separator);

            vClients = LoadClients(FileName, Separator);

            return true;
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

            if (MyInput::ReadYesOrNo("\nAre you sure you want delete this client ? yes/no ? "))
            {
                DelteClient(FileName, vClients, AccountNumber, "#//#");

                cout << "\nClient Deletes successfully" << endl;

            }

        }
        else
        {
            cout << "Client with Account Number (" << AccountNumber << ") Not Found !" << endl;
        }

    }
}