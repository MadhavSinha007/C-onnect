#ifndef listeningSocket_hpp
#define listeningSocket_hpp

#include<stdio.h>
#include<binding.hpp>

namespace MDV{
    class ListeningSocket{

        private:
            int backlog;
            int listening;

        public:
            ListeningSocket(int port, int service, int protocol, int prot, u_long interface, int bklg);
            void start_listening();
    };
}

#endif /* listeningSocket_hpp */