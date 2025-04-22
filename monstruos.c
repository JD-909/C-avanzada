#include <stdio.h>

typedef struct {

    char* nombre;
    int vida;
    double ataque;
    double defensa;

} monstruos_t;

monstruos_t jefes[6] = {
    {"Yucatan", 1000, 100, 70},
    {"Set", 500, 40, 60},
    {"Noctus", 300, 50, 30},
    {"Pandora", 800, 80, 80},
    {"Bloody Mary", 600, 60, 60},
    {"Leviatan", 600, 70, 40}
};

monstruos_t evolucion (monstruos_t villano) {

    villano.ataque *= 10;
    villano.defensa *= 10;

    return villano;
}

int main() {

    for (size_t i = 0; i < 6; i++)
    {
        printf("Jefe: %-15s, Vida: %-6d, Ataque: %-15f, Defensa: %-6f \n", jefes[i].nombre, jefes[i].vida, jefes[i].ataque, jefes[i].defensa);
    }
    
printf("\nOcurre algo siniestro\n\n");

for (size_t i = 0; i < 6; i++)
{
    monstruos_t jefeEvo = evolucion(jefes[i]);
    printf("Jefe: %-15s, Vida: %-6d, Ataque: %-15f, Defensa: %-6f \n", jefeEvo.nombre, jefeEvo.vida, jefeEvo.ataque, jefeEvo.defensa);
}

printf("\n");
    return 0;
}