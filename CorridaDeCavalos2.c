#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { 
  // Inicializa gerador de números aleatórios
  srand( time(0) ) ; 

  // Antes da corrida a distância percorrida por cada cavalo é zero
  int distanciaGarrucha = 0;
  int distanciaSoberano = 0;
  int distanciaValente = 0;
  int distanciaChampanhe = 0;

  // Captura 10 momentos da corrida
      for (int i=1; i <= 10; i++) {
     printf("---------------------------------\n") ;
     printf("Momento %i\n", i) ;
     
     // Atualiza distancia percorrida de cada cavalo
     distanciaGarrucha += (rand() % 50) + 1 ;
     distanciaSoberano += (rand() % 50) + 1 ;
     distanciaValente += (rand() % 50) + 1 ;
     distanciaChampanhe += (rand() % 50) + 1 ;

     // Mostra distancia percorrida por cada cavalo
     printf("- Garrucha percorreu %d metros\n", distanciaGarrucha) ;
     printf("- Soberano percorreu %d metros\n", distanciaSoberano) ;
     printf("- Valente percorreu %d metros\n", distanciaValente) ;
     printf("- Champanhe percorreu %d metros\n", distanciaChampanhe) ;
     sleep(1) ;    // No compilador online troque por sleep(3000) ;
  }

  printf("---------------------------------\n") ;
  printf("Fim da corrida!\n") ;

  // Verifica quem foi o vencedor da corrida

 if (distanciaValente > distanciaGarrucha && distanciaValente > distanciaSoberano && distanciaValente > distanciaChampanhe) { 
      printf ("Valente venceu a corrida!"); }
  if (distanciaGarrucha > distanciaChampanhe && distanciaGarrucha > distanciaSoberano) { 
      printf ("Valente venceu a corrida!"); }
  if (distanciaSoberano > distanciaChampanhe) {
      printf ("Valente venceu a corrida!");}
  else {
      printf ("Valente venceu a corrida!");}