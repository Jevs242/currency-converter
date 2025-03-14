//Jose Velazquez
//Currency Converter

#pragma once
#include <iostream>
#include <string>
#include <locale>
#include <math.h>  
#include <limits>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

#define e '\n';

class Currency
{
private:
    static int const totalCurrency = 7;
    double valueCurrency[totalCurrency]{ 0.91941 , 124.24357 , 1.25668 , 20.0371 , 6.3652 , 79.0690 , 0.76714 };
    string nameCurrency[totalCurrency]{ "EURO" , "YEN" , "CAD" , "MXN" , "YUAN" , "Ruble" , "GBP"};
    string currencySymbols[totalCurrency]{ "EUR" , "JPY" , "CAD" , "MXN" , "CNY" , "RUB" , "GBP"};
    int opc;
    long double money;
public:
    Currency();
    ~Currency();

    void Information();
    bool VerificationInt(int Num, bool IsOpc);
    void WhatChanges();
    void Result();
};