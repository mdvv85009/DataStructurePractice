#include <iostream>
#include <queue>
#include <stack>
#define MAX_SIZE 4
using namespace std;

int M[MAX_SIZE][MAX_SIZE] = {
    {0, 1, 1, 1},   // means A has B, C, D can connect
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {1, 1, 1, 0}
};

int visit[MAX_SIZE];

int BFS(int v){
    queue<int> path;

    for(int i = 0; i < MAX_SIZE; i++)
        visit[i] = false;

    path.push(v);
    visit[v] = true;
    while(!path.empty()){
        int v_pop = path.front();
        path.pop();
        for(int i = 0; i < MAX_SIZE; i++){
            if(M[v_pop][i] == 1 && !visit[i]){
                path.push(i);
                visit[i] = true;
            }
        }
    }
}

int DFS(int v){     // recursion
    visit[v] = true;
    for(int i = 0; i < MAX_SIZE; i++)
        if(M[v][i] && !visit[i])
            DFS(i);
}

int DFS_Stack(int v){    // stack
    stack<int> path;
    path.push(v);
    visit[v] = true;
    while(!path.size()){
        int v_pop = path.top();
        path.pop();
        if(!visit[v_pop]){
            for(int i = 0; i < MAX_SIZE; i++){
                if(M[v_pop][i] && !visit[i]){
                    path.push(i);
                    visit[i] = true;
                }
            }
        }
    }
}
