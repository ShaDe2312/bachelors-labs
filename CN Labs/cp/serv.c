#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Winsock2.h>
#include<sys/types.h>
#include<ctype.h>

#define PORT 4455

//#include<netinet/in.h>
//#include<arpa/inet.h>

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

int main()
{

    char d[50],s[50];
    int i=0,j=1;
    printf("\nEnter the codeword : ");
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
    printf("\nStuffed frame(data sent) :  %s\n",s);

     printf("\n\n\t Character \t ASCII \t\t\t  Binary\n");

        int x=0;
	while (s[x]!='\0')
	{
		printf("\t %c \t\t  %d \t\t\t %d \n", s[x], toascii(s[x]), asciiValueToBinary(toascii(s[x])));
                x++;
	}
	printf("\n\nSent data in Binary format (Frame)");
	x=0;
	while (s[x]!='\0')
	{
		printf("%d", asciiValueToBinary(toascii(s[x])));
                x++;
	}
    printf("\n");
    int sockfd;
    struct sockaddr_in serverAddr;

    int newSocket;
    struct sockaddr_in newAddr;

    socklen_t addr_size;


    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    memset(&serverAddr, '\0', sizeof(serverAddr));

    serverAddr.sin_family = AF_INET; //
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    bind(sockfd, (struct sockaddr*)&serverAddr, sizeof(serverAddr));

    listen(sockfd, 5);
    addr_size = sizeof(newAddr);

    newSocket = accept(sockfd,( struct sockaddr*)&newAddr, &addr_size);

    send(newSocket, s, strlen(s),0);
    printf("\nLength of sent data is %ld\n",strlen(s));



    return 0;
}
