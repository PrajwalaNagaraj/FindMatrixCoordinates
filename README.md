# FindMatrixCoordinates
C Program to find the resultant position in given matrix.

Question: Given square matrix with (x, y) as starting coordinates in matrix along with
 a string indicating the directions of movement(L(left), R(right), U(up), D(down)) with
movements allowed to exceed matrix size for L, R (wrappable on L,R)and not allowed for U, D(ignore).
Determine the final coordinates post movement.


Eg: input: 3 0 0 "RDD" (//3*3 matrix starting from position (0,0) moves one step right, and two steps down)
 ./main 3 0 0 "RDD"
 
  [2,1]
