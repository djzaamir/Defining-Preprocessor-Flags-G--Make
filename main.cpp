#include <iostream>

int main(int argc, char **argv){

    #ifdef HI_MAN
         std::cout << "Hi Man, Whats going on" << std::endl;
    #endif

    #ifdef BYE_MAN
         std::cout << "See ya later Alligator" << std::endl;
    #endif

    return 0;
}