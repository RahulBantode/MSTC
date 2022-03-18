/*
    Structure Defination About the Investments
*/

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    char *month;
    int year;
};

struct Investment
{
    struct personal_information
    {
        char *investor_name;
        char *nationality;
        int mobile_no;
        char *emailId;
    } PI;

    struct Mutual_fund
    {
        int folio_number;
        char *MF_name;
        float expense_ratio;
        float avg_returns;
        int lock_in_periods;
        float minimum_amount_investment;
        char *mode_of_investment;
        struct Date investment_date;
    } MF;

    struct Stock_Market
    {
        char *symbol_name;
        float stock_price;
        float total_investment;
        int quantity;
        char *sector_type;
        struct Date investment_date;
        char *mode_of_investment;
    } SM;

    struct PPF
    {
        float investment_amount;
        int lock_in_periods;
        char *platform_of_ac_opening;
        float intrest_rate;
        struct Date investment_date;
    } ppf;
};

int main(void)
{
    struct Investment invs;

    invs.PI.investor_name = "Warren Buffet";
    invs.PI.nationality = "Foreigner";
    invs.PI.mobile_no = 8759827943;
    invs.PI.emailId = "warren232buffet@gmail.com";

    invs.MF.folio_number = 1323722334;
    invs.MF.MF_name = "Canara Robeco Bluechip Equity Fund";
    invs.MF.expense_ratio = 0.38;
    invs.MF.avg_returns = 15;
    invs.MF.lock_in_periods = 3;
    invs.MF.investment_date.day = 2;
    invs.MF.investment_date.month = "Februry";
    invs.MF.investment_date.year = 2022;
    invs.MF.minimum_amount_investment = 6000.00;
    invs.MF.mode_of_investment = "SIP";

    invs.SM.symbol_name = "ONGC";
    invs.SM.sector_type = "Large Capital";
    invs.SM.quantity = 5;
    invs.SM.stock_price = 158.82;
    invs.SM.total_investment = invs.SM.quantity * invs.SM.stock_price;
    invs.SM.mode_of_investment = "Lumpsum";
    invs.SM.investment_date.day = 12;
    invs.SM.investment_date.month = "December";
    invs.SM.investment_date.year = 2021;

    invs.ppf.platform_of_ac_opening = "Indian Post Office";
    invs.ppf.investment_amount = 10000;
    invs.ppf.lock_in_periods = 15;
    invs.ppf.intrest_rate = 7.1;
    invs.ppf.investment_date.day = 7;
    invs.ppf.investment_date.month = "April";
    invs.ppf.investment_date.year = 2018;

    puts("----------------------- Investment -----------------------");
    puts("Personal Information :- ");
    printf("\t Investor Name : %s\n", invs.PI.investor_name);
    printf("\t Nationality : %s\n", invs.PI.nationality);
    printf("\t Email Id : %s\n", invs.PI.emailId);
    printf("\t mobile no : %d\n", invs.PI.mobile_no);

    puts("Mutual Fund :-");
    printf("\t Mutual Fund Name : %s\n", invs.MF.MF_name);
    printf("\t Folio Number : %d\n", invs.MF.folio_number);
    printf("\t Expend Ration : %3f per\n ", invs.MF.expense_ratio);
    printf("\t Average returns : %3f per\n", invs.MF.avg_returns);
    printf("\t Lock in period : %d years\n", invs.MF.lock_in_periods);
    printf("\t Intial Investment Amount : %2f\n", invs.MF.minimum_amount_investment);
    printf("\t Mode of investment : %s\n", invs.MF.mode_of_investment);
    printf("\t Investment Date : %s %d,%d\n",
           invs.MF.investment_date.month,
           invs.MF.investment_date.day,
           invs.MF.investment_date.year);

    puts("Stock Market :-");
    printf("\t Company name (Symbol) : %s\n", invs.SM.symbol_name);
    printf("\t Sector Type : %s\n", invs.SM.sector_type);
    printf("\t Stock Price : %3f \n", invs.SM.stock_price);
    printf("\t Buy Quantity : %d\n", invs.SM.quantity);
    printf("\t Mode Of investment : %s\n", invs.SM.mode_of_investment);
    printf("\t Investment Date : %d %s,%d\n",
           invs.SM.investment_date.day,
           invs.SM.investment_date.month,
           invs.SM.investment_date.year);
    printf("\t Total Invement Amount : %f\n", invs.SM.total_investment);

    puts("PPF : -");
    printf("\t Platform of Investment : %s\n", invs.ppf.platform_of_ac_opening);
    printf("\t Lock in period : %d years\n", invs.ppf.lock_in_periods);
    printf("\t Interest Rate : %f per\n", invs.ppf.intrest_rate);
    printf("\t Investment Amount : %f\n", invs.ppf.investment_amount);
    printf("\t Investment Date : %d %s,%d\n",
           invs.ppf.investment_date.day,
           invs.ppf.investment_date.month,
           invs.ppf.investment_date.year);

    exit(0);
}

/* OUTPUT :-

----------------------- Investment -----------------------
Personal Information :-
         Investor Name : Warren Buffet
         Nationality : Foreigner
         Email Id : warren232buffet@gmail.com
         mobile no : 169893351
Mutual Fund :-
         Mutual Fund Name : Canara Robeco Bluechip Equity Fund
         Folio Number : 1323722334
         Expend Ration : 0.380000 per
         Average returns : 15.000000 per
         Lock in period : 3 years
         Intial Investment Amount : 6000.000000
         Mode of investment : SIP
         Investment Date : Februry 2,2022
Stock Market :-
         Company name (Symbol) : ONGC
         Sector Type : Large Capital
         Stock Price : 158.820007
         Buy Quantity : 5
         Mode Of investment : Lumpsum
         Investment Date : 12 December,2021
         Total Invement Amount : 794.100037
PPF : -
         Platform of Investment : Indian Post Office
         Lock in period : 15 years
         Interest Rate : 7.100000 per
         Investment Amount : 10000.000000
         Investment Date : 7 April,2018
*/