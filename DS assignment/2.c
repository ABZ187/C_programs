//Directed graph
#include<stdio.h>
#define MAXNODES 7

int arcs[][2] = {
        {0, 1}, {0, 3}, {1, 2}, {2, 4}, {4, 0}, {4, 1}, {5, 4}, {5, 6}, {6,2}, {4,3}, {2,5}, {3,1}
    };

int edges[MAXNODES][MAXNODES];

int c1 = sizeof(arcs)/sizeof(arcs[0]);

void join(int arcs[][2],int edges[][MAXNODES],int c1){
    int i,a,b;
    for(i=0;i<c1;i++){
        a = arcs[i][0];
        b = arcs[i][1];
        edges[a][b] = 1;
    }
}

void adjMatrix(){
    int i,j;
    for(i=0;i<MAXNODES;i++){
        for(j=0;j<MAXNODES;j++){
            printf("%d ",edges[i][j]);
        }
        printf("\n");
    }
}

void outdegree(){
    int i,j,d;
    for(i=0;i<MAXNODES;i++){
        d=0;
        for(j=0;j<MAXNODES;j++){
            d=d+edges[i][j];
        }
        printf("Outdegree of %d is %d\n",i,d);
    }
}

void indegree(){
    int i,j,d;
    for(i=0;i<MAXNODES;i++){
        d=0;
        for(j=0;j<MAXNODES;j++){
            d=d+edges[j][i];
        }
        printf("Indegree of %d is %d\n",i,d);
    }
}

//stack
int stack[MAXNODES];

int arrow=-1;

void push(int p1){
    stack[++arrow] = p1;
}

int pop(){
    return stack[arrow--];
}

int search_stack(int p1){
    int i;
    for(i=0;i<=arrow;i++){
        if(p1==stack[i]){
            return 1;
        }
    }
    return 0;
}

int isEmpty(){
    if(arrow==-1){
        return 1;
    }
    return 0;
    }

// end stack

// visited node
int visited[MAXNODES];
int vis_var=0;
int check_visit(int p1){
    int i;
    for(i=0;i<MAXNODES;i++){
        if(visited[i]==p1){
            return 1;
        }
    }
    return 0;
}
// end visited node

// DFS
void dfs(int node){
    int i=0;
    while(i<MAXNODES){
        if(edges[node][i] == 1){
            if(check_visit(i)!=1){
                visited[vis_var++]=i;
                push(i);
                // printf("%d\n",i);
                dfs(i);
            }
        }
        i++;
    }
    if(!isEmpty()){
        if(i==MAXNODES){
            printf("%d\n",pop());
            dfs(stack[arrow]);
        }
    }
}

int main(){
    int i,node;
    for(i=0;i<MAXNODES;i++){
        visited[i]=-1;
    }

    join(arcs,edges,c1);
    adjMatrix();
    // outdegree();
    // indegree();
    printf("Enter the starting node for DFS\n");
    scanf("%d",&node);
    printf("\n");
    visited[vis_var++]=node;
    stack[++arrow] = node;
    dfs(node);
    return 0;
}


