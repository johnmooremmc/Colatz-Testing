#include <stdio.h>
#include <stdlib.h>

int main()
{

    int target[] = {};
    int result[] = {};
    int count[1] = {};

    int i = 1;
    target[1] = i;

    while(i <= 500) {

        while(result[i] != 1) {

            if(target[i] % 2 == 0)
                result[i] = target[i]/2;
            else
                result[i] = target[i]*3 +1;

        //printf("%d \n", result[i]);

        count[i]++;
        }

        printf("%d : %d \n", i, count[i]);

        i++;
        target[i] = i;
        count[i]--;

    }

    return 0;
}
