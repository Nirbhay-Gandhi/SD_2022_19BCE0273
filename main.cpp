#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class global_chess
{
public:
    string board[5][5];
    string status;
public:
    global_chess()
    {
        cout<<"***Player A to be at bottom and Player B to be at top***"<<endl;
        status="e"; //e means empty
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                this->board[i][j]=status;
            }
        }
    }
    void display()
    {
        cout<<endl;
        for(int i=0;i<5;i++){
                cout<<"\t";
            for(int j=0;j<5;j++){
                if(status=="e"){
                    cout<<"-"<<"  ";
                }else{
                    cout<<board[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
};

class avatars : public global_chess
{
public:
    vector<pair<string,string>> input_char1(5); //A
    vector<pair<string,string>> input_char2(5); //B
    string peice;
public:
    int get_index(string element)
    {
        int current_pos=0;
        for(int k=0;k<5;k++){
            if(input_char1[k]==character){
                current_pos=k;
                break;
            }
        }
        return current_pos;
    }
    void movement(char player, string my_character, char next) //(A,P2,F)
    {
        if(player=='A')
        {
            //[4][i]
            if(next=='B'){
                cout<<"Error02: Cannot move Backward further!"<<endl;
            }
            else{
                    peice=my_character[0];
                    int current_row=4;
                    int current_col=get_index(my_character); //we get i
                    if(next=='F')//row same col down
                    {
                        string temp=board[current_row][current_col];
                        current_row--;
                        board[]
                    }
            }
        }
        if(player=='B')
        {
            
        }
        else{
            cout<<"Error01: Player name should be either A or B."<<endl;
        }
    }
};

class participent : public global_chess, public avatars
{
private:
    char id1;
    char id2;
public:
    participent(char id1,char id2)
    {
        if(id1=='A' || id1=='B' && id2=='A' || id2=='B'){
            this->id1=id1;
            this->id2=id2;
        }
        else
            cout<<"Error01: Player name should be either A or B."<<endl;
    }
    void input(char p)
    {
        cout<<"Player-"<<p<<": ";
        if(p=='B'){
            for(int i=0;i<5;i++){
                string temp,tindex="";
                cin>>temp;
                tindex+="0";
                tindex+=to_string(i);
                input_char2.push_back(make_pair(temp,tindex));
            }
            for(int i=0;i<5;i++){
                board[0][i]=input_char2[i].first;
            }
        }else if(p=='A'){
            for(int i=0;i<5;i++){
                string temp,tindex="";
                cin>>temp;
                tindex+="0";
                tindex+=to_string(i);
                input_char2.push_back(make_pair(temp,tindex));
            }
            for(int i=0;i<5;i++){
                board[4][i]=input_char1[i]first;
            }
        }

    }
    /*void initial_propogate(char p_id)
    {
        if(p_id=='B'){
            for(int i=0;i<5;i++){
                board[0][i]=input_char[i];
            }
        }else if(p_id=='A'){
            for(int i=0;i<5;i++){
                board[4][i]=input_char[i];
            }
        }
        else{
            cout<<"Error01: Player name should be either A or B."<<endl;
        }
    }*/
};

int main()
{
    cout<<"||Welcome to the chess game.This is a test assignment for HitWicket by||"<<endl;
    cout<<"||Student name:        Nirbhay S Gandhi                               ||"<<endl;
    cout<<"||Reg. No:             19BCE0273        (VIT-Vellore)                 ||\n"<<endl;

    /**Initializing the game*/
    global_chess board1;
    board1.display();

    //player-A
    participent p('A','B');
    p.input('A');
    p.display();
    p.input('B');
    p.display();


    return 0;
}
