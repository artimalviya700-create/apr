// RATE IN A MAZE
#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>>&mat,int r,int c,string path,vector<string> &ans){
int n=mat.size();
if(r<0||c<0||r>=n||c>=n||mat[r][c]==0||mat[r][c]==-1){
    return;

}
if(r==n-1&& c==n-1){
    ans.push_back(path);
    return ;
}
mat[r][c]=-1;
    helper(mat,r+1,c,path+"D",ans);//down
    helper(mat ,r-1,c,path+"U",ans);//up
    helper(mat,r,c-1,path+"L",ans);//left
    helper(mat,r,c+1,path+"R",ans);//right
 mat[r][c]=1;//unvisited

}
vector<string>findpath(vector<vector<int>>& mat){
vector<string> ans;
if(mat.size()==0||mat[0][0]==0){
    return ans;
}
string path="";
// vector<vector<bool>>vis(n,vector<bool>(n,false));
helper(mat,0,0,path,ans);
return ans ;

}
int main() {
    // 2D Matrix (Grid) to test the maze
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> result = findpath(maze);

    // Print the output paths
    if (result.empty()) {
        cout << "No path found!" << endl;
    } else {
        cout << "Possible paths for the rat: " << endl;
        for (string path : result) {
            cout << path << " ";
        }
        cout << endl;
    }

    return 0;
}