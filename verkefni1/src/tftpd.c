#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <sys/time.h>
/*
firs input: portnumber.
second input: name of dir.
will be done on server. 
*/

//values for time
struct timeval timeStart;
struct timeval timeStop;
extern int timeval;
int timepassed;
int maxtime = 500;
static void timererror (time)

{
// hér þarf að útfæra time error klasann ss. ef við förum fyrir maxtime 
}

// Time of start of trans
static void startTime()
{
	(void)gettimeofday(&timeStart, NULL);
}

// Time of end tran
static void stopTime()
{
	(void)gettimeofday(&timeStop, NULL);
}


//receive file from client- help function. 

void receiveFile()
{

} 

// send the file to client- help function
void sendFile()
{

}
		

int main(int argc, char *argv[])
{

	int port =57596; 
	int sockfd;
	struct sockaddr_in server, client;
	char message[512];


	if ( argc > 3)
	{
	
	}
	// Creat and bind an UDP socket
	Create and bind a UDP socket 
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	memset(&server, 0, sizeof(server));
	server.sin_family = AF_INET;
		
	/* Network functions need arguments in network byte order instead
	* of host byte order. The macros htonl, htons convert the
	* values.
	*/
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	server.sin_port = htons(57596);
	bind(sockfd, (struct sockaddr *) &server, (socklen_t) sizeof(server));





	return 0;
}
