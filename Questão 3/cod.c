/**
  * Felipe Derkian de Sousa Freitas
  * Compilação: gcc -pthread cod.c -o cod
  **/

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>


void * ThreadPRIMO1(){

    int inicio = 0;
    int fim = 25000;

    int i , j , cont;

    for(i=inicio ; i<fim ; i++){

        if(i<2){
            continue;
        }else if(i==2){
            printf("\t%d\n",i);
        }else if(i%2 != 0){

            cont = 0;
            for(j=1 ; j<=i ; j++){
                if(i%j == 0){
                    cont++;
                }
            }

            if(cont == 2){
                printf("\t%d\n",i);
            }
        }
    }
}

void * ThreadPRIMO2(){

    int inicio = 25000;
    int fim = 50000;

    int i , j , cont;

    for(i=inicio ; i<fim ; i++){

        if(i<2){
            continue;
        }else if(i==2){
            printf("\t%d\n",i);
        }else if(i%2 != 0){

            cont = 0;
            for(j=1 ; j<=i ; j++){
                if(i%j == 0){
                    cont++;
                }
            }

            if(cont == 2){
                printf("\t%d\n",i);
            }
        }
    }
}

void * ThreadPRIMO3(){

    int inicio = 50000;
    int fim = 75000;

    int i , j , cont;

    for(i=inicio ; i<fim ; i++){

        if(i<2){
            continue;
        }else if(i==2){
            printf("\t%d\n",i);
        }else if(i%2 != 0){

            cont = 0;
            for(j=1 ; j<=i ; j++){
                if(i%j == 0){
                    cont++;
                }
            }

            if(cont == 2){
                printf("\t%d\n",i);
            }
        }
    }
}

void * ThreadPRIMO4(){

    int inicio = 75000;
    int fim = 100000;

    int i , j , cont;

    for(i=inicio ; i<fim ; i++){

        if(i<2){
            continue;
        }else if(i==2){
            printf("\t%d\n",i);
        }else if(i%2 != 0){
            cont = 0;
            for(j=1 ; j<=i ; j++){
                if(i%j == 0){
                    cont++;
                }
            }

            if(cont == 2){
                printf("\t%d\n",i);
            }
        }
    }
}

int main(){

    pthread_t t1, t2, t3, t4;

    pthread_create(&t1,NULL,ThreadPRIMO1,NULL);
    pthread_create(&t2,NULL,ThreadPRIMO2,NULL);
    pthread_create(&t3,NULL,ThreadPRIMO3,NULL);
    pthread_create(&t4,NULL,ThreadPRIMO4,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
    pthread_join(t4,NULL);

    return 0;
}
