#ifndef BINDING_HPP
#define BINDING_HPP

#include <stdio.h>

namespace MDV
{
    class BindingSocket: public Socket{
        public:
        // Constructor for BindingSocket
        BindingSocket(int domain, int service, int protocol, int prot, u_long interface);
        // virtual function form  to connect to the network
            int connectes_to_network(int sock,  struct sockaddr_in address);
    }
}

#endif // BINDING_HPP