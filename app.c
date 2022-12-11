#include<stdio.h>

int mod_exp(int b, int e, int p) {
    /*
    b es la raiz primitiva
    e clave
    p numero primo
    */
    int i,x,power;
    x = 1;
    power = b % p;
    for (i=0;i<8*sizeof(int);i++) {
        if (e & 1) {
            x = (x*power) % p;
        }
        e >>= 1;
        power = (power*power) % p;
    }
    return x;
}

int main()
{
    int P,r,a,x,y,K;
    P = 761; // Primo
	r = 6; // raiz primitiva
    printf("Primo p: %d\n", P);
    printf("Raiz primitiva r: %d\n", r);
    printf("Escribe tu clave privada: ");
    fflush(stdin);
    scanf("%d", &a); // suele ser un numero grande para que sea dificil calcular el logaritmo discreto
    x=mod_exp(r,a,P);
    printf("Clave publica generada para enviar al compañero: %d\n", x);
    printf("Escribe la clave publica que te han enviado:");
    fflush(stdin);
    scanf("%d", &y);
    K = mod_exp(y,a,P);
    printf("Secreto compartido es : %d\n", K);
}