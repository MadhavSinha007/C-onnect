#ifndef Socket_hpp
#define Socket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace MDV
{
    class Socket 
    {
        private;
        struct socketaddr_in address;
        int connection;

        public;
        Socket(int domain, int service, int protocol, int prot, u_long interface);
        virtual void netwrok_connected()= 0;
      
    };
}

#endif /*Socket_hpp*/