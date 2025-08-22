#include "Socket.hpp"

//Defult constructor

MDV::Socket::Socket(int domain, int service, int protocol, int prot, u_long interface)
{
    //Defined the address Structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    //Established socket
    sock = socket(domain, service, protocol);
    test_connection(sock);

    
}

//Test conneciton virtual funciton
void MDV::Socket::test_connection(int item_to_test)
{
    //Confirms that the sockt or connection has been propery established
    if (item_to_test < 0)
    {
        perror("Failed to connect....");
        exit(EXIT_FAILURE);
    }
}

//Getter functions

struct sockadder_in MDV::Socket::get_address()
{
    return address;
}

int MDV::Socket::get_sock()
{
    return sock;
}

int MDV::Socket::get_connection()
{
    return connection();
}

void  MDV::Socket::set_connection(int con)
{
    connection = con;
}