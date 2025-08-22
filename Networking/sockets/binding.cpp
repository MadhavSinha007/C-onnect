#include "binding.hpp"

//cconstructor for BindingSocket
int MDV::BindingSocket::BindingSocket(int domain, int service, int protocol, int prot, u_long interface)
    : Socket(domain, service, protocol, prot, interface)
{
    set_connection (connectes_to_network(get_sock(), get_address()));
    test_connection(get_connection());   // Constructor body can be empty as initialization is done in the base class constructor
}

// Function to connect to the network
int MDV::BindingSocket::BindingSocket(int sock, struct sockaddr_in address){
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}