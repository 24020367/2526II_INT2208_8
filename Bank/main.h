#include <bits/stdc++.h>
using namespace std;

string bank(int age, double income, int credit_score, char employment)
{
    if (age < 18 || age > 65 || income < 5.0 || income > 500.0 || credit_score < 300 || credit_score > 850 || (employment != 'C' && employment != 'F'))
    {
        return "Invalid Input";
    }

    if (credit_score <= 500)
    {
        return "REJECT";
    }

    if (income < 15.0)
    {
        if (employment == 'F' || (credit_score >= 501 && credit_score <= 700))
        {
            return "REJECT";
        }
        else
        {
            return "MANUAL REVIEW";
        }
    }
    else
    {
        if (employment == 'C')
        {
            return "APPROVE";
        }
        else
        {
            return "MANUAL REVIEW";
        }
    }
}
