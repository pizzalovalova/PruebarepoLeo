# Practica 1 Repo / Cajero Digital
prueba uno del repositorio de Leonardo

Este mismo repositorio se esta utilizando para la practica 1, llamada: 
Desarrollo de sistemas con sistema de control de versiones -- Leonardo Proaño
  
Este sistema es un cajero automatico, el cual tiene usuarios autorizados con su respectivo inicio de sesion. Se tiene 3 intentos para ingresar, de lo contrario este no funcionara. Tiene como funcionalidad:

    - revisar el saldo ya existente de los usuarios

    - Depositar dinero en sus cuentas

    - Retirar dinero de las cuentas

    - Historial para poder llevar la cuenta de lo que ha retirado y depositado.

    - Funcion para salir del programa.

INSTRUCCIONES PARA DESCARGAR

Para descargar este repositorio en su computadora es facil, simplemente debe de buscar el link del repositorio. En este caso es : "https://github.com/pizzalovalova/PruebarepoLeo", para despues entrar en el CMD de su computadora y ejecutar el comando "git clone https://github.com/pizzalovalova/PruebarepoLeo" lo que clonara este archivo en su computadora y le permitira tenerlo. 


INSTRUCCIONES PARA COMPILAR

Compilar este programa es facil, simplemente debemos de abrir el Command Prompt o el "CMD". Ya estando aqui debemos de ir a la carpeta donde esta el archivo. En este caso, la carpeta es PruebaRepoLeo.

debemos de ejecutar el comando "gcc -o CajeroDigitalcommitbien.c" y esto nos compilara el programa


MEJORA IMPLEMENTADA 

en este caso, se implemento un historial de acciones tomadas dentro del programa, que indicara: 

    - retiros de dinero
    - depositos de dinero
    - en que cuenta ingreso 
    - cuanto dinero tiene la cuenta

Se agrego porque asi se puede mantener un conteo de que cambio y asi el usuario pueda saber, al igual que en un banco, cuales cambios se han hecho y se imprima una clase de boletin el cual le de las informaciones correspondientes. En este caso, el usuario, el saldo con el que inicia y el saldo que tiene al momento de pedir el boletin.

La funcion suma los calculos y los retiros para mostrarlos finalmente en el historial, mostrando cuantos depositos y retiros se han hecho, al igual que los montos depositados y retirados.

