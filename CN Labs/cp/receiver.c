#include<stdio.h>
#include<string.h>
int main()
{
    char d[50],s[50];
    int i=1,j=0;
    printf("Enter the code word from sender side :"); //Include the flag($) in that code word.
    scanf("%s",d);
    while(d[i+1]!='\0')
    {
        if(d[i]=='@'&&(d[i+1]=='@'||d[i+1]=='$'))
        {
             i++;
        }
        s[j]=d[i];
        i++;
        j++;
    }
    s[j]='\0';
    printf("Original code word is : %s",s);
    return 0;
}
