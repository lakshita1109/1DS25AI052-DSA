#include<stdio.h>
#include<stdbool.h>
 int stack[6];
int top;

bool isempty(){
    if (top==-1){
        return true;
    }
    return false;
}
bool isfull(){
    if(top==5){
        return true;
    }
    return false;
}
void push(int value){
    if(isfull()){
        printf("overflow\n");
        return;
    }
    top++;
    stack[top]=value;
    
    
    printf("value pushed at %d: %d \n",top,value);
    
    
}
int pop(){
    if(isempty()){
        printf("underflow\n");
        return;
    }
    
    int elem=stack[top];
    top--;
    
    
    
    
    
    printf("value popped : %d \n",elem);
    
}
void peek(){
    printf("stack top : %d \n ",stack[top]);
    
}
int main(){
    top=-1;
    push(3);
    push(4);
    push(5);
    push(6);
    pop();
    pop();
    peek();
}
