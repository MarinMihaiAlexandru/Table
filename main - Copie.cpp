#include<iostream>
#include <string>

using namespace std;

int board[17][17];

const int startup[15][15] =
{
    //40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    13,14,15,16,17,18,0,0,0,19,20,21,22,23,24,
    0,42,43,0,0,0,0,0,0,0,43,0,0,42,0,
    0,42,43,0,0,0,0,0,0,0,43,0,0,42,0,
    0,42,43,0,0,0,0,0,0,0,43,0,0,0 ,0,
    0,42,0 ,0,0,0,0,0,0,0,43,0,0,0, 0,
    0,42,0 ,0,0,0,0,0,0,0,43,0,0,0, 0,
      0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,43,0 ,0,0,0,0,0,0,0,42,0,0,0 ,0,
    0,43,0 ,0,0,0,0,0,0,0,42,0,0,0 ,0,
    0,43,42,0,0,0,0,0,0,0,42,0,0,0 ,0,
    0,43,42,0,0,0,0,0,0,0,42,0,0,43,0,
    0,43,42,0,0,0,0,0,0,0,42,0,0,43,0,
    12,11,10,90,80,70,0,0,0,60,50,40,30,20,10,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    //40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40
};
void setup ()
{
    int i, j;
    for (i = 0; i < 17; i++)
    {
        for (j = 0; j < 17; j++)
        {
            board[i][j] = startup[i][j];
        }
    }
}
void printb ()
{
    int a, b;
    string piece;
    for (a=0;a<17;a++)
    {
        cout << endl;
        for (b = 0; b < 17; b++)
        {
            switch (board[a][b])
            {
            case 0:
                piece = ' ';
                break;
            case 1:
                piece = '1';
                break;
            case 2:
                piece = '2';
                break;
            case 3:
                piece = '3';
                break;
            case 4:
                piece = '4';
                break;
            case 5:
                piece = '5';
                break;
            case 6:
                piece = '6';
                break;
            case 7:
                piece = '7';
                break;
            case 8:
                piece = '8';
                break;
            case 9:
                piece = '9';
                break;
            case 10:
                piece = "10";
                break;
            case 11:
                piece = "11";
                break;
            case 12:
                piece = "12";
                break;
            case 13:
                piece = "13";
                break;
            case 14:
                piece = "14";
                break;
            case 15:
                piece = "15";
                break;
            case 16:
                piece = "16";
                break;
            case 17:
                piece = "17";
                break;
            case 18:
                piece = "18";
                break;
            case 19:
                piece = "19";
                break;
            case 20:
                piece = "20";
                break;
            case 21:
                piece = "21";
                break;
            case 22:
                piece = "22";
                break;
            case 23:
                piece = "23";
                break;
            case 24:
                piece = "24";
                break;
            case 40:
                piece = '_';
                break;
            case 41:
                piece = '|';
                break;
            case 42:
                piece = 'W';
                break;
            case 43:
                piece = 'B';
                break;
            cout <<" "<< piece <<" ";
            }
       }
       cout << endl << endl;
    }
}
int main ()
{
    int i, j;
    /*for (i = 0; i < 17; i++)
    {
        for (j = 0; j < 17; j++)
        {
            cout<<" "<<startup[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(i=0;i<15;i++)
    {
        {for(j=0;j<15;j++)
            if(startup[i][j]==0)
                cout<<" ";
            else if(startup[i][j]==10)
                cout<<" 10";
            else if(startup[i][j]==20)
                cout<<" 20";
            else if(startup[i][j]==30)
                cout<<" 30";
            else if(startup[i][j]==40)
                cout<<" 40";
            else if(startup[i][j]==50)
                cout<<" 50";
            else if(startup[i][j]==60)
                cout<<" 60";
            else if(startup[i][j]==70)
                cout<<" 70";
            else if(startup[i][j]==80)
                cout<<" 80";
            else if(startup[i][j]==90)
                cout<<" 90";
            else if(startup[i][j]==10)
                cout<<" 10";
            else if(startup[i][j]==11)
                cout<<" 11";
            else if(startup[i][j]==12)
                cout<<" 12";
            else if(startup[i][j]==13)
                cout<<" 13";
            else if(startup[i][j]==14)
                cout<<" 14";
            else if(startup[i][j]==15)
                cout<<" 15";
            else if(startup[i][j]==16)
                cout<<" 16";
            else if(startup[i][j]==17)
                cout<<" 17";
            else if(startup[i][j]==18)
                cout<<" 18";
            else if(startup[i][j]==19)
                cout<<" 19";
            else if(startup[i][j]==20)
                cout<<" 20";
            else if(startup[i][j]==21)
                cout<<" 21";
            else if(startup[i][j]==22)
                cout<<" 22";
            else if(startup[i][j]==23)
                cout<<" 23";
            else if(startup[i][j]==24)
                cout<<" 24";
            /*else if(startup[i][j]==40)
                cout<<" -";
            else if(startup[i][j]==41)
                cout<<" |";*/
            else if(startup[i][j]==42)
                cout<<" W";
            else if(startup[i][j]==43)
                cout<<" B";
        }
        cout<<endl;
    }
    //setup();printb();





}
