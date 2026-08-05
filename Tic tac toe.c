#include<stdio.h>
#include<string.h>

int winner(int arr[3][3],int player){
        for(int i=0;i<3;i++){
            if(arr[i][0] == player &&
               arr[i][1] == player &&
               arr[i][2] == player )
               {
                    return 1;

               }

            else if(arr[0][i] == player &&
                    arr[1][i] == player &&
                    arr[2][i] == player )
               {
                    return 1;

               }
        }

            if(arr[0][0] == player &&
                    arr[1][1] == player &&
                    arr[2][2] == player
                    )
                {
                    return 1;

                }

            else if(arr[2][0] == player &&
                    arr[1][1] == player &&
                    arr[0][2] == player
                    )
                {
                    return 1;

                }

            else{
                return 0;
            }

}


int main(){

    int arr[3][3];

    int i=0,j=0;

    for(;i<3;i++){
        j=0;
        for(;j<3;j++){
            printf("* ");

            arr[i][j]=-1;

            if(j==2){
            printf("\n");
            }
        }
    }

    int n=0;

    while(1==1){
        int a,b;
        scanf("%d %d",&a,&b);

        if(n%2 == 0){
        arr[a-1][b-1]=1;
        }

        else{
            arr[a-1][b-1]=0;
        }
        n++;

        i=0;

        for(;i<3;i++){
        int j=0;
        for(;j<3;j++){

            if(arr[i][j]==-1){
            printf("* ");
            }

            else{
                printf("%d ",arr[i][j]);
            }

            if(j==2){
            printf("\n");
            }
        }
    }

        if(winner(arr,1)){
            printf("player 1 wins");
            break;
        }

        else if(winner(arr,0)){
            printf("player 0 wins");
            break;
        }



        if(n==9){
            printf("Draw");
            break;
        }
    }
}








