//WAP to print square pattern

#include<stdio.h>
int main()
{
    for(int i=0;i<3;i++)    //Outer loop
    {
        for(int j=0;j<3;j++) //Inner loop 
        {
            printf("* ");
        }
        printf("\n");
    }
}