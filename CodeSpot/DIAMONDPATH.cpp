//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void inputTableValue(short (*table)[100], int size){
//
//	const int height = size*2 - 1;
//
//	for(int i=0; i<height; i++){
//		
//		int width, value;
//
//		if(i<size)	width = i + 1;
//		else		width = height - i;
//		
//		for(int j=0; j<width; j++){
//			scanf("%d", &value);
//			table[i][j] = value;
//		}
//	}
//}
//
//int findPath(short (*table)[100], int size){
//
//	const int height = size*2 - 1;
//	int *sum = (int*)malloc(sizeof(int)*size);	
//	int result;
//
//	memset(sum, 0, sizeof(int)*size);	
//
//	for(int i=height-1; i>=0; i--){
//
//		int width, upperCase;
//		int *newSum;
//		
//		if(i == height - 1){
//
//			sum[0] = table[i][0];		
//
//		}else{
//
//			if(i<size-1){
//
//				width = i + 1;
//				upperCase = 1;
//
//			}else{
//
//				width = height - i;
//				upperCase = -1;
//
//			}
//
//			newSum = (int*)malloc(sizeof(int)*width);
//			memset(newSum, 0, sizeof(int)*width);	
//
//			for(int j=0; j<width; j++){
//
//				int a = sum[j];
//				int b = 0;
//				int bigger = 0;
//				
//				if(j+upperCase >= 0 && j+upperCase < width)	b = sum[j+upperCase];										
//
//				if(a > b)	bigger = a;
//				else		bigger = b;
//
//				newSum[j] = bigger + table[i][j];
//			
//			}
//
//			int* temp = sum;
//			sum = newSum;
//			newSum = temp;
//				
//			free(newSum);
//			
//		}
//	}
//
//	result = sum[0];
//	free(sum);
//	
//	return result;
//}
//
//int main(){
//
//	int num, size;
//	scanf("%d", &num);
//
//	for(int i=0; i<num; i++){
//
//		short table[200][100];
//		
//		scanf("%d", &size);
//
//		inputTableValue(table, size);
//
//		int result = findPath(table, size);
//
//		printf("%d\n", result);
//
//	}
//	return 0;
//}