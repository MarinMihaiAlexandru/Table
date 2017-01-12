#include<iostream>
#include<string>
#include<ctime>

using namespace std;

struct Triangles{int color;int piecesNumber;}triangle[24];
int board[15][14];
const int startup[15][14] =
{
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    13,14,15,16,17,18,80,80,19,20,21,22,23,24,
    42,55,55,57,43,55,0,70,43,55,55,55,55,42,
    42,55,55,57,43,55,0,70,43,55,55,55,55,42,
    42,55,55,57,43,55,0,70,43,55,55,55,55,55,
    42,55,55,57,55,56,0,70,43,55,55,55,55,55,
    42,55,55,57,55,56,0,70,43,55,55,55,55,55,
      0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    43,55,55,57,55,56,0,70,42,55,55,55,55,55,
    43,55,55,57,55,56,0,70,42,55,55,55,55,55,
    43,55,55,57,42,55,0,70,42,55,55,55,55,55,
    43,55,55,57,42,55,0,70,42,55,55,55,55,43,
    43,55,55,57,42,55,0,70,42,55,55,55,55,43,
    12,11,10,9 ,8 ,7 ,80,80,6 ,5 ,4 ,3 ,2 ,1 ,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};
void diceRoll(int&dice1,int&dice2)
{
    srand(time(NULL));
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    cout<<"Dice rolls: "<<dice1<<"  "<<dice2;cout<<endl;
}
void setup()
{
    int i, j;
    for (i=0;i<15;i++)
    {
        for (j=0;j<14;j++)
        {
            board[i][j]=startup[i][j];
            //cout<<startup[i][j]<<" ";
        }
        //cout<<endl;
    }
    board[0][0]=0;board[0][1]=0;cout<<board[0][0]<<board[0][1]<<endl;
    triangle[1].color=2;triangle[1].piecesNumber=2;
    triangle[6].color=1;triangle[6].piecesNumber=5;
    triangle[8].color=1;triangle[8].piecesNumber=3;
    triangle[12].color=2;triangle[12].piecesNumber=5;
    triangle[13].color=1;triangle[13].piecesNumber=5;
    triangle[17].color=2;triangle[17].piecesNumber=3;
    triangle[19].color=2;triangle[19].piecesNumber=5;
    triangle[24].color=1;triangle[24].piecesNumber=2;
}
void printBoard()
{
    int i,j;
    for(i=0;i<15;i++)
    {
        {for(j=0;j<14;j++)
            if(board[i][j]==80)
                cout<<" ";
            else if(board[i][j]==0)
                cout<<"   ";
            else if(board[i][j]==70)
                cout<<" ";
            else if(board[i][j]==57)
                cout<<"    ";
            else if(board[i][j]==55)
                cout<<"   ";
            else if(board[i][j]==56)
                cout<<"  ";
            else if(board[i][j]==1)
                cout<<" 01";
            else if(board[i][j]==2)
                cout<<" 02";
            else if(board[i][j]==3)
                cout<<" 03";
            else if(board[i][j]==4)
                cout<<" 04";
            else if(board[i][j]==5)
                cout<<" 05";
            else if(board[i][j]==6)
                cout<<" 06";
            else if(board[i][j]==7)
                cout<<" 07";
            else if(board[i][j]==8)
                cout<<" 08";
            else if(board[i][j]==9)
                cout<<" 09";
            else if(board[i][j]==10)
                cout<<" 10";
            else if(board[i][j]==11)
                cout<<" 11";
            else if(board[i][j]==12)
                cout<<" 12";
            else if(board[i][j]==13)
                cout<<" 13";
            else if(board[i][j]==14)
                cout<<" 14";
            else if(board[i][j]==15)
                cout<<" 15";
            else if(board[i][j]==16)
                cout<<" 16";
            else if(board[i][j]==17)
                cout<<" 17";
            else if(board[i][j]==18)
                cout<<" 18";
            else if(board[i][j]==19)
                cout<<" 19";
            else if(board[i][j]==20)
                cout<<" 20";
            else if(board[i][j]==21)
                cout<<" 21";
            else if(board[i][j]==22)
                cout<<" 22";
            else if(board[i][j]==23)
                cout<<" 23";
            else if(board[i][j]==24)
                cout<<" 24";
            else if(board[i][j]==42)
                cout<<" W";
            else if(board[i][j]==43)
                cout<<" B";
        }
        cout<<endl;
    }
    diceRoll(i,j);
}
int main ()
{
    board[0][0]=0;board[0][1]=0;
    cout<<"Commands: ";cout<<endl;
    cout<<"exit, abort, quit = quit";cout<<endl;
    cout<<"print = displays the board";cout<<endl;
    cout<<"new = new game";cout<<endl;
    cout<<endl;
    string passd;
    setup();board[0][0]=0;board[0][1]=0;
    cout<<board[0][0]<<board[0][1];cout<<endl;
    cout<<startup[0][0]<<startup[0][1];
    while (1)
    {
        getline (cin,passd);
        if(passd.substr(0,4)=="exit"||passd.substr(0,5)=="abort"||passd.substr(0,4)=="quit")
        {
            break;
        }
        if(passd.substr(0,5)=="print")
        {
            printBoard();cout<<board[0][0]<<board[0][1];cout<<endl;
        }
        if(passd.substr(0,3)=="new")
        {
            setup();
        }
    }

}
