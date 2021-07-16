#include <iostream>

using namespace std;

int main()
{
    int n=3;
    int row[n]={0};
    int column[n]={0};
    int d[2]={0};
    string matrix[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        matrix[i][j]="  ";
    string player1,player2;
    cout<<"enter the name of the first player:"<<endl;
    cin>>player1;
    cout<<"enter the name of the second player:"<<endl;
    cin>>player2;
    int temp=(n*n);
    cout<<"        |      |     "<<endl;
    cout<<"  (0,0) |(0,1) |(0,2)"<<endl;
    cout<<" _______|______|______"<<endl;
    cout<<"  (1,0) |(1,1) |(1,2)"<<endl;
    cout<<" _______|______|______"<<endl;
    cout<<"  (2,0) |(2,1) |(2,2)"<<endl;
    cout<<" _______|______|______"<<endl;
    cout<<"        |      |     "<<endl;
    while(temp){
        cout<<player1<<" plz enter your coordinates"<<endl;
        int x,y;
        cin>>x>>y;
        row[x]++;column[y]++;
        if(x==y) d[0]++;
        if(x+y==n-1) d[1]++;
        matrix[x][y]="p1";
        for(int i=0;i<3;i++){
                cout<<" "<<matrix[i][0]<< " | "<<matrix[i][1]<< " | "<<matrix[i][2]<<endl;
                cout<<" ___|____|___"<<endl;
        }
        if(row[x]==n or column[y]==n or d[0]==n or d[1]==n){
            cout<<player1<<" won the game"<<endl;
            return 0;
        }
        temp--;
        if(temp==0){
            cout<<"game draw!"<<endl;
            return 0;
        }
        cout<<player2<<" plz enter your coordinates:"<<endl;
        cin>>x>>y;
        row[x]--;column[y]--;
        if(x==y) d[0]--;
        if(x+y==n-1) d[1]--;
        matrix[x][y]="p2";
        for(int i=0;i<3;i++){
                cout<<" "<<matrix[i][0]<< " | "<<matrix[i][1]<< " | "<<matrix[i][2]<<endl;
                cout<<" ___|____|___"<<endl;
        }
        if(row[x]==-n or column[y]==-n or d[0]==-n or d[1]==-n){
            cout<<player2<<" won the game"<<endl;
            return 0;
        }
        temp--;
        if(temp==0){
            cout<<"game draw!"<<endl;
            return 0;
        }
    }
    cout<<"game draw!"<<endl;
    return 0;
}
