#include <iostream>
#include <unistd.h>
#include <getopt.h>
#include <boost/json.hpp>

using namespace std;
using namespace boost::json;

int main(int argc, char *argv[])
{
    int c;
    int digit_optind = 0;
    if (0 == argc)
    {
    }
    else
    {
        std::string search;
        char opt;
    while(1) {
        static struct option long_option[] = {
            {"add", required_argument, NULL, 'a'},
            {"get", required_argument, NULL, 'g'},
            {0,     0,                 0,     0 }
        };
        
    }
    }
    std::cout << "Какой пароль нужен?" << endl;
}