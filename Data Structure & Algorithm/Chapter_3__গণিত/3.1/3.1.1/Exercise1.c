// Q: একটি সংখ্যাকে মৌলিক উৎপাদকে বিশ্লেষণ কর।
//    অর্থাৎ এটি কোন কোন মৌলিক সংখ্যা দ্বারা বিভাজ্য এবং সেই সব মৌলিক সংখ্যার ঘাত (power) গুলো বের কর।
#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    for(int i = 2; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            int count = 0;
            while(num%i == 0)
            {
                num /= i;
                count++;
            }
            printf("%d^%d ", i, count);
        }
    }
    if(num > 1) printf("%d^%d", num, 1);
    printf("\n");    
    return 0;
}