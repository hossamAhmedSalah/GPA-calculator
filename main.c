#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char grade[3];
    int numOfHours;
    float point;
} subject;
int N; // number of subjects
int main()
{
     int sumOfHours = 0;
     float multipOfPoints = 1;//points*numOfHours
     float GPA, preGPA;
     char AnsQ[2];
    printf("Enter the number of subjects?\n");
    scanf("%d",&N);
    subject subArr[N];
    for(int i = 0; i < N; i++)
    {
        label1:
        printf("subject#%d grade==> ",i+1);
        scanf("%s",subArr[i].grade);
        if( ! strcmp( subArr[i].grade, "A+"  ) )
        {
            subArr[i].point = 4.0;
        }
        else if ( !  strcmp( subArr[i].grade, "A"  ) )
        {
            subArr[i].point = 3.75;
        }
        else if ( ! strcmp( subArr[i].grade, "B+"  ))
        {
            subArr[i].point = 3.4;
        }
        else if ( ! strcmp( subArr[i].grade, "B"  ))
        {
            subArr[i].point  = 3.1;
        }
        else if ( ! strcmp( subArr[i].grade, "C+" ) )
        {
            subArr[i].point = 2.8;
        }
        else if (! strcmp( subArr[i].grade, "C"  ))
        {
            subArr[i].point = 2.5;
        }
        else if (! strcmp( subArr[i].grade, "D+"  ))
        {
            subArr[i].point = 2.25;
        }
        else if (! strcmp( subArr[i].grade, "D"  ))
        {
            subArr[i].point  = 2;
        }
        else if ( ! strcmp( subArr[i].grade, "F"  ))
        {
            subArr[i].point = 1;
        }
        else
        {
            printf("unvalid input you need to write the grades like A+ A B B+ C+ C D+ D F\n");
            printf("Try again");
            goto label1;
        }

        printf("Enter the number of hours ? ");
        scanf("%d",&subArr[i].numOfHours);

    }
    for(int i = 0; i < N; i++)
    {
        multipOfPoints += (float)subArr[i].numOfHours * subArr[i].point;
        sumOfHours += subArr[i].numOfHours;

    }
    multipOfPoints --;
    printf("multiplication of points ==> %.4f\n",multipOfPoints);
     printf("sum of hours ==> %d\n",sumOfHours );

    printf("the GPA==> %.4f", multipOfPoints/sumOfHours);
    printf("\nDO you want to calculate the cumulative GPA? Y/N\n");
    scanf("%s", AnsQ);
    if( ! strcmp(AnsQ, "Y"))
    {
        printf("Enter the prev GPA => ");
        scanf("%f",&preGPA);
        printf("the cumulative GPA ==> %.4f", (preGPA+(multipOfPoints/sumOfHours))/2.0 );
    }
    else
    {
        printf("GOOD BYE ^_^");
    }



    return 0;
}
