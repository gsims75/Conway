#include "../include/userinput.h"

namespace userInput
{
    char waitForCharInput(int seconds)
    {
        char c = '_';
        while (seconds != 0)
        {
            if (_kbhit())
            {
                c = _getch();
                break;
            }
            sleep(1);
            --seconds;
        }
        return c;
    }

    char waitForCharInput()
    {
        char c = '_';
        while (true)
        {
            if (_kbhit())
            {
                c = _getch();
                break;
            }
            sleep(1);
        }
        return c;
    }
}