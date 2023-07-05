#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int i;												
int n = 1;


struct studRec										//structure definition
{
    char stdName[20];
    char stdNum[15];
    float quiz1, quiz2, quiz3, ave;
};


struct studRec stud_rec[5];							//structure declaration


float gradeAverage(float x, float y, float z)		//function to compute grade average of student/Computation for the average grade of student
{
    float ave = (x + y + z)/3;

    return ave;
}


void inputStudRec()									//Inputs/function for getting the students record
{
    for(i = 0; i < n; i++)
    {
            printf("Enter student's number: ");
            scanf("\n");
            gets(stud_rec[i].stdNum);

            printf("Enter student's name: ");
            scanf("\n");
            gets(stud_rec[i].stdName);

            printf("Enter grade for quiz no. 1: ");
            scanf("%f", &stud_rec[i].quiz1);

            printf("Enter grade for quiz no. 2: ");
            scanf("%f", &stud_rec[i].quiz2);

            printf("Enter grade for quiz no. 3: ");
            scanf("%f", &stud_rec[i].quiz3);

            system("cls");

            stud_rec[i].ave = gradeAverage(stud_rec[i].quiz1, stud_rec[i].quiz2, stud_rec[i].quiz3);
    }
}

main()
{
    //clears the terminal
    system("cls");
    
    float sum[3];

    //function call
    inputStudRec();
    
    //pre-output or output headers
    printf("\t\t\t\tPOLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n");
    printf("\t\t\t\t\tQUEZON CITY BRANCH\n\n");
    printf("STUDENT NO.\tSTUDENT NAME\t\tQUIZ #1\t\tQUIZ #2\t\tQUIZ #3\t\tGRADE AVERAGE\n");
    
   
    for(i = 0; i < n; i++) 														//Outputs
    {
        printf("\n%10s\t%15s", stud_rec[i].stdNum, stud_rec[i].stdName);
        printf("\t\t%4.2f\t\t%4.2f", stud_rec[i].quiz1, stud_rec[i].quiz2);
        printf("\t\t%4.2f\t\t%4.2f\n", stud_rec[i].quiz3, stud_rec[i].ave);
    }

    //computes the average of quiz#1 of students
    for(i = 0; i < n; i++)
    {
        sum[0] = sum[0] + stud_rec[i].quiz1;
    }

    //computes the average of quiz#2 of students
    for(i = 0; i < n; i++)
    {
        sum[1] = sum[1] + stud_rec[i].quiz2;
    }

    //computes the average of quiz#3 of students
    for(i = 0; i < n; i++)
    {
        sum[2] = sum[2] + stud_rec[i].quiz3;
    }

    //computes the average of grade average of students
    for(i = 0; i < n; i++)
    {
        sum[3] = sum[3] + stud_rec[i].ave;
    }

    //outputs the average of the students
    printf("\nAVERAGE: \t\t\t\t%4.2f\t\t%4.2f\t\t%4.2f\t\t%4.2f", sum[0]/n, sum[1]/n, sum[2]/n, sum[3]/n);

    return 0;
}
