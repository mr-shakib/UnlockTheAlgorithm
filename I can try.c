#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    int i,sizeOfBalls,sizeOfRattles;
    for(int k = 0 ; k<testCase ; k++)
    {

        scanf("%d %d",&sizeOfBalls,&sizeOfRattles);
        int ball[sizeOfBalls];
        int rattle[sizeOfRattles];
        for(i = 0 ; i < sizeOfBalls ; i++)
        {
            scanf("%d",&ball[i]);
            //printf("%d\n",ball[i]);
        }
        for(i = 0 ; i < sizeOfRattles ; i++)
        {
            scanf("%d",&rattle[i]);
           // printf("%d\n",rattle[i]);
        }

        int sizeOfArray = sizeOfBalls + sizeOfRattles;

        int merged[sizeOfArray];

        for(i = 0 ; i < sizeOfBalls ; i++)
        {
            merged[i] = ball[i];
           // printf("%d\n",merged[i]);
        }
        for(i = 0 ; i < sizeOfRattles ; i++)
        {
            merged[i+sizeOfBalls] = rattle[i];
            //printf("%d\n",merged[i+sizeOfBalls]);
        }
        /*
        for(int i = 0 ; i < sizeOfArray ; i++)
        {
            printf("%d ",merged[i]);
        }
        */

        for(int i = 0 ; i < sizeOfArray ; i++)
        {
            int temp;
            for(int j = i+1 ; j < sizeOfArray ; j++)
            {
                if(merged[i]<merged[j])
                {
                    temp = merged[i];
                    merged[i] = merged [j];
                    merged[j] = temp;
                }
            }
        }

        for(int i = 0 ; i < sizeOfArray ; i++)
        {
            printf("%d ",merged[i]);
        }
        printf("\n");
    }


    return 0;
}
