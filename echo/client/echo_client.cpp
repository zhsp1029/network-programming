/*===============================================================
*   Copyright (C) 2014 All rights reserved.
*   
*   file       :echo_client.cpp
*   author     :samzhang
*   create time:2014.05.15
*   description:
*
*   update log  :
*
================================================================*/

#include <sys/types.h>          
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc,char ** argv)
{
    if (argc != 2)
    {
        printf("echo_client ip\n");
        return 0;
    }

    chat * szIP = argv[1];

    //create socket
    int iSockFd = socket(AF_INET,SOCK_STREAM,0);

    if (iSockFd == -1)
    {
        perror(strerr(errno));
        return 0;
    }

    struct sock_addr stSockAddr;
    bzero(&stSockAddr,sizeof(stSockAddr));

    stSockAddr.sin_family = AF_INET;
    stSockAddr.sin_addr = 
}
