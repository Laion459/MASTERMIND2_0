#include "game.h"
/**
 * Gera o senha aleatoria
 * @param lengthRandomKey tamanho da senha
 * @return retorna senha aleatoria
 */
std::string randomKey(int lengthRandomKey){
    std::string randomKey;
    srand(time(nullptr));
    for (int i=0; i < lengthRandomKey; i++){
        int index = rand() % 6;
        randomKey += KEYCOLORS[index];
    }
    return randomKey;
}
/**
 * gera e salva a chave aleatoria principal do sistema
 * @return string com as chaves a ser adivinhada
 */
std::string randomKeySystem(){
    std::string keySystem = randomKey(4);
    return keySystem;
}
/*
 * boas vindas
 */
void welcom(){
    std::cout<<" **********         WELCOM         ***********"<<std::endl;
    std::cout<<" **********  It's MASTER MIND 2.0  ***********"<<std::endl;
    std::cout<<"                                              "<<std::endl;


}
/*
 * mensagem se vencer / chama menu
 */
void win(){
    std::cout<<" **********         You win!         ***********"<<std::endl;
    std::cout<<" **********  voce venceu com total:  ***********"<<std::endl;//<<funcaoTentativas()<<"x tentativas"
    std::cout<<"                                              "<<std::endl;
    menu();

}
/*
 * mensagem se perder/ chama menu
 */
void gameOver(){
    std::cout<<" **********         GAME OVER         ***********"<<std::endl;
    std::cout<<" **********       Used all lives      ***********"<<std::endl;
    std::cout<<"                                              "<<std::endl;
    menu();

}
/*
 * menu opcoes / menu principal
 * 1 para iniciar jogo
 * 2 para escolher tamanho da sequencia
 * 3 para escolher quantidade de vidas
 * 4 para encerrar o programa
 */
void menu(){
    int option = 0;
    std::cout<<" **** MENU ****"<<std::endl;
    std::cout<<" 1 voltar ao menu "<<std::endl;
    std::cout<<" 2 Sair "<<std::endl;
    std::cout<<" 3 incrivel "<<std::endl;
    std::cin>>option;
    switch (option) {
        case 1:
            //menu();
            std::cout<<" legal "<<std::endl;
            break;
        case 2:
            exit(0);
        case 3:
            abort();
    }
}
std::string inputPlayer(){
    std::string inputsPlayer;
    inputsPlayer = randomKey(4);
    return inputsPlayer;
}

