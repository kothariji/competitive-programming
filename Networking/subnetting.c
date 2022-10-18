#include <iostream>
using namespace std;

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>	



void setIPv4(char * ip,char * gw,char * netmask)
{
	char cmd[128];
	//network interface
	char nwkInf[5]="eth0";

	//link down command in Linux
	sprintf(cmd,"ip link set %s down",nwkInf);
	system(cmd); 
	
	
	memset(cmd,0x00,64);
	//command to set ip address, netmask
	sprintf(cmd,"ifconfig %s %s netmask %s",nwkInf,ip,netmask);
	system(cmd);	 
	printf("\ncmd : %s",cmd); fflush(stdout);
	memset(cmd,0X00,64);

	//command to set gateway
	sprintf(cmd,"route add default gw %s %s",gw,nwkInf);
	system(cmd); 

	memset(cmd,0X00,64);
	//link up command
	sprintf(cmd,"ip link set %s up",nwkInf);
	system(cmd); 
	
}

int main()
{
	//calling function to set network settings
	setIPv4("192.168.10.216","192.168.10.1","255.255.255.0");
	return 0;
}