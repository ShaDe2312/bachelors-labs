
#include<stdio.h>
#include<string.h>
int main()
{
    char d[50],s[50];
    int i=0,j=1;
    printf("Enter the codeword :");
    scanf("%s",d);
    s[0]='$'; //Here $ is used as a flag .It must be at start and end of a frame.
    while(d[i]!='\0')
    {
        if((d[i]=='$')||(d[i]=='@'))
        {
            s[j]='@';
            j++;
            }
            s[j]=d[i];
            i++,j++;
    }
    s[j]='$',j++,s[j ]='\0';
    printf("Stuffled frame :%s",s);
    return 0;
}
