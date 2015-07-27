#include <stdio.h>
#include <string.h>

using namespace std;


//int main(){
//
//	int count;
//	int a = scanf("%d", &count);
//	
//
//	for(int i=0;i<count;i++){
//	
//		char str1[80] = {};
//		char str2[80] = {};
//		int j = 0;
//
//		a = scanf("%s", str1);
//		
//		while(str1[j]){		
//
//			if(str1[j] == '%'){
//				char temp[4] = {0};
//
//				strncpy(temp, &str1[j], 3);
//				j += 2;
//
//				if(!strcmp(temp, "%20")){
//					strcat(str2, " ");
//				}else if(!strcmp(temp, "%21")){
//					strcat(str2, "!");
//				}else if(!strcmp(temp, "%24")){
//					strcat(str2, "$");
//				}else if(!strcmp(temp, "%25")){
//					strcat(str2, "%");
//				}else if(!strcmp(temp, "%28")){
//					strcat(str2, "(");
//				}else if(!strcmp(temp, "%29")){
//					strcat(str2, ")");
//				}else if(!strcmp(temp, "%2a")){
//					strcat(str2, "*");
//				}
//
//			}else{
//
//				strncat(str2, &str1[j], 1);
//			}
//			j++;
//		}
//
//		printf("%s\n", str2);
//
//	}
//
//	return 0;
//}