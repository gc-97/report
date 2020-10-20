#include <stdio.h>
#include <stdlib.h>


int *input_element(int row, int col);
void plus_operator(int *pt1, int *pt2, int row, int col);
static int *ptd;


void main(){

	int i, j;
	int row, col;
	int sel;
	int *pt1, *pt2;

	printf("INput row size of Matrix : ");
	scanf("%d", &row);
	printf("INput col size of Matrix : ");
        scanf("%d", &col);
	


	printf("-----First Matrix-----\n");
	for(int i=0; i<row; i++){
		for(j=0; j<col; j++){
		printf("a%d%d\t",i+1, j+1);
		}
		printf("\n");
	}
	pt1 = input_element(row, col);

 printf("-----Second Matrix-----\n");
        for(int i=0; i<row; i++){
                for(j=0; j<col; j++){
                printf("b%d%d\t",i+1, j+1);
                }
                printf("\n");
        }
        pt2 = input_element(row, col);

	printf("-----Sum of two MAtrics-----\n");
	plus_operator(pt1, pt2, row, col);

	free(ptd);
}


int *input_element(int row, int col){
	int i, j, k;

	ptd = (int *)malloc(row*col*sizeof(int));
	k=0;

	 for(int i=0; i<row; i++){
            for(j=0; j<col; j++){
        	        printf("%d%d : ",i+1, j+1);
			scanf("%d",&ptd[k]);
               		k++;
		}
	}
	return(ptd);
}

void plus_operator(int *pt1, int *pt2, int row, int col){
	int i, j;
	int mat1[100][100], mat2[100][100];


	for(int i=0; i<row; i++){
            for(j=0; j<col; j++){
		mat1[i][j] = *(pt1++);
		mat2[i][j] = *(pt2++);
		printf("%d\t",mat1[i][j] + mat2[i][j]);
		}
		printf("\n");

	}
}
