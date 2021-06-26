#include <limits.h>
#include <stdio.h>
#include<assert.h>
int absolute(int number);

int reversenumber(int range);

int absolute(int number)
{
    if (number < 0)
    {
        return -1 * number;
    }
    return number;
}
int reversenumber(int range)
{
    int reverse, addreverse=0;
    if (range <= 65536 && range >= -65536)
    {
        while (range != 0)
        {
            reverse =  range % 10;
            if (addreverse > INT_MAX / 10 || addreverse < INT_MIN / 10) 
            {
            return 0;
            }
            range = range / 10;
            addreverse = (addreverse * 10) + reverse;
        }
    return addreverse;
    }
    else
    {
        return 0;
    }
}

int main() {
    
    int n=reversenumber(-123);
    printf("%d",n);
  
  int input = 0; int output = 0;
    
    input = 123;
    output = reversenumber(input);
    assert(output == 321);
     input = 0; output = reversenumber(input);
    assert(output == 0);

    input = -123; output = reversenumber(input);
    assert(output == -321); 
}
