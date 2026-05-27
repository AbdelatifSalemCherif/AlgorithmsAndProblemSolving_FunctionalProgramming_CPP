/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 26, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace ConvertRecordToLine
{
    struct stBankClientRecord
    {
        string AccountNumber;
        string PinCode;
        string Name;
        string Phone;
        float AccountBalance;
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

    void Run()
    {
        stBankClientRecord Client1 = ReadBankClientRecord("\nPlease enter client data : \n");

        MyOutput::PrintString("\n\nClient Record for Service is :\n", ConvertRecordToLine(Client1, "#//#"), "\n");

    }
}