#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    char str3[]="0123456789ABCDEF";
    int x;
    int i=0;
    int j=0;
    int temp;
    printf("entrer nombre:");
    scanf("%d",&x);
    temp=x;
    while(x>0)
    {
        str1[i]=x%2+'0';
        x=x/2;
        i++;
    }
    str1[i]='\0';
    while(temp>0)
    {
        str2[j]=str3[temp%16];
        temp=temp/16;
        j++;
    }
    str2[j]='\0';
    i--;
    j--;
    printf("binare:");
    while(i>=0)
    {
        printf("%c",str1[i]);
        i--;
    }
    printf("\n");
    printf("hexa decimal:");
    while(j>=0)
    {
        printf("%c",str2[j]);
        j--;
    }
}
