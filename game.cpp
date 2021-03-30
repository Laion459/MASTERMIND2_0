#include "game.h"
/**
 * Gera o senha aleatoria
 * @param lengthKey tamanho da senha
 * @return retorna senha aleatoria
 */
std::string randomKey(int lengthKey){
    std::string randomKey;

    srand(time(nullptr));

    for (int i=0; i < lengthKey; i++){
        int index = rand() % 5;
        randomKey += KEYCOLORS[index];
    }
    return randomKey;
}
/**
 * valida a entrada do player
 * @param input string de entrada do player
 */
void validateInputToPlayer(std::string input){
    for (int i = 0; i < input.size() ; i++) {
        for (int j = 0; j < input.size(); j++) {
            if (input[i] == KEYCOLORS[i] || input[i] == KEYCOLORS[j]){

            } else{
                std::cout<<"Error! Cores escolhidas inexitentes! "<<std::endl;
                inputPlayer();
            }
        }
    }
}
/**
 * entrada de dados do player
 * @return salva a entrada validada do player
 */
std::string inputPlayer(){
    std::string input;
    std::cout<<" Digite chave de cores pelas iniciais em ingles: Sao 4 cores a serem escolhidas! "<<std::endl;

    do{
        std::cin >>input;
    } while (input.length() != 4);
    //validateInputToPlayer(input);
    return input;
}

std::string verificador(std::string input,std::string randomKey){
    std::string win;
    if (input == randomKey){
        win = "Win";
    } else{
        pins(input,randomKey);
    }
    return win;
}

void pins(std::string input,std::string randomKey){
    std::string test;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == randomKey[i]){
            test = "B";
        } else{
            testPin(input,randomKey);
        }
    }
}

std::string testPin(std::string input, std::string randomKey){
    std::string keys;
    for (int i = 0; i < input.size() ; i++) {
        for (int j = 0; j < randomKey.size(); j++) {
            if (input[i] == randomKey[j]){
                keys[i] = 'W';
            } else{
                keys[i] = 'N';
            }
        }
    }
    return keys;
}
std::string gameOver(int number){
    if (number >= 12){
        std::cout<<" GAME OVER "<<std::endl;
        abort();
    }
}
