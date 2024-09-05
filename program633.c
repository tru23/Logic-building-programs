#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[],char str2[])
{
   int Count1[26]={0};
   int Count2[26]={0};
   int i=0;
   

   while(*str1!='\0')
   {
    Count1[*str1-'a']++;
    str1++;
   }
   while(*str2!='\0')
   {
    Count1[*str2-'a']++;
    str2++;
   }

   for(i=0;i<26;i++)
   {
    if(Count1[i]!=Count2[i])
    {
        break;
    }
   }
   if(i==26)
   {
    return true;
   }
   else{
    return false;
   }
}
// void CalculateFrequency(char str[])
// {
//     int Count[26]={0};
//     int i=0;
//     while(*str!='\0')
//     {
//         Count[*str-'a']++;//if *str=a then a-a i.e 97-97=0  so Count[0]++ gets incrremented 
//         str++; //string cha pudge pudhe jata
//     }
//     for(i=0;i<26;i++)
//     {
//         printf("Frequency of %c is %d\n",'a'+i,Count[i]);
//     }
// }


int main()
{
    char str1[30];
    char str2[30];

    bool bRet=false;

    printf("enter word 1:\n");
    scanf("%s",str1);

    printf("enter word 2:\n");
    scanf("%s",str2);

    bRet=CheckAnagram(str1,str2);
    if(bRet==true)
    {
        printf("strings are anagram");

    }
    else{
        printf("strings are not anagram");
    }

    // CalculateFrequency(str1);
    return 0;

}