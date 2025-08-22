#ifndef CONNECTINGSOCKET_HPP
#define CONNECTINGSOCKET_HPP

#include <stdio.h>

namespace MDV {
    class connectingsocket: public Socket {
    public:
        // Constructor for connectingsocket
        connectingsocket(int domain, int service, int protocol, int prot, u_long interface) {
            //virtual function from parent
            int connection = connectes_to_network(get_sock(), get_address());
        }
}




#endif // CONNECTINGSOCKET_HPP