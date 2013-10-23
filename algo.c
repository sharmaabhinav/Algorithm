#include<stdio.h>
#include<stdlib.h>
/* return the no of high 1s in  byte ex . 1110xxxx --> 3 */
int check(char ch){
    int *pattern = malloc(sizeof(int)*8);
    int and_ = 1; 
    int digit = ch;
    int count = 0;
    int i;
    for( i=0;i<8;i++){
       
        if(((and_ << i) & ch) != 0 ){
            pattern[i] = 1;
        }else{
            
            pattern[i] = 0;
        }
        
        
   }
     for( i = 7;i>=0;i--)
     {
         if(pattern[i] == 1){
             count++;
         }else{
             break;
         }
         
     }
        
        return count;
    
}
int main(){
    FILE *fp;
    fp = fopen("input.txt","r");
    char ch;
    int skip;
    int non_aschii = 0;
    int count;
    while((ch = fgetc(fp)) != EOF ){
        count = check(ch);
        if(ch == '\n'){
            printf("%d\n",non_aschii);
            non_aschii = 0;
        }
        
        if(count !=0 ){
            non_aschii++;
            count = count - 1; /* skip bytes */
            while(count != 0 ){
                fgetc(fp);
                count--;
            }
        }
       
      
    }
    printf("%d",non_aschii);
    
}