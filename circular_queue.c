#include<stdio.h>
#include<stdlib.h>
#define max 5

typedef struct
{
    int v[max];
    int fp,rp,counter;
}QUE;

void insert(QUE *arg){
int x;
if(arg->counter == max){
    printf("The Queue is full\n");
}
else{
    printf("Enter the element to be inserted\n");
    scanf("%d",&x);
    arg->v[arg->rp++]=x;
    arg->rp=arg->rp%max;
    arg->counter+=1;
}
}

void dele(QUE *arg){
int x;
if(arg->counter==0){
    printf("The Q is empty\n");
}
else{
    x=arg->v[arg->fp++];
    printf("The deleted element is %d",x);
    arg->fp=arg->fp%max;
    arg->counter--;
}
}

void display(QUE *arg){
int i,j;
if(arg->counter==0){
    printf("The Q is Empty\n");
}
else{
    j=arg->fp;
    for(i=0;i<arg->counter;i++){
        printf("%d ",arg->v[j]);
        j+=1;
        j=j%max;

    }


}
}

int main(){
QUE q;
q.fp=q.rp=q.counter=0;
int ch;
while(1){
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    if(ch==1){
        insert(&q);
    }
    else if(ch==2){
        dele(&q);
    }
    else if(ch==3){
        display(&q);
    }
    else if(ch==4){
        break;
    }
}
return 0;
}
