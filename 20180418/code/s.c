 ///
 /// @file    s.c
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-04-18 23:19:28
 ///
 
#include "func.h"

int main(){
	int sfd=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in ser;
	bzero(&ser,sizeof(ser));



