#include<stdio.h>
#include<string.h>
int main()
{
    char Name[30];
    printf("Enter the Name:");
    scanf("%[^\n]",&Name);
    printf("Your Name is:%s",Name);
    return 0;
}