#include <iostream>
#include <ctime>

char getUserChoice(), getComputerChoice();  //因為兩者回傳值只需一個英文字母便可判斷輸贏故用char
void showChoice(char choice), chooseWinner(char player, char computer);

int main(){
    char player, computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do{
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 's' && player != 'p');  //run this function if the character of player equals neither r,p and s
    
    player = tolower(player);

    return player;
}
char getComputerChoice(){

    srand(time(nullptr));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';  //這邊的case皆會回傳值，所以不需要break
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){ //如果直接真的show choice，輸出的會是r, p, s三種答案，為求程式完整度，使用case以輸出相對應之回答
    switch(choice){
        case 'r': std::cout << "Rock\n";
                  break;  
        case 'p': std::cout << "Paper\n";
                  break;
        case 's': std::cout << "Scissors\n";
                  break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You lose!\n";
                    }
                    else if(computer == 's'){  //可以直接寫else，不過因狀況程度的對等性在此使用else if
                        std::cout << "You win!\n";
                    }
                    break;
        case 'p':   if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 's'){
                        std::cout << "You lose!\n";
                    }
                    else if(computer == 'r'){
                        std::cout << "You win!\n";
                    }
                    break;
        case 's':   if(computer == 's'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'r'){
                        std::cout << "You lose!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You win!\n";
                    }
                    break;
    }
}