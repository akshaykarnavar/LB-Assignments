#include<stdio.h>


  float CovertPersentages(int iNo1,int iNo2)
 {
    float fAns=0.0f;
    fAns=((float)iNo2/iNo1)*100;
    return fAns;
 }

int main()
{
    int iValue1=0, iValue2=0;
    float fRet=0.0f;
    printf("Enter Total Marks:");
    scanf("%d",&iValue1);
    printf("Enter Obtained Marks:");
    scanf("%d",&iValue2);


    fRet=CovertPersentages(iValue1,iValue2);

    printf("Persentage:%.1f%%\n",fRet);
    return 0;

}