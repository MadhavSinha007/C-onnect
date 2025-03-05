#include "Socket.hpp"

HDE::Socket::Socket(int domain, int service, int protocol, int prot, u_long interface)
{
    //Defined the address Structure
    address.sin_family = domain;
    address.sin_port = htons(prot);
    address.sin_add.s_addr = htonl(interface);

    //Established our connection
    connection = socket(domain, service, protocol);
    
    //Bind
}