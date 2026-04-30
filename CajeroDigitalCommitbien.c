#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float SaldoenCuenta = 0;
float Deposito;
float Retiro;

float depositos[100];
float retiros[100];
int numDepositos = 0;
int numRetiros = 0;

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
    depositos[numDepositos++] = Deposito;

    printf("Deposito exitoso. Su nuevo saldo es: %.2f\n", SaldoenCuenta);
}

void RetiroDin(){
    printf("Ingrese la cantidad de dinero a retirar: ");
    scanf("%f", &Retiro);

    if (Retiro <= SaldoenCuenta) {
        SaldoenCuenta -= Retiro;
        retiros[numRetiros++] = Retiro;
        printf("Retiro exitoso. Su nuevo saldo es: %.2f\n", SaldoenCuenta);
    } else {
        printf("Fondos insuficientes.\n");
    }
}

void Historial(){
    float totalDepositos = 0;
    float totalRetiros = 0;

    for(int i = 0; i < numDepositos; i++){
        totalDepositos += depositos[i];
    }

    for(int i = 0; i < numRetiros; i++){
        totalRetiros += retiros[i];
    }

    printf("\n========== HISTORIAL ==========\n");
    printf("Usuario: %s\n", usuarios[usuarioActual].usuario);
    printf("Saldo actual: %.2f\n", SaldoenCuenta);
    printf("Total depositado: %.2f\n", totalDepositos);
    printf("Total retirado: %.2f\n", totalRetiros);
}

int main(){
    printf("========== BIENVENIDO AL CAJERO DIGITAL ==========\n");
    autenticacion();

    int opcion;

    do{
        printf("\n1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Retirar\n");
        printf("4. Historial\n");
        printf("5. Salir\n");

        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                SaldoDisponible();
                break;
            case 2:
                DepositoDin();
                break;
            case 3:
                RetiroDin();
                break;
            case 4:
                Historial();
                break;
            case 5:
                printf("Gracias por usar el cajero.\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }

    } while(opcion != 5);

    return 0;
}