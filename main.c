/*Question: Given square matrix with (x, y) as starting coordinates in matrix along with
 a string indicating the directions of movement(L(left), R(right), U(up), D(down)) with
movements allowed to exceed matrix size for L, R (wrappable on L,R)and not allowed for U, D(ignore).
Determine the final coordinates post movement */

/* To run this program: Compile: gcc main.c -o main
                        Execute: ./main 3 0 0 "RDD"
    This program expects 4 parameters as argument.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void find_resultCoordinates(int size, int x, int y, char moves[]);
/* The below program runs in O(n) time with constant space */
int main(int argc, char **argv)
{
    if(argc != 5){
        printf("Incorrect number of arguments passed\n");
        return 0;
    }
    find_resultCoordinates(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), argv[4]);
    return 0;
}

void find_resultCoordinates(int size, int x, int y, char moves[]) {
    if(size == 0) {
        printf("No moves possible\n");
        return;
    }
    if(moves[0] == '\0'){
        //moves is null, return the base coordinates
        printf("[%d,%d]",x,y);
        return;
    }
    int res_x = x, res_y = y;
    for(int i=0;i<strlen(moves);i++){
        if(moves[i] == 'L') {
			if(res_y-1 < 0) {
				res_y += (size-1);
			}else {
				res_y -= 1;
			}
		}else if(moves[i] == 'R') {
			if(res_y+1 > (size-1)) {
				res_y -= (size-1);
			}else{
				res_y += 1;
			}
		}else if (moves[i] == 'U') {
			if((res_x-1)>=0) {
				res_x -= 1;
			}
		}else if (moves[i] =='D') {
			if((res_x+1) < size) {
				res_x += 1;
			}
		}	
    }
    printf("[%d,%d]",res_x,res_y);
    return;
}
