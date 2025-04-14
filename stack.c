#include<stdio.h>

int main(){
    int top =-1 ,max, stack[10],val, ch;
    printf("Enter the number of element :");
    scanf("%d",&max);
    printf("\n 1.Push \n 2.pop\n 3.Displey\n 4,Exit");
    while(1){
        printf("\n Enter choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
            if(top!=max-1){
                printf("enter value to push:");
                scanf("%d",&val);
                top=top+1;
                stack[top]=val;
            }
            else{
                printf("Overflow");
            }
            break;
            }
            case 2:{
                if(top==-1){
                    printf("stack is empty");
                }
                else{
                    val = stack[top];
                    top=top-1;
                    printf("delete the data%d",val);
                }
                break;
            }
            case 3:{
                printf("Displey stack:\n");
                for(int i=0;i<=top;i++){
                    printf("%d",stack[i]);
                    printf("\n");
                }
                break;
            }
            case 4:{
                printf("Exit  \n");
                return 0;
            }
            default:{
                printf("invalid choice: please try again");
                break;
            }
        }
    }

 return 0;
}