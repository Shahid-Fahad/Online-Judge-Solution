#include <stdio.h>
int main()
{
    int d1, d2, h1, h2, m1, m2, s1, s2;
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d ", &h1, &m1, &s1);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    int day = (d2 - d1) - 1;
    int hr = (h2 - h1) + 24;
    int min, sec;
    if (m1 <= m2)
        min = m2 - m1;
    else
        min = m2 - m1 + 60;
    if (s1 <= s2)
        sec = s2 - s1;
    else
        sec = s2 - s1 + 60;
    if (sec == 60)
    {
        min++;
        sec = 0;
    }
    if (min == 60)
    {
        hr++;
        min = 0;
    }
    if (hr >= 24)
    {
        hr -= 24;
        day++;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hr, min, sec);
}