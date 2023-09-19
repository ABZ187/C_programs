#include<stdio.h>
#include<string.h>
#define n 10
char stack[n];
int top=-1;

//Define Stack
void push(char x){
    if(top>=-1 && top<n){
        top++;
        stack[top] = x;
    }
    else{
        printf("stack unavailable for push\n");
    }
}

char pop(){
    if(top>=-1 && top<n){      
        return stack[top--];
}
    else{
        printf("stack unavailable for pop\n");
        return -1;
    }
}

// search till '(' or else search whole stack
int search(char a){
    int search_var = top;
    while(search_var!=-1 && stack[search_var]!='('){
        if(stack[search_var--] == a){
            return 1;
        }
    }
    return 0;
}

void display(){
    int i=0;
    for(i=0;i<=top;i++){
        printf("%c",stack[i]);
    }
    printf("\n");
}


int main(){
    char expression[50], variable[50], temp, temp2, prev_top;
    int i,var_iter = 0;
    printf("Enter th expression\n");
    scanf("%s",expression);
    int len = strlen(expression);
    for(i=0;i<len;i++){
        temp = expression[i];
// printf("temp = %c\n",temp);
        if(temp == '('){
            push('(');
        }        
        else if(temp==')'){
            temp2 = pop();
            while(temp2 != '('){
                variable[var_iter++] = temp2;
                if(top!=-1){
                    temp2 = pop();
                }
            }
        }

        else if(temp=='+' | temp=='-'){
            if(search('*') | search('/')){
                temp2 = pop();
                while(temp2!='('){
                    variable[var_iter++] = temp2;
                    if(top!=-1){
                        temp2 = pop();
                    }
                    else{
                        break;
                    }
                }
                push(temp);
            }
            else if(search('+') | search('-')){
                temp2 = pop();
                variable[var_iter++] = temp2;
                push(temp);
            }
            else{
                push(temp);
            }
        }
        else if(temp=='*' | temp=='/'){
            if(search('*') | search('/')){
                temp2 = pop();
                variable[var_iter++] = temp2;
            }
            push(temp);

        }
        else{
            variable[var_iter++] = temp;
        }
// printf("variable = %s var_iter = %d\n",variable,var_iter);
    }
    
while(top!=-1){
    variable[var_iter++] = pop();
}

for(i=0;i<var_iter;i++){
    printf("%c",variable[i]);
}
    return 0;
}