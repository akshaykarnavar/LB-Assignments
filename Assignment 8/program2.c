#include<stdio.h>

void DisplayNumber(int iNo)
{
    
    if(iNo<0)
        {
            iNo=-iNo;
        }
    switch (iNo)
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        default:
        printf("Invalid Number!");
    }
   
    //Time Complexity is O(n).
 

}
int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    DisplayNumber(iValue);


    return 0;
}
