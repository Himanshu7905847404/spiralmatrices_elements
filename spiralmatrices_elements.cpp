 // spiral matric elements print from a given matrices given by user

#include <iostream>
#include<vector>
using namespace std;

void spiral_elements(vector<vector<int>>& V){
    
    int left = 0;
    int right=V[0].size()-1;
    int top=0;
    int bottom = V.size()-1;
    int direction = 0;
    while(left<=right and top<=bottom){
        if (direction == 0){
            for(int j = left;j<=right;j++){
                cout<<V[top][j]<<" ";
            }
            top++;
        }
        else if(direction == 1){
            for(int i=top;i<=bottom;i++){
                cout<<V[i][right]<<" ";
                
            }
            right--;
        }
        else if(direction == 2){
            for(int j=right;j>=left;j--){
                cout<<V[bottom][j]<<" ";
                
            }
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--){
                cout<<V[i][left]<<" ";
            }
            left++;
        }
        direction = (direction + 1)%4;
    }
    
    
}

int main()
{
    int n,m;
    cout<<"\n\tEnter the row and column\n";
    cin>>n>>m;
    vector<vector<int>>V(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>V[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<V[i][j]<<" ";
        }cout<<endl;
    }
    
    spiral_elements(V);
    
    return 0;
}
