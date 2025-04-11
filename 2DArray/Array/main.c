#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D[128][128];  // ✅ Declare the 2D array

    for (int i = 0; i < 128; i++)
        for (int j = 0; j < 128; j++)
            D[j][i] *= 10;

}

