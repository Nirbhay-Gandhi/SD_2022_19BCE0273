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
                    //cout<<
                    cout<<"-"<<" ";
                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    global_chess board1;
    board1.display();
    return 0;
}
