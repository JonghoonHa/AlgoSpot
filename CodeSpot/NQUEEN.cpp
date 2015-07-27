//#include <stdio.h>
//#include <stdlib.h>
//
//int check(int top, int length, int* stack);
//
//int validityCheck(int length){
//
//	int count = 0;
//	int top = 0;
//	//int board[13][13] = {0};
//	int stack[13] ={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
//	
//	
//	count = check(top, length, stack);
//
//	return count;
//}
//
//int check(int top, int length, int* stack){
//
//	int count = 0;
//
//	for(int i=0; i< length; i++){ // 열
//
//		bool flag = true;
//
//		for(int j=0; j < top; j++){ // 스택 속의 다른 값 비교
//
//			int differ = i - top;
//			int sum = i + top;
//			if(stack[j] == i || differ == stack[j] - j || sum == stack[j] + j){
//				flag = false;
//			}
//		}
//
//		if(flag){
//			stack[top] = i;
//
//			//시험 출력
//			/*for(int temp = 0; temp < length; temp++){
//				printf("%d\t", stack[temp]);
//			}
//			printf("\n");*/
//			
//
//			if(top == length-1){
//				count++;
//				return count;
//			}else{
//				top++;
//				count += check(top, length, stack);
//				stack[top] = -1;
//				top--;
//			}
//			
//		}
//
//	}
//	return count;
//}
//
//int main(){
//
//	int num;
//	int a = scanf("%d", &num);
//
//	for(int i=0; i<num; i++){
//
//		int size = 1; // 체스판 크기
//		int count = 0; // 적합한 경우 세기
//		a = scanf("%d", &size);
//
//		count = validityCheck(size);
//
//		printf("%d\n", count);
//	}
//	return 0;
//}