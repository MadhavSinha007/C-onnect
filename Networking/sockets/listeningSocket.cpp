#include<listeningSocket.hpp>

MDV::ListeningSocket::ListeningSocket(int domain, int service, int port, int protocol, int prot, u_long interface, int bklg)
    : BindingSocket(domain, service, protocol, prot, interface)
{
    backlog=bklg;
    start_listening();
    test_connection(listening);
}

void MDV::ListeningSocket::start_listening()
    listening=listen(get_connection(), backlog);