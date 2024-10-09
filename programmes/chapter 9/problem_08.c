/*Write a structure capable of storing date. Write a function to compare those
dates. */
#include <stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yyyy;

} Dt;

int compare(Dt, Dt);
int compare(Dt d1, Dt d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    Dt d1 = {30, 01, 2006};
    Dt d2 = {30, 01, 2007};

    printf("%d", compare(d1, d2));
    return 0;
}