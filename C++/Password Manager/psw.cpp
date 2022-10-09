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
        string search;
        char opt;
    while((opt = getopt(argc, argv,"a:s") != -1)){
        switch (opt)
        {
        case 'a':
            cin >> search;
            break;
        
        default:
            break;
        }
    }
    std::cout << "Какой пароль нужен?" << endl;
    }
}