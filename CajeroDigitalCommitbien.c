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

int main(){
    printf("========== BIENVENIDO AL CAJERO DIGITAL ==========\n");
    return 0;
}