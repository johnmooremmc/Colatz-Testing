#include <stdio.h>
#include <stdlib.h>

int main()
{



    int num = 1;
    int target = num;
    int result;
    int count = 0;
    int largestnum;

    while(num <= 10000){

        while(result != 1){


            if(target % 2 == 0)
                result = target/2;
            else
                result = target*3 +1;

                //printf("%d\n", result);

            target = result;
            if(largestnum < result)
                largestnum = result;

            count++;
        }

        if(count > 250)
            printf("Starting: %d Counted: %d\n", num, count);

        count = 0;
        result = 0;

        num++;
        target = num;
    }

    printf("%d\n", largestnum);

    return 0;
}
