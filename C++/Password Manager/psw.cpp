#include <iostream>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
    if (0 == argc)
    {
    }
    else
    {
        char opt;
    while((opt = getopt(argc, argv,"a:g") != -1)){
        switch (opt)
        {
        case 'a':
            /* code */
            break;
        
        default:
            break;
        }
    }
    std::cout << "Какой пароль нужен?" << endl;
    }
}