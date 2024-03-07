#include <stdio.h>
int greater(int m,int s){
        if(m>s){
            return m;
        }
        else
        return 0;
}
int main(){
        int n;
        printf("Enter the no of elements of an array");
        scanf("%d",&n);
        int a[n];
        printf("Enter the elements of an array");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            int x=greater(a[i],sum/n);
            if(x!=0){
                printf("%d ,",x);
            }
        }
        
}