# include <stdio.h>
# include <stdint.h>

int main(){
    for (size_t i = 0; i < 8; i++)
    {
        int8_t memoria[8] = {1,-2,3,-4,5,-6,7,-8};
        uint8_t *x = (uint8_t*) &memoria[i];
        int8_t *y = &memoria[i];
        printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
        printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
    }
    
    return 0;
}