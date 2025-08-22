#ifndef Socket_hpp
#define Socket_hpp

#include <stdio.h>
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

namespace MDV
{
    class Socket 
    {
        private:
        struct sockaddr_in address;
        int sock;
        int connection;

        public:
        //constructor
        Socket(int domain, int service, int protocol, int prot, u_long interface);

        //virtual functioin to connect to the netowrk
        virtual int connectes_to_network(int sock, struct sockaddr_in address) = 0;

        //Function to test the connection
        void test_connection(int);

        //Getter functions
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();

        //setter functions
        void set_connection(int con) ;

      
    };
}

#endif /*Socket_hpp*/