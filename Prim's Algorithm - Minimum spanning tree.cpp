#include<iostream>
using namespace std;
#include<queue>


class graph{
    public:

    int data_arr[25];
    int visited[25];
    int visited2[25];
    int adj_mat[25][25];
    int size;

    graph(int n){
        size=n;
    }

    void input_graph();
    void bfs();
    void dfs(int start);



   
};

void graph::input_graph(){
    for(int i=0; i<size; i++){
        cout<<"Node: "<<i<<".   Enter data"<<endl;
        cin>>data_arr[i];
    }

    cout<<endl<<"Enter weighted connections between given nodes in matrix form. \nIf no connection enter 0"<<endl<<endl;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin>>adj_mat[i][j];
        }
    }
    cout<<endl<<"Graph stored"<<endl;

}

void graph::bfs(){
    cout<<"Enter node number with which to start traversal"<<endl;
    int start;
    cin>>start;

    queue<int> q;

    for(int i=0; i<size; i++){
        visited[i]=0;
        visited2[i]=0;
    }

    visited[start]=1;
    q.push(start);

    while(! q.empty()){
        int current_node_ind=q.front();
        q.pop();
        cout<<data_arr[current_node_ind]<<endl;

        for(int j=0; j<size; j++){
            if((adj_mat[current_node_ind][j]==1)&&(visited[j]==0)){
                visited[j]=1;
                q.push(j);


            }
        }
    }




}

void graph::dfs(int start){
    cout<<data_arr[start];
    visited2[start]=1;

    for(int j=0; j<size; j++){
        if((visited2[j]!=1)&&(adj_mat[start][j]==1)){
            dfs(j);
        }
    }


}

int main(){
    cout<<"No. of nodes"<<endl;
    int n;
    cin>>n;
    graph g(n);

    g.input_graph();
    g.bfs();
    cout<<endl;
    g.dfs(0);


}
