#include "listeningSocket.hpp"

int main(){

std::cout<<"Strarting..."<<std::endl;
std::cout<<"Binding..."<<std::endl;
MDV::BindingSocket bs = MDV::BindingSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);
std::cout<<"Binding Successful!"<<std::endl;
std::cout<<"Listening..."<<std::endl;
MDV::ListeningSocket ls = MDV::ListeningSocket(80, SOCK_STREAM, 0, 80, INADDR_ANY, 5);
ls.start_listening();
std::cout<<"Listening Successful!"<<std::endl;

}cd