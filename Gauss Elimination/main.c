#include <stdio.h>
#include <stdlib.h>

void main(){
	double A[32][33],ans[32],error;
	int s,i,j,k;
	
	while(1){
		error=0.0;
		//미지수 개수 입력
		do{
			printf("미지수 개수(1~32) 혹은 0을 입력하여 프로그램 종료\n>> ");
			scanf("%d",&s);
			puts(""); 
		}while(s>32);
		
		//0을 입력하여 프로그램 종료
		if(s==0)
			break;
		
		//입력할 식
		printf("입력할 식\n");
		for(i=0;i<s;i++){
			for(j=0;j<s-1;j++){
				printf(" (   )x%d +",j+1);
			}
			printf(" (   )x%d = (   )\n",s);
		}
		puts("");
		
		//식 입력
		printf("\n계수 입력\n");
		for(i=0;i<s;i++){
			for(j=0;j<s;j++){
				printf(" %d번 식: x%d의 계수>> ",i+1,j+1);
				scanf("%lf",&A[i][j]);
			}
		}
		printf("\n값 입력\n");
		for(i=0;i<s;i++){
			printf(" %d번 식의 값>> ",i+1);
			scanf("%lf",&A[i][s]);
		}
		
		//입력 점검
		printf("\n입력한 식\n");
		for(i=0;i<s;i++){
			for(j=0;j<s-1;j++){
				printf(" ( %lg )x%d +",A[i][j],j+1);
			}
			printf(" ( %lg )x%d = ( %lg )\n",A[i][s-1],s,A[i][s]);
		}
		puts("");
		
		//오류 확인
		for(i=0;i<s;i++){
			if(A[i][i]==0){
				printf("%d번 식 x%d의 계수에 0이 올 수 없음.\n",i+1,i+1);
				error=1.0;
			}
		}
		if(error==1.0){
			printf("\n ※식의 순서를 바꿔서 다시 입력.\n\n");
			continue;
		}
		
		//소거 진행
		for(i=0;i<s-1;i++){
			for(j=i+1;j<s;j++){
				error=A[j][i]/A[i][i]; //값 저장용, 오류와 무관.
				for(k=i;k<=s;k++){
					A[j][k]=A[j][k]-error*A[i][k];
				}

			}
		}
		
		//해 구하기
		for(i=s-1;i>=0;i--){
			ans[i]=A[i][s];
			for(j=s-1;j>i;j--){
				ans[i]-=A[i][j]*ans[j];
			}
			ans[i]/=A[i][i];
		}
		
		//해의 개수
		error=0.0;
		for(i=0;i<s;i++){
			if(isinf(ans[i])){
				error=1.0;
			}
			else if(isnan(ans[i])){
				error=2.0;
			}
		}
		
		//해 출력
		if(error==1.0){
			printf("해 없음\n\n");
		}
		else if(error==2.0){
			printf("무수히 많은 해\n\n");
		}
		else{
			printf("해:\n ");
			for(i=0;i<s;i++){
				printf("x%d = %lg   ",i+1,ans[i]);
			}
			puts("\n");
		}
		printf("--------------------------------------------------\n\n");
	}
}
