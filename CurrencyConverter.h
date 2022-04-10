//Jose Velazquez
//Currency Converter

#pragma once
#include <iostream>
#include <string>
#include <locale>
#include <math.h>  
#include <limits>


using namespace std;

#define e '\n';

class Currency
{
private:
    static int const TotalCurrency = 7;
    double ValueCurrency[TotalCurrency]{ 0.91941 , 124.24357 , 1.25668 , 20.0371 , 6.3652 , 79.0690 , 0.76714 };
    string NameCurrency[TotalCurrency]{ "EURO" , "YEN" , "CAD" , "MXN" , "YUAN" , "Ruble" , "GBP"};
    string CurrencySymbols[TotalCurrency]{ "EUR" , "JPY" , "CAD" , "MXN" , "CNY" , "RUB" , "GBP"};
    int opc;
    long double Money;
public:
    Currency();
    ~Currency();

    void Information();
    bool VerificationInt(int Num, bool IsOpc);
    void WhatChanges();
    void Result();
};