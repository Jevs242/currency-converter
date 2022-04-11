//Jose Velazquez
//Currency Converter

#include "CurrencyConverter.h"


Currency::Currency()
{
    cout << "Program for convert USD in diferent currency\n" << e;
    Information();
}

Currency::~Currency()
{
    system("pause");
}

void Currency::Information()
{
    int countCurrencies = (sizeof(nameCurrency)/sizeof(*nameCurrency));

    while (true)
    {

        cout << "Which currency do you want to convert?\n" << e;
        cout << "USD TO : \n" << e;
                        
        for (int i = 0; i < countCurrencies; i++)
        {
            cout << i + 1 << ". " + nameCurrency[i] << e; 
        }
                        
        if(VerificationInt(countCurrencies , true))
        {
            break;
        }
    }
    opc--;
    WhatChanges();
}

bool Currency::VerificationInt(int Num , bool IsOpc)
{
	while (true)
	{
        if (IsOpc)
            cin >> opc;
        else
            cin >> money;
		if (!cin.good())
		{
            system("cls");
			cout << "Only Numbers " << e;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return false;
		}
		else if (opc > 0 && IsOpc)
		{
            if(opc < Num)
            {
                return true;
            }
            else
            {
                system("cls");
                cout << "Only Numbers from " << "0 to " << Num << e;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return false;
            }
		}
		else if(cin.good() && !IsOpc)
        {
            return true;
        }

	}
}

void Currency::WhatChanges()
{
    while (true)
    {
        system("cls");

        cout << "How many money do you want to exchange into " << nameCurrency[opc] << "?" << e;

        if (VerificationInt(0, false))
        {
            break;
        }
    }
    Result();
}

void Currency::Result()
{
    system("cls");
    cout.imbue(std::locale(""));
    money = ceil(money * 100.0) / 100.0;
    if (money > 1000000)
    {
        int iMoney = money;
        cout << "You have put " << iMoney << " " << "USD\n" << e;
    }
    else 
        cout << "You have put " << money << " " << "USD\n" << e;

    money = money * valueCurrency[opc];
    money = ceil(money * 100.0) / 100.0;

    if (money > 1000000)
    {
        int iMoney = money;
        cout << "You have " << iMoney << " " << currencySymbols[opc] << "\n" << e;
    }
    else 
        cout << "You have " << money << " " << currencySymbols[opc] << "\n" << e;
}

int main()
{
    Currency Currencies;
    return 0;
}




