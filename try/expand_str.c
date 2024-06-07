#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    int asma = 0;

    if (argc == 2)
    {

        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                asma = 1;
            else
            {
                if (asma)
                    write(1, "   ", 3);
                asma = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
