#include <stdio.h>
#include <stdlib.h>

  #define INFINITY 9999

  int main() {
		  int vertexCount, **edgeLength, **res;
		  int i, j, k;
		  printf("Enter the no of vertices:");
		  scanf("%d", &vertexCount);
		  edgeLength = (int **)calloc(sizeof(int),  vertexCount);
		  res = (int **)calloc(sizeof(int), vertexCount);
		  for (i = 0; i < vertexCount; i++) {
					 edgeLength[i] = (int *)calloc(sizeof(int),  vertexCount);
					 res[i] = (int *)calloc(sizeof(int), vertexCount);
		  }

		  /* Adjacency Matrix to store Cost of the edges */
		  for (i = 0; i < vertexCount; i++) {
					 for (j = 0; j < vertexCount; j++) {
								printf("Edge weight %d to %d(0 if no edge):", i + 1, j + 1);
								scanf("%d", &edgeLength[i][j]);
								if (edgeLength[i][j] == 0) {
										  res[i][j] = INFINITY;
								} else {
										  res[i][j] = edgeLength[i][j];
								}
					 }
		  }
		  printf("Adjacent matrix for edge weights:\n");
		  for (i = 0; i < vertexCount; i++) {
					 for (j = 0; j < vertexCount; j++) {
								printf("%3d", edgeLength[i][j]);
					 }
					 printf("\n");
		  }

		  /* Calculate shortest path from each vertex to every other vertices */
		  for (i = 0; i < vertexCount; i++) {
					 for (j = 0; j < vertexCount; j++) {
								for (k = 0; k < vertexCount; k++) {
										  if (res[j][k] > res[j][i] + res[i][k]) {
													 res[j][k] = res[j][i] + res[i][k];
										  }
								}
					 }
		  }
		  printf("\nShortest path between vertices\n");
		  for (i = 0; i < vertexCount; i++) {
					 for (j = 0; j < vertexCount; j++) {
								if (res[i][j] == INFINITY)
										  printf("%3d", 0);
								else
										  printf("%3d", res[i][j]);
					 }
					 printf("\n");
		  }
		  return 0;
  }
