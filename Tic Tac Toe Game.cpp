#include<iostream>
using namespace std;

int main(){
    int i=0,choice,x,y,count=0;
    char mat[3][3]={'\0'};
    char X[]="X";
    char O[]="O";
    char win;
    char player1[10],player2[10];
    cout<<"Enter name of player1: ";
    cin>>player1;
    cout<<"\nEnter name of player2: ";
    cin>>player2;

    cout<<"\nStart the game:\n";
    cout<<"\n"<<player1<<" is 'X' and "<<player2<<" is 'O' \n";

    do{
        int player=i%2;
        cout<<"\nEnter coordinate of the box for player "<<player+1<<": ";
        cin>> x;
        cin>> y;
        cout<<"\n";
        if(x<0 || x>2 || y<0 || y>2){
            cout<<"ENTER VALID COORDINATE \n";
            i++;
        }
        else if(mat[x][y]!='\0'){
            cout<<"Already occupied, try other box \n";
            i++;
        }
        else{
            if(i%2==0){
                mat[x][y]=X[0];
            }
            else {
                mat[x][y]=O[0];
            }

        }
         cout<<"\n";
         for(int m=0;m<3;m++){
                for(int n=0;n<3;n++){
                    cout<<" "<<mat[m][n]<<" ";
         }
         cout<<"\n";
    }
          while(i>=4){
                if(mat[0][0]==mat[0][1]&&mat[0][1]==mat[0][2] &&mat[0][0]!='\0'&&mat[0][1]!='\0'&&mat[0][2]!='\0'){
                    win=mat[0][0];
                    count++;
                    break;
                }
                else if(mat[1][0]==mat[1][1]&&mat[1][1]==mat[1][2] &&mat[1][0]!='\0' &&mat[1][1]!='\0'&&mat[1][2]!='\0'){
                    win=mat[1][0];
                    count++;
                    break;
                }
                else if(mat[2][0]==mat[2][1]&&mat[2][1]==mat[2][2] &&mat[2][0]!='\0' &&mat[2][1]!='\0' &&mat[2][2]!='\0'){
                    win=mat[2][0];
                    count++;
                    break;
                }
                else if(mat[0][0]==mat[1][0]&&mat[1][0]==mat[2][0] &&mat[0][0]!='\0' &&mat[1][0]!='\0' &&mat[2][0]!='\0' ){
                    win=mat[0][0];
                    count++;
                    break;
                }
                else if(mat[0][1]==mat[1][1]&&mat[1][1]==mat[2][1] &&mat[0][1]!='\0' &&mat[1][1]!='\0' &&mat[2][1]!='\0'){
                    win=mat[0][1];
                    count++;
                    break;
                }
                else if(mat[0][2]==mat[1][2]&&mat[1][2]==mat[2][2] &&mat[0][2]!='\0' &&mat[1][2]!='\0' &&mat[2][2]!='\0'){
                    win=mat[0][2];
                    count++;
                    break;
                }
                else if(mat[0][0]==mat[1][1]&&mat[1][1]==mat[2][2] &&mat[0][0]!='\0'&&mat[1][1]!='\0' &&mat[2][2]!='\0'){
                   win=mat[0][0];
                    count++;
                    break;
                }
                else if(mat[0][2]==mat[1][1]&&mat[1][1]==mat[2][0] &&mat[0][2]!='\0'&&mat[1][1]!='\0'&&mat[2][0]!='\0'){
                    win=mat[0][2];
                    count++;
                    break;
                }
                else{
                    break;
                }

            }
            if(count>0){
                break;
            }
        i++;

    }while(i!=9);
    if(win==X[0]){
        cout<<"\n*********** "<<player1<<" is the winner! ***********\n";
    }
    else if(win==O[0]){
            cout<<"\n*********** "<<player2<<" is the winner! ***********\n";
    }
    if(count==0){
        cout<<"\n*********** Tied ***********"<<endl;
    }

}
