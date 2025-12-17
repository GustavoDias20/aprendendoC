#include <stdio.h>

int main(){
    /*
    tipos de modificadores de dados

    Unsigned
    Signed (variavel em seu estado normal, aceitando valores positivos e negativos)
    Long
    Short
    
    ----------------------
    UNSIGNED
        Pode somente armazenar numeros positivos, incluindo o '0'
        int: -2,147,483,648 a 2,147,483,647
        unsigned int: 0 a 4,294,967,295
        char: -128 a 127
        unsigned char: 0 a 255

        unsigned somente funciona para int e char

    */

    int numeroSinal = 3000000000; //este valor excede o valor de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal); //para imprimir variaveis unsigned, se utiliza %u


    /*
    ----------------------
    LONG
        Utilizado para aumentar a capacidade de armazenamento de dados primitivos, podendo ser usado em tipos int e double permitindo armazenar valores maiores, ou com maior precisão

        para fazer a leitura dos long int ou double, teremos que usar %li ou %ld

    */

    int numeroNormal = 2147483647; //valor maximo de int
    long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; //valor maior que o maximo de int

    printf("Numero grande atualizado (long int): %ld\n", numeroGrande); //para entendermos o motivo desta linha não sair como desejamos, teremos que utilizar uma função

    printf("Tamanho de int: %u bytes\n", sizeof(int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de  long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double: %u bytes\n", sizeof(long double));

    /*
    percebesse que int e long int, ambos tem 4 bytes de tamanho, então para que o numero grande atualizado aparecesse, a variavel teria que ser long long int, e não somente long int

    na verdade o tamanho e long int pode variar dependendo do compilador, é bom estar sempre de olho nesseas especificações
    */

    long long int numeroGRande = 2147483648; //variavel atualizada
    printf("Numero grande atualizado (long long int): %lld\n", numeroGRande);//%lld pq é long long int (int é Decimal, por isso o 'd')

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    /*
    no vs code o long double não vai funcionar, vai dar uma variavel zerada, no gitHub codespace, ele vai mostrar, porem o final do numero decimal será diferente, por inconsistencia do compilador (lembrando que o github codespace compila em ubuntu)
    */

    unsigned long int numeroGrandePositivo = 4000000000; //conseguiu tratar a informação
    unsigned int numeroPositivo = 4000000000;//conseguiu tratar a informação
    numeroGrande = 4000000000;//não conseguiu tratar a informação (long int)
    numeroGRande = 4000000000;//conseguiu tratar a informação (long long int)
    int numero = 4000000000;//não conseguiu tratar a informação
    //pode mudar o long int dependendo do compilador

    printf("Numero positivo grande %lu\n", numeroGrandePositivo);
    printf("Numero positivo %u\n", numeroPositivo);
    printf("Numero grande %ld\n", numeroGrande);
    printf("Numero grande2 %lld\n", numeroGRande);
    printf("Numero %d\n", numero);

    /*
    ----------------------
    SHORT
        Short vai ser usado em momentos em que não precisariamos de usar tanto espaço na memoria quanto usariamos com a variavel normal, o short era mais usado antigamente quando os computadores não tinham tanta memoria
    */

    short int numeroPequeno = 32767; //valor maximo de short int
    printf("Numero pequeno (Short int): %d\n", numeroPequeno);

    numeroPequeno = 32768;
    printf("Numero pequeno atualizado(Short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das variaveis ***\n");
    printf("Short int: %lu B - int: %lu B - long long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}