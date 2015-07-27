//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 1000000007
//long long int dynamic[100][5000];
//
//int check1(int amount, int coins[], int idx, int size){
//	
//	unsigned int count = 0;
//	int val = 0;
//	while(true){
//		int sum = coins[idx] * val;
//		if(amount > sum){
//			if(size-1 != idx){
//				count += check1(amount - sum, coins, idx+1, size);
//				//printf("%d\n", count);
//			}
//			val++;			
//		}else if(amount == sum){
//			return ++count;
//		}else if(amount < sum){
//			return count%MAX;
//		}
//	}
//}
//
//int check2(int amount, int coins[], int idx, int size){
//
//	unsigned int count = 0;
//	int val = amount/coins[idx];
//	
//	for(int i=0; i<=val; i++){
//		if(size-1 != idx){
//			count += check2(amount-i*coins[idx], coins, idx+1, size);
//		}else{
//			return ++count;			
//		}
//	}
//	return count%MAX;
//}
//
//void check3(int amount, int coins[], int idx, int size){
//
//	int val = amount/coins[idx];
//	
//	for(int i=val; i>=0; i--){
//		if(size-1 != idx){
//			int sum = amount-i*coins[idx];
//
//			if(dynamic[idx+1][sum] ==0){
//				check3(sum, coins, idx+1, size);
//			}
//			dynamic[idx][amount] += dynamic[idx+1][sum];
//
//		}else{
//			dynamic[idx][amount] = 1;
//			break;
//		}
//	}
//}
//
//int* sort(int* arr, int* size, int amount){
//
//	for(int i=0; i<*size; i++){
//		for(int j=i+1; j<*size; j++){
//			if(arr[i]<arr[j]){
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	// 총 금액보다 큰 단위의 동전 제거
//	while(arr[0] > amount){
//		/*arr = &arr[1];
//		*size = *size -1;*/
//		for(int i=0;i<*size; i++){
//			arr[i] = arr[i+1];
//		}
//		arr[*size-1] = 0;
//		*size = *size -1;
//	}
//
//	/*for(int i=0;i<*size;i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n\n");*/
//
//	return arr;
//}
//
//int main(){
//
//	int T = 0;
//	scanf("%d", &T);
//
//	for(int i=0;i<T;i++){
//
//		int M, C = 0;
//		long long int count = 0;
//		//long long int dynamic[100][5000];
//		scanf("%d %d", &M, &C);
//
//		//int* coins = (int*)malloc(sizeof(int) * C);
//
//		int coins[100] = {0,};
//
//		for(int j=0; j< C; j++){
//			scanf("%d", &coins[j]);
//		}
//
//		//coins = sort(coins, &C, M);
//		sort(coins, &C, M);
//
//		//count = check2(M, coins, 0, C);
//		
//		check3(M, coins, 0, C);
//		count = dynamic[0][M];
//
//		if(count > MAX){
//			count = count % MAX;
//		}
//		
//
//		printf("%d\n", count);
//		
//		//초기화
//		for(int i=0;i<100;i++){
//			for(int j=0;j<5000;j++){
//				dynamic[i][j] = 0;
//			}
//		}
//	}
//	
//	return 0;
//}