#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; j < strlen(argv[i]); j++)
        {
            if (argv[i][j] >= 'a' &&  argv[i][j] <= 'z')
            {
                 argv[i][j] =  argv[i][j] - 32;
                std::cout <<  argv[i][j];
            }
            else
                std::cout <<  argv[i][j];
        }
    }
    std::cout << std::endl;
}