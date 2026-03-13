// Typedef é um comando do C que permite criar um apelido (alias) para um tipo existente. Em vez de repetir struct nomeLongo toda vez, você define um nome curto e usa ele no lugar.



#include <stdio.h>
// Sem typedef — precisa escrever 'struct' toda vez
struct fichaPaciente {
    char nome[50];
    float peso;
    float altura;
};

// Com typedef — cria o apelido 'Paciente'
typedef struct {
    char nome[50];
    float peso;
    float altura;
} Paciente;

int main() {
    // Sem typedef:
    struct fichaPaciente p1;

    // Com typedef 
    Paciente p2;

    p2.peso   = 70.0;
    p2.altura = 1.75;

    printf("Peso: %.1f | Altura: %.2f\n", p2.peso, p2.altura);

    return 0;
}
