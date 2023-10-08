// Simulation of Preemptive Shortest Job First CPU Scheduling Algorithm
#include<stdio.h>
#include<stdlib.h>
struct node{
    int tat,p,wt,bt,at;
    struct  node* next,*prev;
};

// swap nodes in LL
void swap(struct node*t1,struct node*t2){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->p=t1->p;
    temp->bt=t1->bt;
    temp->at=t1->at;
    temp->tat=t1->tat;
    temp->wt=t1->wt;

    t1->p=t2->p;
    t1->bt=t2->bt;
    t1->at=t2->at;
    t1->tat=t2->tat;
    t1->wt=t2->wt;

    t2->p=temp->p;
    t2->bt=temp->bt;
    t2->at=temp->at;
    t2->tat=temp->tat;
    t2->wt=temp->wt;

}

int print(struct node* head,int n){
    struct node *temp = head;
    printf("P%d AT %d BT %d WT %d TAT %d\n",temp->p,temp->at,temp->bt,temp->wt,temp->tat);
    temp=temp->next;
    if(n==1){
        return 0;
    }
    print(temp,--n);
}

void FinalOperations(int* gantt,struct node* head,int n){
    int u=0,tat,totaltat=0,totalwt=0;
    float avgwt=0,avgtat=0;
    struct node *temp=head;
    printf("Gantt Chart\n");
    while(gantt[u]!=-1){
        printf(" P%d  ",gantt[u++]);
    }
    // print TAT
////bug 2
    
    printf("\nTurn Around Time\n");
    while(temp->next!=NULL){
        tat = temp->tat-temp->wt;
        printf(" P%d: %d |",temp->p,tat);
        totaltat = totaltat+tat;
        temp=temp->next;
    }
    tat = temp->tat-temp->wt;
    totaltat = totaltat+tat;
    printf(" P%d: %d |",temp->p,tat);
//////
    // print WT
    printf("\nWaiting Time\n");
    temp=head;
    while(temp->next!=NULL){
        printf(" P%d: %d |",temp->p,temp->wt);
        totalwt = totalwt+temp->wt;
        temp=temp->next;
        // printf("wt %d\n",totalwt);
    }
    totalwt = totalwt+temp->wt;
    printf(" P%d: %d |",temp->p,temp->wt);
////bug 1
    avgtat = totaltat/n;
    avgwt = totalwt/n;
////
    printf("\nAverage Turn Around Time %d\nAverage waiting Time %d \n",avgtat,avgwt);
    return;
}

int main(){
    int n,i,j,k,bt1,at1,p1,TotalTime=0,gantt[100],gc=-1;
    struct node *BurstTimeptr,*tempptr1,*tempptr2,*Arrivalptr,*headptr,*tailptr;
    printf("Enter no. of processes\n");
    scanf("%d",&n);

    // create LL of n nodes with user input
    headptr = (struct node *)malloc(sizeof(struct node));
    headptr->prev=NULL;
    printf("Enter P%d arrival time\n",1);
    scanf("%d",&at1);
    printf("Enter P%d Burst time\n",1);
    scanf("%d",&bt1);
    tempptr1 = headptr;
    tempptr1->at=at1;
    tempptr1->bt=bt1;
    tempptr1->p=1;
    for(i=2;i<=n;i++){
        tempptr2 = (struct node *)malloc(sizeof(struct node));
        printf("Enter P%d arrival time\n",i);
        scanf("%d",&at1);
        printf("Enter P%d Burst time\n",i);
        scanf("%d",&bt1);
        tempptr2->at=at1;
        tempptr2->bt=bt1;
        tempptr2->p=i;
        tempptr1->next = tempptr2;
        tempptr1 = tempptr2;
        }
    tailptr = tempptr2;
    tailptr->next=NULL;

    // Sort the LL in ascending order of AT
    tempptr1 = headptr;
    for(i=0;i<n;i++){
        tempptr2 = tempptr1;
        for(j=i;j<n;j++){
            if((tempptr1->at) > (tempptr2->at)){
                swap(tempptr1,tempptr2);
            }
            tempptr2=tempptr2->next;
        }
        tempptr1 = tempptr1->next;
    }

    // Initialize Wt = -AT-BT
    tempptr1 = headptr;
    for(i=0;i<n;i++){
        tempptr1->wt=-(tempptr1->at)-(tempptr1->bt);
        tempptr1 = tempptr1->next;
    }

    //Calculate total time for all processes
    tempptr1 = headptr;
    for(i=0;i<n;i++){
        TotalTime =TotalTime + tempptr1->bt + tempptr1->at;
        tempptr1 = tempptr1->next;
    }
    printf("TotalTime %d\n",TotalTime);

print(headptr,n);
    // 
    Arrivalptr = headptr;
    for(k=0;k<100;k++){  //initialize Gantt Chart
        gantt[k]=-1;
    }
    k=0; //Gantt chart index
    for(i=0;i<TotalTime;i++){
        // set Arrival time pointer
        tempptr1 = headptr;
        if(Arrivalptr->next!=NULL){
            if(Arrivalptr->next->at == i){
                Arrivalptr=Arrivalptr->next;
                }
        }
        // Find smallest BT greater than zero, till Arrivalptr node
        tempptr1 = headptr;
        // Initialize tempptr1 to first non zero BT node
        while (tempptr1->bt==0){
            if(tempptr1==tailptr){
                // Sort the LL in ascending order of P
                tempptr1 = headptr;
                for(i=0;i<n;i++){
                    tempptr2 = tempptr1;
                    for(j=i;j<n;j++){
                        if((tempptr1->p) > (tempptr2->p)){
                            swap(tempptr1,tempptr2);
                        }
                        tempptr2=tempptr2->next;
                    }
                    tempptr1 = tempptr1->next;
                }
                FinalOperations(gantt,headptr,n);
                // print(headptr,n);
            }
            tempptr1=tempptr1->next; 
        }
        // Find smallest BT 
        BurstTimeptr = tempptr1; // Initialize BurstTimeptr to first non zero BT node
        tempptr2 = tempptr1; // Let tempptr2 as first non zero BT node
        while(tempptr1!=Arrivalptr){
            if(tempptr1->next!=NULL){
                tempptr1=tempptr1->next;
            }
            if(tempptr1->bt<BurstTimeptr->bt){
                BurstTimeptr=tempptr1;
            }
        }
        //Preemptive SJF operations
        if(tempptr1->at<=i){
            BurstTimeptr->bt = BurstTimeptr->bt -1;
            gc = BurstTimeptr->p;
            // printf("gant %d",gantt[k]);
            if(gc!=gantt[k-1]){ //update Gantt Chart
                gantt[k++] = gc;
            }

            // find WT and TAT
            if(BurstTimeptr->bt==0){
                BurstTimeptr->wt = BurstTimeptr->wt+i+1;
                BurstTimeptr->tat = i+1;
                swap(tempptr2,BurstTimeptr); //swap recently turned BT zero node by first non zero node
            }
        }
 
    }

// print struct
print(headptr,n);
}