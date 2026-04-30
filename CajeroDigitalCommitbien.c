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

void autenticacion(){
    printf("Por favor, autentiquese para continuar.\n\n");

    char UsuarioCliente[20];
    char ContrasenaCliente[20];
    int intentos = 3;
    int autenticado = 0;

    while (intentos > 0 && !autenticado) {
        printf("Ingrese su usuario: ");
        scanf("%s", UsuarioCliente);

        printf("Ingrese su contrasena: ");
        scanf("%s", ContrasenaCliente);

        for (int i = 0; i < NumDeUsuarios; i++) {
            if (strcmp(usuarios[i].usuario, UsuarioCliente) == 0 &&
                strcmp(usuarios[i].contrasena, ContrasenaCliente) == 0) {

                usuarioActual = i;
                SaldoenCuenta = usuarios[i].SaldoAsignado;
                autenticado = 1;

                printf("Autenticacion exitosa.\n");
                break;
            }
        }

        if (!autenticado) {
            intentos--;
            printf("Credenciales incorrectas.\n");
        }
    }

    if (!autenticado) {
        exit(1);
    }
}

void SaldoDisponible(){
    printf("Su saldo disponible es de: %.2f\n", SaldoenCuenta);
}

void DepositoDin(){
    printf("Ingrese la cantidad de dinero a depositar: ");
    scanf("%f", &Deposito);

    SaldoenCuenta += Deposito;

    printf("Deposito exitoso. Su nuevo saldo es: %.2f\n", SaldoenCuenta);
}

int main(){
    printf("========== BIENVENIDO AL CAJERO DIGITAL ==========\n");
    return 0;
}