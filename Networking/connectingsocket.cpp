#include <connectingsocket.hpp>

//constructor for connectingsocket
MDV::connectingsocket::connectingsocket(int domain, int service, int protocol, int prot, u_long interface) : Socket(domain, service, protocol, prot, interface) {
    set_connection(connectes_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

int MDV::connectingsocket::connectes_to_network(int sock, struct sockaddr_in address) {
    return connect(sock, (struct sockaddr *)&address, sizeof(address));
}
