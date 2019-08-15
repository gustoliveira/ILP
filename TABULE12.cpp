#include <iostream>
using namespace std;

int main () {

    int movimentos,passos=0,p1=4,p2=4;
    int tab[8][8]={};
    tab[2][2]=1;
    tab[4][1]=1;
    tab[4][2]=1;
    tab[3][5]=1;
    cin >> movimentos;
    for(int i=0;i<movimentos;i++){
        int mov;
        cin >> mov;
        switch(mov){
            case 1: {p1-=2;p2+=1;}
                break;
            case 2: {p1-=1;p2+=2;}
                break;
            case 3: {p1+=1;p2+=2;}
                break;
            case 4: {p1+=2;p2+=1;}
                break;
            case 5: {p1+=2;p2-=1;}
                break;
            case 6: {p1+=1;p2-=2;}
                break;
            case 7: {p1-=1;p2-=2;}
            break;
            case 8: {p1-=2;p2-=1;}
            break;
        }
        if(tab[p1][p2]==1){passos++;break;}
        else passos++;
    }
    cout << passos << endl;

    return 0;
}
