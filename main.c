#include <stdio.h>
#include <unistd.h>

int main()
{
    char name[20],sec;
    int std;
    int maths,science,ssc,eng,hindi;
    int total_marks;

printf("Name::");
scanf("%[^\n]%*c",name);
printf("Standard::");
scanf("%d",&std);
while((getchar())!='\n');
printf("Section::");
scanf("%c",&sec);
//marks
printf("Enter the Mathematics Marks::-");
scanf("%d",&maths);
printf("Enter the Science Marks::-");
scanf("%d",&science);

printf("Enter the Social Science Marks::-");
scanf("%d",&ssc);

printf("Enter the English Marks::-");
scanf("%d",&eng);

printf("Enter the Hindi Marks::-");
scanf("%d",&hindi);

total_marks=science+maths+ssc+eng+hindi;;

printf("\n\n Printing the Report Card.........");
printf("\n\n\n------------------------------------------------------------------------------------------------------------------------------");
usleep(2000000);
    printf("\n \n \n \n \nJawahar Navodaya  Vidyalaya\n");
    printf("\n\t Annual Report Card\n");
    printf("\n\n Name::%s\n Standard::%d\n Section::%c\n",name,std,sec);
    printf("\n\n Marks Secured out of 100");
    printf("\n Mathematics::%d",maths);
      printf("\n Science::%d",science);
        printf("\n Social Science::%d",ssc);
          printf("\n English::%d",eng);
            printf("\n Hindi::%d",hindi);
            printf("\n\n Total Marks Secured::%d",total_marks);

            if(total_marks>500 && total_marks<0 )
               exit(0);
            else if(total_marks>=450)
                printf("\n Grade:A");
                else if(total_marks>=400 &&  total_marks<=449)
                printf("\n Grade:B");
                else if(total_marks>=350 && total_marks<=399)
                printf("\n Grade:C");
                    else if(total_marks>=300 && total_marks<=349)
                printf("\n Grade:D");
                    else if(total_marks>=200 && total_marks<=299)
                printf("\n Grade:E");
                else if(total_marks<200 && total_marks>0 )
                    printf("\n Grade::F");
                    printf("\n\n------------------------------------------------------------------------------------------------------------------------------");
    return 0;
}
