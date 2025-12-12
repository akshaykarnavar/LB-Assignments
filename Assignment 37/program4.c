#include <stdio.h>


int AlphaCount(char str[],char Ch)
{
     int iCnt=0;
     int LastIndex=-1;
    while(str[iCnt]!='\0')
    {
        if (str[iCnt] != ' ')   // [skip spaces ]
        {
            if(str[iCnt]==Ch)
                {
                    LastIndex=iCnt;
                }  
        } 
        iCnt++;    
    }
             return LastIndex;
    
    
    
}

int main()
{
    char Arr[50];
    char cValue='\0';
    int iRet=0;
   
   

    printf("Enter the String:");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Alphabet to Check:");
    scanf(" %c",&cValue);

    iRet =AlphaCount(Arr,cValue);
    printf(" Index of Last Occurance is:%d",iRet);
    
    return 0;
}