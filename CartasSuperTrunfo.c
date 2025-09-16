#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  int populacao, pontosturisticos;
  char carta, estado, cidade;
  float area, pib;
    
    printf ("digite a carta\n");
    scanf ("%s", &carta);
    
    printf ("digite o estado\n");
    scanf ("%s", &estado);
    
    printf ("digite a cidade\n");
    scanf ("%s", &cidade);
    
    printf ("digite a população\n");
    scanf ("%d", &populacao);
    
    printf ("digite o número de pontos turisticos\n");
    scanf ("%d", &pontosturisticos);
    
    printf ("digite a área\n");
    scanf ("%f", &area);
    
    printf ("digite o pib\n");
    scanf ("%f", &pib);

}

return 0;
} 
