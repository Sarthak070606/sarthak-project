
#include <iostream>
#include <conio.h>
using namespace std;

struct Date
{

    int Day;
    int month;
    int year;
};

const int monthDays[12]

    = {31, 28, 31, 30, 31, 30,

       31, 31, 30, 31, 30, 31};

int countLeapYears(Date Day)
{

    int years = Day.year;

    if (Day.month <= 2)
    {

        years--;
    }

    return (years / 4 - years / 100 + years / 400);
}

int getDifference(Date dt1, Date dt2)
{

    int n1 = (dt1.year * 365 + dt1.Day);

    for (int i = 0; i < dt1.month - 1; i++)

        n1 = (n1 + monthDays[i]);

    n1 = (n1 + countLeapYears(dt1));

    int n2 = (dt2.year * 365 + dt2.Day);

    for (int i = 0; i < dt2.month - 1; i++)

        n2 += monthDays[i];

    n2 = (n2 + countLeapYears(dt2));

    return (n2 - n1);
}

int main()
{

    Date dt1 = {7, 06, 2006};

    Date dt2 = {7, 4, 2024};
    string hello;

    cout << " Total number of days you live on this earth is =  " << getDifference(dt1, dt2) << endl;

    return 0;
}
