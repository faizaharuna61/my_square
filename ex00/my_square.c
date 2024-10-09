#include <stdio.h>
#include <stdlib.h>
void my_square(int test_1, int test_2){
for(int i = 1; i <= test_1; i++){
for(int j = 1; j <= test_2; j++){
if((i == 1 || i == test_1) && (j == 1 || j == test_2)){
printf("o");
}else if(i == 1 || i == test_1){
printf("-");
}else if(j == 1 || j == test_2){
printf("|");
}else{
printf(" ");
}
}
printf("\n");
}
}
int main(int ac, char **av){
if(ac != 3){
return 0;
}
int t1= atoi(av[1]);
int t2 = atoi(av[2]);
my_square(t1, t2);
return 0;
}
