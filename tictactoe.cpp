#include <iostream>
#include <bits/stdc++.h>
#include<ctime>
#include<random>
using namespace std;

char board[9] = {'1','2','3','4','5','6','7','8','9'};
void computer_player(){
    srand(time(0));
    int choice;
    do{
        choice = rand() % 10;
    }while(board[choice]=='O' || board[choice]=='X');
    board[choice]='O';
    
}

void x_player(){
    while(true){
        int choice;
        cout<<"Select the position(1-9)"<<endl;
        cin>>choice;
        choice--;
        if(choice < 0 || choice > 8){
            cout<<"Please select valid position"<<endl;
        }
        else if(board[choice]=='O' || board[choice]=='X'){
            cout<<"Please select empty position"<<endl;
        }
        else{
            board[choice] = 'X';
            break;
        }
    }
}

void o_player(){
    while(true){
        int choice;
        cout<<"Select the position(1-9)"<<endl;
        cin>>choice;
        choice--;
        if(choice < 0 || choice > 8){
            cout<<"Please select valid position"<<endl;
        }
        else if(board[choice]=='O' || board[choice]=='X'){
            cout<<"Please select empty position"<<endl;
        }
        else{
            board[choice] = 'O';
            break;
        }
    }
}

int count_board(char symbol){
    int count = 0;;
    for(int i = 0; i < 9; i++){
        if(board[i]==symbol){
            count++;
        }
    }
    return count;
}

char check_winner(){
    if(board[0]==board[1] && board [1]==board[2]){
        return board[0];
    }
    if(board[3]==board[4] && board [4]==board[5]) {
        return board[3];
    }
    if(board[6]==board[7] && board [7]==board[8]) {
        return board[6];
    }
    if(board[0]==board[3] && board [3]==board[6]) {
        return board[0];
    }
    if(board[1]==board[4] && board [4]==board[7]) {
        return board[1];
    }
    if(board[2]==board[5] && board [5]==board[8]) {
        return board[2];
    }
    if(board[0]==board[4] && board [4]==board[8]) {
        return board[0];
    }
    if(board[2]==board[4] && board [4]==board[6]) {
        return board[2];
    }
    if(count_board('X') + count_board('O') < 9) {
        return 'C';
    }
    else {
        return 'D';
    }
}

void show_board(){
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"   "<<board[0]<<"   |   "<<board[1]<<"   |   "<<board[2]<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"   "<<board[3]<<"   |   "<<board[4]<<"   |   "<<board[5]<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"   "<<board[6]<<"   |   "<<board[7]<<"   |   "<<board[8]<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
}

void comp_vs_player(){
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    while(true){
        system("cls");
        show_board();
        if(count_board('X') == count_board('O')){
           cout<<name<<"'s turn"<<endl;
           x_player();
        }
        else{
            cout<<"Computer's turn"<<endl;
            computer_player();
        }
        char winner = check_winner();
        if(winner=='X'){
            system("cls");
            show_board();
            cout<<name<<" wins the game"<<endl;
            break;
        }
        else if(winner=='O'){
            system("cls");
            show_board();
            cout<<"Computer wins the game"<<endl;
            break;
        }
        else if(winner=='D'){
            cout<<"Game is a draw"<<endl;
            break;
        }
    }
}

void player_vs_player(){
    string name1,name2;
    cout<<"Enter 'X' player name:"<<endl;
    cin>>name1;
    cout<<"Enter 'O' player name:"<<endl;
    cin>>name2;
    while(true){
        system("cls");
        show_board();
        if(count_board('X') == count_board('O')){
           cout<<name1<<"'s turn"<<endl;
           x_player();
        }
        else{
            cout<<name2<<"'s turn"<<endl;
            o_player();
        }
        char winner = check_winner();
        if(winner=='X'){
            system("cls");
            show_board();
            cout<<name1<<" wins the game"<<endl;
            break;
        }
        else if(winner=='O'){
            system("cls");
            show_board();
            cout<<name2<<" wins the game"<<endl;
            break;
        }
        else if(winner=='D'){
            cout<<"Game is a draw"<<endl;
            break;
        }
    }

}

int main(){
    cout<<"1.Computer vs Player"<<endl;
    cout<<"2.Player vs Player"<<endl;
    cout<<"Select Mode(1-2)"<<endl;
    int mode;
    cin>>mode;
    switch(mode){
        case 1:
            comp_vs_player();
            break;
        case 2:
            player_vs_player();
            break;
        default:
            cout<<"Please select valid mode"<<endl;
            break;
    }
    return 0;
}