//#include <stdio.h>
//#include <string.h>
//
//int getNumber(int* alphebet);
//bool operation(int num1, int num2, char op, int result);
//int reCount(char* number);
//
//int main(){
//
//	int num = 0;
//	scanf("%d", &num);
//
//	for(int i=0; i<num; i++){
//
//		char string[100] = {};
//		//char *p;
//		//a = scanf("%[^\n]s", string);
//		//char *t = fgets(string, sizeof(string)-1, stdin);
//		//if( (p=strchr(string, '\n')) != NULL ) *p = '\0';
//
//		char a[11], b[11], c[11], op[2], e[2];
//		bool result = false;
//
//		scanf("%s %s %s %s %s", a, op, b, e, c);
//
//		int num1 = reCount(a);
//		int num2 = reCount(b);
//		int answer = reCount(c);
//
//		if(num1 == -1 || num2 == -1 || answer == -1){
//			result = false;
//		}else{
//			result = operation(num1, num2, op[0], answer);
//		}
//
//		if(result){
//			printf("Yes\n");
//		}else{
//			printf("No\n");
//		}
//	}
//
//	return 0;
//}
//
//int reCount(char* number){
//
//	int alphabet[26] = {0};
//	int count = 0;
//
//	while(number[count]){
//
//		int temp = number[count];
//		alphabet[temp-97]++;
//		count++;
//	}
//
//	return getNumber(alphabet);
//}
//
//int getNumber(int* alphebet){
//
//	int result = -1;
//
//	if(alphebet[25] == 1 && alphebet[4] == 1 && alphebet[17] == 1 && alphebet[14] == 1){ // 0
//		result = 0;
//	}else if(alphebet[14] == 1 && alphebet[13] == 1 && alphebet[4] == 1){ // 1
//		result = 1;
//	}else if(alphebet[19] == 1 && alphebet[22] == 1 && alphebet[14] == 1){ // 2
//		result = 2;
//	}else if(alphebet[19] == 1 && alphebet[7] == 1 && alphebet[17] == 1 && alphebet[4] == 2){ // 3
//		result = 3;
//	}else if(alphebet[5] == 1 && alphebet[14] == 1 && alphebet[20] == 1 && alphebet[17] == 1){ // 4
//		result = 4;
//	}else if(alphebet[5] == 1 && alphebet[8] == 1 && alphebet[21] == 1 && alphebet[4] == 1){ // 5
//		result = 5;
//	}else if(alphebet[18] == 1 && alphebet[8] == 1 && alphebet[23] == 1){ // 6
//		result = 6;
//	}else if(alphebet[18] == 1 && alphebet[4] == 2 && alphebet[21] == 1 && alphebet[13] == 1){ // 7
//		result = 7;
//	}else if(alphebet[4] == 1 && alphebet[8] == 1 && alphebet[6] == 1 && alphebet[7] == 1 && alphebet[19] == 1){ // 8
//		result = 8;
//	}else if(alphebet[13] == 2 && alphebet[8] == 1 && alphebet[4] == 1){ // 9
//		result = 9;
//	}else if(alphebet[19] == 1 && alphebet[4] == 1 && alphebet[13] == 1){ // 10
//		result = 10;
//	}
//
//	return result;
//}
//
//bool operation(int num1, int num2, char op, int result){
//
//	int answer;
//
//	if(op == '+'){
//
//		answer = num1 + num2;
//
//	}else if(op == '*'){
//
//		answer = num1 * num2;
//
//	}else if(op == '-'){
//
//		answer = num1 - num2;
//
//	}else{
//		return false;
//	}
//
//	if(answer == result){
//		return true;
//	}
//
//	return false;
//}