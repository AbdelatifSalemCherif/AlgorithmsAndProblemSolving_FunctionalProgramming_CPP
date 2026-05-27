/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 26, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include <iostream>
#include<vector>
#include<string>

#include"MyOutput.h";
#include"MyStringProcess.h";


using namespace std;

namespace ConvertLineDataToRecord
{
    struct stBankClientRecord
    {
        string AccountNumber;
        string PinCode;
        string Name;
        string Phone;
        float AccountBalance;
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

        string Client = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

        stBankClientRecord ClientData = ConvertLineToRecord(Client, "#//#");

        MyOutput::PrintString("Line Record is :\n", Client, "\n");

        PrintBankClientRecord(ClientData, "\nThe Following is extracted client record :\n\n");

    }
}