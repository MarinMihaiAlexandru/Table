#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
using namespace std;

struct Triangles{int color;int piecesNumber;int quarter;}triangle[24];
int board[7][14];
const int startup[7][14] =
{
    53,53,53,53,53,53,53,53,53,53,53,53,53,53,
    1 ,2 ,3 ,4 ,5 ,6 ,51,51,7 ,8 ,9 ,10,11,12,
    41,53,53,54,42,53,52,51,42,53,53,54,53,41,
    //41,53,53,54,42,53,53,51,42,53,53,53,53,41,
    //41,53,53,54,42,53,53,51,42,53,53,53,53,53,
    //41,53,53,54,53,52,53,51,42,53,53,53,53,53,
    //41,53,53,54,53,52,53,51,42,53,53,53,53,53,
      53,53,53,53,53,53,53,53,53,53,53,53,53,53,
    //42,53,53,54,53,52,53,51,41,53,53,53,53,53,
    //42,53,53,54,53,52,53,51,41,53,53,53,53,53,
    //42,53,53,54,41,53,53,51,41,53,53,53,53,53,
    //42,53,53,54,41,53,53,51,41,53,53,53,53,42,
    42,53,53,54,41,53,52,51,41,53,53,54,53,42,
    13,14,15,16,17,18,51,51,19,20,21,22,23,24,
    53,53,53,53,53,53,53,53,53,53,53,53,53,53,
};
bool checkMoveLegal(int i,int j,int x)
{
    if(x==i || x==j || x==i+j)
        return true;
    else return false;
}
void diceRoll(int&dice1,int&dice2)
{
    srand(time(NULL));
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    cout<<"Dice rolls: "<<dice1<<"  "<<dice2;cout<<endl;
}
void setup()
{
    int i,j;
    for (i=0;i<7;i++)
    {
        for (j=0;j<14;j++)
        {
            board[i][j]=startup[i][j];
            //cout<<startup[i][j]<<" ";
        }
        //cout<<endl;
    }

    //board[0][0]=0;board[0][1]=0;cout<<board[0][0]<<board[0][1]<<endl;
    triangle[1].color=1;triangle[1].piecesNumber=5;triangle[1].quarter=3;//a.push_back(1);
    triangle[5].color=2;triangle[5].piecesNumber=3;triangle[5].quarter=3;//a.push_back(5);
    triangle[7].color=2;triangle[7].piecesNumber=5;triangle[7].quarter=4;//a.push_back(7);
    triangle[12].color=1;triangle[12].piecesNumber=2;triangle[12].quarter=4;//a.push_back(12);
    triangle[13].color=2;triangle[13].piecesNumber=5;triangle[13].quarter=2;
    triangle[17].color=1;triangle[17].piecesNumber=3;triangle[17].quarter=2;
    triangle[19].color=1;triangle[19].piecesNumber=5;triangle[19].quarter=1;
    triangle[24].color=2;triangle[24].piecesNumber=2;triangle[24].quarter=1;
}
void printBoard()
{
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<14;j++)
            if(board[i][j]==54)
                cout<<"    ";
            else if(board[i][j]==53)
                cout<<"   ";
            else if(board[i][j]==52)
                cout<<"  ";
            else if(board[i][j]==51)
                cout<<" ";
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
            else if(board[i][j]==41)
                {
                    if(i<=2)
                    {
                        if(j==0)
                    cout<<" "<<triangle[board[1][j]].piecesNumber<<"W";
                    else cout<<triangle[board[1][j]].piecesNumber<<"W";
                    }
                    else {
                            if(j==0)
                    cout<<" "<<triangle[board[5][j]].piecesNumber<<"B";
                    else cout<<triangle[board[5][j]].piecesNumber<<"B";
                    }
                }
            else if(board[i][j]==42)
                {
                    if(i<=2)
                    {
                        if(j==0)
                    cout<<" "<<triangle[board[1][j]].piecesNumber<<"B";
                    else cout<<triangle[board[1][j]].piecesNumber<<"B";
                    }
                    else {
                            if(j==0)
                    cout<<" "<<triangle[board[5][j]].piecesNumber<<"B";
                    else cout<<triangle[board[5][j]].piecesNumber<<"B";
                    }
                }
        cout<<endl;
    }
}
int main ()
{
    int i,j,dice1,dice2,nr1,nr2;
    cout<<"Commands: ";cout<<endl;
    cout<<"exit, abort, quit = quit";cout<<endl;
    cout<<"print = displays the board";cout<<endl;
    cout<<"new = new game";cout<<endl;
    cout<<endl;
    string passd,half1,half2;
    setup();triangle[24].piecesNumber=2;
    triangle[24].color=2;triangle[24].piecesNumber=2;triangle[24].quarter=1;
    while (1)
    {
        diceRoll(dice1,dice2);
        board[0][0]=0;board[0][1]=0;board[0][2]=0;
        for(i=1;i<=24;i++)
            cout<<triangle[i].color<<" ";
        cout<<endl;
        for(i=1;i<=24;i++)
            cout<<triangle[i].piecesNumber<<" ";
        cout<<endl;
        for(i=1;i<=24;i++)
            cout<<triangle[i].quarter<<" ";
        getline (cin,passd);
        if(passd.substr(0,4)=="exit"||passd.substr(0,5)=="abort"||passd.substr(0,4)=="quit")
        {
            break;
        }
        if(passd.substr(0,5)=="print")
        {
            printBoard();
            cout<<"Dice rolls: "<<dice1<<"  "<<dice2;cout<<endl;
        }
        if(passd.substr(0,3)=="new")
        {
            setup();
        }
        if(((passd.substr(0,1)>="1"&&passd.substr(0,1)<="9")||(passd.substr(0,2)>="10"&&passd.substr(0,2)<="24"))&&((passd.substr(2,1)>="1"&&passd.substr(2,1)<="9")||(passd.substr(2,2)>="10"&&passd.substr(2,2)<="24")))
        {
            if(passd.length()==4)
            {
                half1=passd.substr(0,2);half2=passd.substr(2,2);
                //nr1=atoi(half1);nr2=atoi(half2);
            }
            if(passd.length()==3)
            {
                if(passd.substr(0,2)<="24")
                     {half1=passd.substr(0,2);half2=passd.substr(2,1);}
                else {half1=passd.substr(0,1);half2=passd.substr(1,2);}
                //nr1=atoi(half1);nr2=atoi(half2);
            }
            if(passd.length()==2)
            {
                half1=passd.substr(0,1);half2=passd.substr(1,1);
                //nr1=atoi(half1);nr2=atoi(half2);
            }
            //if(checkMoveLegal(dice1,dice2)==true)
        }
    }
}
