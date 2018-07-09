/**
  * Felipe Derkian de Sousa Freitas - 1201424418
  **/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;

list<string> listaTarefas;

void opcoes();
void removerTarefas();
void addTarefas();

void opcoes(){
    system("cls");

    printf("\t\tMenu:\n\n");

    printf("1 - Inserir tarefas na lista.\n2 - Remover tarefas.\n3 - Sair.\n\nOpcao: ");
    int opcao;
    cin >> opcao;

    switch (opcao){
        case 1:
            addTarefas();
        break;
        case 2:
            removerTarefas();
        break;
        case 3:
            printf("\n\nEncerrando...\n\n");
            exit(1);
        break;
        default:
            printf("Opcao Invalida....\n\n");
            system("pause");
            opcoes();
        break;
    }
}

void addTarefas(){
    system("cls");

    printf("Quantas tarefas deseja adicionar: ");
    int qtd;
    cin >> qtd;
    if(qtd < 1){
        printf("Nao é possivel adicionar nenhuma tarefa, voce digitou %d.\ntente novamente.\n",qtd);
        system("pause");
        addTarefas();
    }

    cout << endl;

    string tarefa;
    for(int i=0 ; i<qtd ; i++){
        printf("Informe a %da tarefa: ",i+1);
        getchar();
        cin >> tarefa;
        listaTarefas.push_back(tarefa);
    }

    printf("\nDeseja adicionar mais tarefas? (S/N)");
    char p;
    cin >> p;

    if( p == 'S' || p == 's'){
        addTarefas();
    }else{
        opcoes();
    }

}

void removerTarefas(){
    system("cls");
    printf("\t\tRemovendo tarefas da lista\n\n");
    int i=1;

    while(!listaTarefas.empty()){
        cout << i << " --> " << listaTarefas.front() << endl;
        listaTarefas.pop_front();
        i++;
    }
    cout << endl;
    system("pause");
    opcoes();
}

int main(){
    opcoes();
    return 0;
}
