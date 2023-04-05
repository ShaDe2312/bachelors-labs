#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Winsock2.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<ctype.h>

#define PORT 4455

int asciiValueToBinary(int asciiInput);

int main()
{
    int clientSocket;
    struct sockaddr_in serverAddr;
    char buffer[1024];

    clientSocket = socket(AF_INET, SOCK_STREAM,0);  //socket create
    memset(&serverAddr, '\0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET; //
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(clientSocket, (struct sockaddr*)&serverAddr,sizeof(serverAddr));

    int len,k;
    printf("\nEnter length of sent data: ");
    scanf("%d",&len);

    recv(clientSocket, buffer, len, 0);
   // printf("\nData Received: %s",buffer);

    char d[50],s[50];
    for (k=0;k<len;k++)
    {
        strcpy(d,buffer);
    }
    d[k]='\0';
    int i=1,j=0;
//    printf("\nEnter the code word from sender side :"); //Include the flag($) in that code word.
  //  scanf("%s",d);
  printf("\nFrame received: ");
  int x=0;
  while (d[x]!='\0')
	{
		printf("%d", asciiValueToBinary(toascii(d[x])));
                x++;
	}
	 printf("\n");
  printf("\n\n\t Character \t ASCII \t\t\t  Binary\n");

    x=0;
	while (d[x]!='\0')
	{
		printf("\t %c \t\t  %d \t\t\t %d \n", d[x], toascii(d[x]), asciiValueToBinary(toascii(d[x])));
                x++;
	}





   printf("\nData Received: %s",d);

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
    printf("\n\nOriginal code word is : %s\n",s);

    return 0;

}
int asciiValueToBinary(int asciiInput)
{
	int res = 0, i = 1, rem;

	while (asciiInput > 0)
	{
		rem = asciiInput % 2;
		res = res + (i * rem);
		asciiInput = asciiInput / 2;
		i = i * 10;
	}
	return(res);
}
