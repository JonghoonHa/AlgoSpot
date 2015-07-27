#include <stdio.h>

using namespace std;

//int main(){
//
//	int num;
//	int a = scanf("%d", &num);
//
//	for(int i=0;i<num;i++){
//	
//		int point[4][2];
//		
//		for(int j=0;j<3;j++){
//		
//			a = scanf("%d %d", &point[j][0], &point[j][1]);
//		}
//
//		for(int j=0;j<2;j++){
//
//			if(point[0][j] == point[1][j]){
//
//				point[3][j] = point[2][j];
//
//			}else if(point[0][j] == point[2][j]){
//
//				point[3][j] = point[1][j];
//
//			}else if(point[1][j] == point[2][j]){
//			
//				point[3][j] = point[0][j];
//
//			}
//		}
//		printf("%d %d\n", point[3][0], point[3][1]);
//	}
//
//	return 0;
//}