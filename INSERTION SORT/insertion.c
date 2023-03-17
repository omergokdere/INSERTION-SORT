#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ALL 50

void insertionSort (int a[], int xsize);
void insertionSortD (int a[], int xsize);

int main(void)
{
	int a[ ALL ];

	int i;
	int num;
	int size;
	srand(time(NULL));


	printf("How many number you have: ");
	scanf("%d", &size);

	for(i=0; i<size; i++){
		a[i]= rand() % 100;
	}
	
	printf("Data items in orginal orders\n");

	for(i=0; i<size; i++){
		printf("%4d", a[i]);
	}

	do{
		printf("\n\n\nIf you want ordering ascending press 1, ordering decending press 2, "
			"\nto quit press -1:  ");
		scanf("%d", &num);


		if(num==1){

			printf("\n\nData items in ascending order\n");
			insertionSort( a, size );
	
			for(i=0; i<size; i++){
				printf("%4d", a[i]);
			}
		}else if(num==2){

			printf("\n\nData items in decending order\n");

			insertionSortD( a, size );
			for(i=0; i<size; i++){
				printf("%4d", a[i]);
			}
		}

		if(num!=1 && num!= 2 && num!=-1){
			printf("\n\nThere is something wrong! You entered different number!\n");
		}
	}while(num != -1);


	printf("\n");
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
}

void insertionSort (int a[], int xsize)
{
	int k, key, i;
	for (k = 1; k < xsize; ++k) {
		key = a[k];
		i = k - 1;
		while ((i >= 0) && (key < a[i])) {
			a[i + 1] = a[i];
			--i;
		}
		a[i + 1] = key;
	}
}

void insertionSortD (int a[], int xsize)
{
	int k, key, i;
	for (k = 1; k < xsize; ++k) {
		key = a[k];
		i = k - 1;
		while ((i >= 0) && (key > a[i])) {
			a[i + 1] = a[i];
			--i;
		}
		a[i + 1] = key;
	}
}