#include <stdio.h>
#include <stdlib.h>


int funcp(){
static int x = 1;
x++;
return x;
}


int main()
{
  int x, y;
    x = funcp();        // First call to funcp() // x = 2
    y = funcp() + x;    // Second call to funcp()   y = 3 + 2 = 5
    printf("%d\n", (x + y));
    return 0;
}
