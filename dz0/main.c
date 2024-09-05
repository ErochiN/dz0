#include <stdio.h>

void DrawsHouse()
{
    puts("  /\\");
    puts(" /  \\");
    puts("/____\\");
    puts("| __ |");
    puts("||__||");
    puts("|____|");
}

void DrawsShip()
{
    puts("      _");
    puts("     | |");
    puts("_____| |____");
    puts("\\          /");
    puts(" \\________/");
}

void main()
{
    DrawsHouse();

    DrawsShip();
}