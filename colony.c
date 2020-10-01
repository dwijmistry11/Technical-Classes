/*--------------------------------------------Header files starts-----------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
/*--------------------------------------------Header files ends-------------------------------------------------*/

/*--------------------------------------------main function starts----------------------------------------------*/
void main()
{
    int a[10],b[10],d,i,j;                  //Local variable declaration.
    printf("enter number of days\n");       //Message for user to enter number of days.
    scanf("%d",&d);                         //Read user entered number and save it in an integer "d" variable.
    printf("enter input\n");                //Message for user to enter any 8 digits.
    for(i=1;i<9;i++)                        //For loop which will itterate 8 times.
        scanf("%d",&a[i]);                  //Rading user entered number from console and saing it in an array "a".
    a[0]=0;                                 //Nullifying 0th element of an array "a".
    a[9]=0;                                 //Nullifying 9th element of an array "a".
    for(i=1;i<=d;i++)                       //iterating for loop for dth times
    {//for1_starts
        for(j=1;j<9;j++)                    //iterating for loop for 9 times
        {//for2_starts
            //compairing element with next element if both are same saving 0 in array "b" else 1 in array "b"
            if(a[j-1]==a[j+1])              
                b[j]=0;
            else
                b[j]=1;
        }//for2_ends
        for(j=1;j<9;j++)                    //copying array "b" to array "a" from element 1 to 9.
            a[j]=b[j];
    }//for1_ends
    for(i=1;i<9;i++)                        //printing 1 to 9 elements of array "a" on a console.
        printf("%d",a[i]);
}//main
/*--------------------------------------------Main function ends--------------------------------------------------*/
