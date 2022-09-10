#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class global_chess
{
public:
    string board[5][5];
public:
    global_chess()
    {
        cout<<"***Player A to be at bottom and Player B to be at top***"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                this->board[i][j]="e";
            }
        }
    }
    void display()
    {
        cout<<endl;
        for(int i=0;i<5;i++){
                cout<<"\t";
            for(int j=0;j<5;j++){
                if(board[i][j]=="e"){
                    cout<<"-"<<" ";
                }
            }
            cout<<endl;
        }
    }
};

class participent : public global_chess
{
private:
    char id;
    string input_char[5];
public:
    participent(char id)
    {
        if(id=='A' || id=='B')
            this->id=id;
        else
            cout<<"Error01: Player name should be either A or B."<<endl;
    }
    void input()
    {
        cout<<"Player-"<<id<<": ";
        for(int i=0;i<5;i++){
            cin>>input_char[i];
        }

    }
    void initial_propogate(char p_id)
    {
        if(p_id=='A'){
            for(int i=0;i<5;i++){
                board[0][i]=input_char[i];
            }
        }else if(p_id=='B'){
            for(int i=0;i<5;i++){
                board[4][i]=input_char[i];
            }
        }
        else{
            cout<<"Error01: Player name should be either A or B."<<endl;
        }
    }
};

int main()
{
    cout<<"||Welcome to the chess game.This is a test assignment for HitWicket by||"<<endl;
    cout<<"||Student name:        Nirbhay S Gandhi                               ||"<<endl;
    cout<<"||Reg. No:             19BCE0273        (VIT-Vellore)                 ||\n"<<endl;

    global_chess board1;
    board1.display();
    return 0;
}
