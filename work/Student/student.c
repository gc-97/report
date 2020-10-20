#include <stdio.h>
#include <stdlib.h>


typedef struct _node* tree;
typedef struct _node node;

struct _node{
	int index;
	char name[100];
	int midterm;
	int lastterm;
};

tree InputIntf(tree dynamicheap, int studentnum){
	int num =0;
	dynamicheap = (tree)malloc(studentnum * sizeof(node));

	if(!dynamicheap) exit(1);


	for(num=0; num<studentnum; num++){
		printf("%d Student \n", num+1);
		printf("Midterm exam Score : ");
		scanf("%d", &dynamicheap[num].midterm);
                printf("Lastterm exam Score : ");
                scanf("%d", &dynamicheap[num].midterm);
		printf("Name : ");
		scanf("%s", dynamicheap[num].name);

		dynamicheap[num].index = 1+num;
		printf("\n");
	}
	return dynamicheap;
}


void printTree(tree t, int index, int studentnum){
	if(index == studentnum){
		return;
	}
	else{
		printf("%d Student\n",t[index].index);
		printf("Name : %s\n",t[index].name);
		printf("Midterm exam Score : %d\n", t[index].midterm);
		printf("Lastterm exam Score : %d\n", t[index].lastterm);
		printTree(t, index+1, studentnum);
	}
}


int main() {
	int studentnum = 0;
	tree dynamicheap = 0;

	printf("Input Number of Student : ");
	scanf("%d", &studentnum);
	dynamicheap = InputIntf(dynamicheap, studentnum);
	printTree(dynamicheap,0,studentnum);
	free(dynamicheap);
}
