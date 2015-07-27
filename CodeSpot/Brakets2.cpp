//#include <stdio.h>
//
//void push(char c, char* stack, int top);
//bool pop(char c, char* stack, int top);
//
//int main(){
//
//	int num = 0;
//	int a = scanf("%d", &num);	
//
//	for(int i=0; i<num; i++){
//
//		char string[10000] = {};
//		char stack[5000] = {};
//		bool flag = true;
//
//		a = scanf("%s", string);
//
//		int count = 0;
//		int top = 0;
//
//		while(string[count]){
//
//			if(string[count] == '(' || string[count] == '{' || string[count] == '['){ // push
//				
//				push(string[count], stack, top);
//
//
//				top++;
//
//			}else if(string[count] == ')' || string[count] == '}' || string[count] == ']'){ // pop
//				
//				flag = pop(string[count], stack, top);
//
//				top--;
//
//				if(!flag){
//					//printf("NO\n");
//					break;
//				}
//				
//			}
//
//			count++;
//		}
//
//		if(flag && top == 0){
//			printf("YES\n");
//		}else{
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}
//
//
//void push(char c, char* stack, int top){
//
//	stack[top] = c;
//	
//}
//
//bool pop(char c, char* stack, int top){
//
//	if(top == 0){
//		return false;
//	}
//
//	char d = stack[top-1];
//	
//	stack[top-1] = NULL;
//
//	if(c == ')'){
//		if('(' != d){
//			return false;
//		}
//	}else if(c == '}'){
//		if('{' != d){
//			return false;
//		}
//	}else if(c == ']'){
//		if('[' != d){
//			return false;
//		}
//	}
//	return true;
//}