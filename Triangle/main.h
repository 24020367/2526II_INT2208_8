#include <bits/stdc++.h>
using namespace std;
string triangle(int a,int b,int c){
    if (min({a,b,c})<1 || max({a,b,c})>100)
    {
        return "Invalid Input";
    }
    if (a+b>c&&b+c>a&&a+c>b)
    {
        if (a==b&&b==c)
        {
            return "Equilateral";
        }
        else if (a==b||b==c||a==c)
        {
            return "Isosceles";
        }
        else
        {
            return "Scalene";
        }
    }
    else
    {
        return "Not a Triangle";
    }
}
