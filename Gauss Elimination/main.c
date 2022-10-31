#include <stdio.h>
#include <stdlib.h>

void main(){
	double A[32][33],ans[32],error;
	int s,i,j,k;
	
	while(1){
		error=0.0;
		//������ ���� �Է�
		do{
			printf("������ ����(1~32) Ȥ�� 0�� �Է��Ͽ� ���α׷� ����\n>> ");
			scanf("%d",&s);
			puts(""); 
		}while(s>32);
		
		//0�� �Է��Ͽ� ���α׷� ����
		if(s==0)
			break;
		
		//�Է��� ��
		printf("�Է��� ��\n");
		for(i=0;i<s;i++){
			for(j=0;j<s-1;j++){
				printf(" (   )x%d +",j+1);
			}
			printf(" (   )x%d = (   )\n",s);
		}
		puts("");
		
		//�� �Է�
		printf("\n��� �Է�\n");
		for(i=0;i<s;i++){
			for(j=0;j<s;j++){
				printf(" %d�� ��: x%d�� ���>> ",i+1,j+1);
				scanf("%lf",&A[i][j]);
			}
		}
		printf("\n�� �Է�\n");
		for(i=0;i<s;i++){
			printf(" %d�� ���� ��>> ",i+1);
			scanf("%lf",&A[i][s]);
		}
		
		//�Է� ����
		printf("\n�Է��� ��\n");
		for(i=0;i<s;i++){
			for(j=0;j<s-1;j++){
				printf(" ( %lg )x%d +",A[i][j],j+1);
			}
			printf(" ( %lg )x%d = ( %lg )\n",A[i][s-1],s,A[i][s]);
		}
		puts("");
		
		//���� Ȯ��
		for(i=0;i<s;i++){
			if(A[i][i]==0){
				printf("%d�� �� x%d�� ����� 0�� �� �� ����.\n",i+1,i+1);
				error=1.0;
			}
		}
		if(error==1.0){
			printf("\n �ؽ��� ������ �ٲ㼭 �ٽ� �Է�.\n\n");
			continue;
		}
		
		//�Ұ� ����
		for(i=0;i<s-1;i++){
			for(j=i+1;j<s;j++){
				error=A[j][i]/A[i][i]; //�� �����, ������ ����.
				for(k=i;k<=s;k++){
					A[j][k]=A[j][k]-error*A[i][k];
				}

			}
		}
		
		//�� ���ϱ�
		for(i=s-1;i>=0;i--){
			ans[i]=A[i][s];
			for(j=s-1;j>i;j--){
				ans[i]-=A[i][j]*ans[j];
			}
			ans[i]/=A[i][i];
		}
		
		//���� ����
		error=0.0;
		for(i=0;i<s;i++){
			if(isinf(ans[i])){
				error=1.0;
			}
			else if(isnan(ans[i])){
				error=2.0;
			}
		}
		
		//�� ���
		if(error==1.0){
			printf("�� ����\n\n");
		}
		else if(error==2.0){
			printf("������ ���� ��\n\n");
		}
		else{
			printf("��:\n ");
			for(i=0;i<s;i++){
				printf("x%d = %lg   ",i+1,ans[i]);
			}
			puts("\n");
		}
		printf("--------------------------------------------------\n\n");
	}
}
