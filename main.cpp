#include <iostream>
#include <string>
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
    vector<pair<string,string>> input_char1; //A
    vector<pair<string,string>> input_char2; //B
    string peice;
public:
    int get_index(string element,vector<pair<string,string>> input_char)
    {
        int current_pos=0;
        for(int k=0;k<5;k++){
            if(input_char[k].first==element){
                current_pos=k;
                break;
            }
        }
        return current_pos;
    }
    bool pre_process(int current_row,int current_col)
    {
        if(board[current_row][current_col]=="-")
            return true;
        else
            return false;
    }
    void movement(char player, string my_character, char next) //(A,P2,F)
    {
        if(player=='A')
        {
            //[4][i]
                    peice=my_character[0];
                    int current_pos=get_index(my_character,input_char1); //4
                    int current_row=input_char1[current_pos].second[0]-'0';
                    int current_col=input_char1[current_pos].second[1]-'0';

                    if(next=='F')//row down, same column {on looking from upwards}
                    {
                        string temp=board[current_row][current_col];
                        if(current_row==0)
                            cout<<"Error05 : Invalid Move"<<endl;
                        board[current_row][current_col]="-";
                        current_row--;
                        if(pre_process(current_row,current_col)){
                            board[current_row][current_col]=temp;
                            cout<<"Move Success!"<<endl;
                        }
                        else{
                            board[current_row][current_col]=temp;
                            cout<<"Wonderful Kill!"<<endl;
                        }
                    }
                    if(next=='L')//same row, column--
                    {
                        string temp=board[current_row][current_col];
                        if(current_col==0)
                            cout<<"Error05 : Invalid Move"<<endl;
                        else
                        {
                            board[current_row][current_col]="-";
                            current_col--;
                            if(pre_process(current_row,current_col)){
                                board[current_row][current_col]=temp;
                                cout<<"Move Success!"<<endl;
                            }
                            else{
                                board[current_row][current_col]=temp;
                                cout<<"Wonderful Kill!"<<endl;
                            }
                        }
                    }
                    if(next=='R')//same row, column++
                    {
                        string temp=board[current_row][current_col];
                        if(current_col==4)
                            cout<<"Error05 : Invalid Move"<<endl;
                        else
                        {
                            board[current_row][current_col]="-";
                            current_col++;
                            if(pre_process(current_row,current_col)){
                                board[current_row][current_col]=temp;
                                cout<<"Move Success!"<<endl;
                            }
                            else{
                                board[current_row][current_col]=temp;
                                cout<<"Wonderful Kill!"<<endl;
                            }
                        }
                    }
                    if(next=='B')//row up, same column {on looking from upwards}
                    {
                        string temp=board[current_row][current_col];
                        if(current_row==4)
                            cout<<"Error05 : Invalid Move"<<endl;
                        else
                        {
                            board[current_row][current_col]="-";
                            current_row--;
                            if(pre_process(current_row,current_col)){
                                board[current_row][current_col]=temp;
                                cout<<"Move Success!"<<endl;
                            }
                            else{
                                board[current_row][current_col]=temp;
                                cout<<"Wonderful Kill!"<<endl;
                            }
                        }
                    }
        }
        if(player=='B')
        {
           //[0][i]

                    peice=my_character[0];
                    int current_pos=get_index(my_character,input_char2); //4
                    int current_row=input_char2[current_pos].second[0]-'0';
                    int current_col=input_char2[current_pos].second[1]-'0';

                    if(next=='F')//row up, same column
                    {
                        string temp=board[current_row][current_col];
                        if(current_row==4)
                            cout<<"Error05 : Invalid Move"<<endl;
                        board[current_row][current_col]="-";
                        current_row++;
                        if(pre_process(current_row,current_col)){
                            board[current_row][current_col]=temp;
                            cout<<"Move Success!"<<endl;
                        }
                        else{
                            board[current_row][current_col]=temp;
                            cout<<"Wonderful Kill!"<<endl;
                        }
                    }
                    if(next=='L')//same row, column--
                    {
                        string temp=board[current_row][current_col];
                        if(current_col==0)
                            cout<<"Error05 : Invalid Move"<<endl;
                        else
                        {
                            board[current_row][current_col]="-";
                            current_col--;
                            if(pre_process(current_row,current_col)){
                                board[current_row][current_col]=temp;
                                cout<<"Move Success!"<<endl;
                            }
                            else{
                                board[current_row][current_col]=temp;
                                cout<<"Wonderful Kill!"<<endl;
                            }
                        }
                    }
                    if(next=='R')//same row, column++
                    {
                        string temp=board[current_row][current_col];
                        if(current_col==4)
                            cout<<"Error05 : Invalid Move"<<endl;
                        else
                        {
                            board[current_row][current_col]="-";
                            current_col++;
                            if(pre_process(current_row,current_col)){
                                board[current_row][current_col]=temp;
                                cout<<"Move Success!"<<endl;
                            }
                            else{
                                board[current_row][current_col]=temp;
                                cout<<"Wonderful Kill!"<<endl;
                            }
                        }
                    }
                    if(next=='B')//row up, same column
                    {
                        string temp=board[current_row][current_col];
                        if(current_row==0)
                            cout<<"Error05 : Invalid Move"<<endl;
                        else
                        {
                            board[current_row][current_col]="-";
                            current_row--;
                            if(pre_process(current_row,current_col)){
                                board[current_row][current_col]=temp;
                                cout<<"Move Success!"<<endl;
                            }
                            else{
                                board[current_row][current_col]=temp;
                                cout<<"Wonderful Kill!"<<endl;
                            }
                        }
                    }
        }
        else{
            cout<<"Error01: Player name should be either A or B."<<endl;
        }
    }
};

class participent : public avatars
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
                board[4][i]=input_char1[i].first;
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

    participent p('A','B');
    p.input('A');
    p.display();
    p.input('B');
    p.display();
    char play='0';
    int turn=0;
    do{
        if(turn==0)
        {
            cout<<"Player A chance---"<<endl;
            char moves;
            string avtr="";
            cout<<"Enter avatar to move: "<<endl;
            cin>>avtr;
            cout<<"Enter the next move(F/B/L/R)";
            cin>>moves;
            p.movement('A',avtr,moves);
            cout<<"Press any key to continue playing [Press '*' to terminate the game]";
            cin>>play;
            turn=1;
        }
        else
        {
            cout<<"Player B chance---"<<endl;
            char moves;
            string avtr;
            cout<<"Enter avatar to move: "<<endl;
            cin>>avtr;
            cout<<"Enter the next move(F/B/L/R)";
            cin>>moves;
            p.movement('B',avtr,moves);
            cout<<"Press any key to continue playing [Press '*' to terminate the game]";
            cin>>play;
            turn=0;
        }
    }while(play!='*');

    return 0;
}
