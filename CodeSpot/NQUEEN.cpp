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
//	for(int i=0; i< length; i++){ // ��
//
//		bool flag = true;
//
//		for(int j=0; j < top; j++){ // ���� ���� �ٸ� �� ��
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
//			//���� ���
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
//		int size = 1; // ü���� ũ��
//		int count = 0; // ������ ��� ����
//		a = scanf("%d", &size);
//
//		count = validityCheck(size);
//
//		printf("%d\n", count);
//	}
//	return 0;
//}