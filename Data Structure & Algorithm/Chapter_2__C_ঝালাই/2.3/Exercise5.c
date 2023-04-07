// Q: একটি স্থানাঙ্ক দেওয়া আছে, তোমাকে বলতে হবে সেটা কোন quadrant এ পরে

#include<stdio.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    
    if(x != 0 && y != 0)
    {
        if(x > 0)
        {
            if(y > 0)
                printf("First\n");
            else
                printf("Fourth\n");
        }
        else
        {
            if(y > 0)
                printf("Second\n");
            else
                printf("Third\n");
        }
    }

    return 0;
}

// here we avoid some cases:
// 1. (0, 0) --> origin.
// 2. (0, pos/neg) --> y axis.
// 3. (pos/neg, 0) --> x axis.