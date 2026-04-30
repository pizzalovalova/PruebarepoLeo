#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float SaldoenCuenta = 0;
float Deposito;
float Retiro;

struct Usuario{
    char usuario[20];
    char contrasena[20];
    float SaldoAsignado;
};

struct Usuario usuarios[] = {
    {"mamoncito", "1234", 1250.0},
    {"mariamonte", "1085", 1500.0},
    {"manon", "9012", 2700.0},
    {"leo", "2511", 8080.0}
};

int NumDeUsuarios = 4;
int usuarioActual = -1;

int main(){
    printf("========== BIENVENIDO AL CAJERO DIGITAL ==========\n");
    return 0;
}