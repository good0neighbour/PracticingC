#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
struct words{
	char eng[123][16];
	char kor[123][63];
};
struct words voca();
void main(){
	char ans[16],cur[16],inp[32];
	int i=0,count=0,r=0,n=0,len=0;
	struct words w;
	w=voca();
	
	srand(time(NULL));
	
	while(n>-1){
		//�ܾ� ����
		n=rand()%123;
		len=strlen(w.eng[n]);
		for(i=0;i<len;i++){
			ans[i]=w.eng[n][i];
			cur[i]='*';
		}
		ans[len]='\0';
		cur[len]='\0';
		r=len*2;
		
		//���α׷� ���
		printf("\n %d����\n===================================\n\n",len);
		while(strcmp(ans,cur)!=0&&r!=0){
			printf(" Ƚ�� ����: %d\n %s\n\n �Է�>> ",r,cur);
			scanf("%s",&inp);
			getchar();
			for(i=0;i<len;i++){
				if(ans[i]==inp[0]){
					cur[i]=inp[0];
				}
				else{
					count++;
				}
			}
			if(count==len){
				printf(" �������� �ʴ� ����.\n\n===================================\n\n");
				r--;
			}
			else{
				printf(" �ش��ϴ� ���� %d��.\n\n===================================\n\n",len-count);
			}
			count=0;
		}
		
		//���
		if(r==0){
			printf(" ����\n ");
		}
		else{
			printf(" ����\n ������ Ƚ��: %d\n",len*2-r);
		}
		printf("\n  %s: %s\n\n",ans,w.kor[n]);
		
		//���α׷� ���� �� �簳
		printf("\n 0 �Ǵ� s�� �Է��Ͽ� ���α׷� ����.\n ������ Ű�� �Է��Ͽ� ���α׷� �簳.\n\n>> ");
		scanf("%s",&inp);
		getchar();
		if(inp[0]=='0'||inp[0]=='s'){
			n=-1;
		}
		else{
			printf("\n=���α׷� �簳=\n\n\n");
		}
	}
	printf("\n=���α׷� ����=\n");
}
struct words voca(){
	struct words w={{
		"abstract",
		"overview",
		"mounting",
		"mutually",
		"domestic",			//5
		"conventional",
		"assent",
		"commence",
		"reimbursement",
		"arise",			//10
		"exploit",
		"appoint",
		"appraisal",
		"radically",
		"evaluate",			//15
		"competent",
		"designate",
		"resume",
		"applicant",
		"confidence",		//20
		"reference",
		"eligible",
		"associate",
		"diligent",
		"proficiency",		//25
		"prospective",
		"apprehensive",
		"payroll",
		"recruit",
		"certification",	//30
		"occupation",
		"wage",
		"attire",	
		"adhere",
		"severely",			//35
		"refrain",
		"thoroughly",
		"revise",
		"approval",
		"inspection",		//40
		"arrangement",
		"procedule",
		"mandate",
		"drastically",
		"constant",			//45
		"compensation",
		"abligation",
		"authorize",
		"abolish",
		"enforce",			//50
		"legislation",
		"restrict",
		"accustomed",
		"corporation",
		"demanding",		//55
		"efficiently",
		"instruct",
		"deserve",
		"assignment",
		"extension",		//60
		"delegate",
		"attentively",
		"revision",
		"reluctantly",
		"supervision",		//65
		"acquaint",
		"convey",
		"lax",
		"procrastinate",
		"combined",			//70
		"voluntarily",
		"undertake",
		"occasionally",
		"conduct",
		"supervise",		//75
		"confidential",
		"assign",
		"coordinate",
		"directory",
		"accountable",		//80
		"exclusive",
		"intention",
		"contrary",
		"disturbing",
		"foster",			//85
		"neutrality",
		"externally",
		"sophisticated",
		"timely",
		"promptly",			//90
		"implement",
		"permanently",
		"complie",
		"subsequent",
		"outline",			//95
		"expertise",
		"demonstrate",
		"remainder",
		"compliance",
		"clarify",			//100
		"aspect",
		"apprently",
		"aware",
		"accidentally",
		"advisable",		//105
		"improvise",
		"alumni",
		"admission",
		"banquet",
		"commit",			//110
		"informative",
		"antique",
		"manuscript",
		"advocate",
		"contributer",		//115
		"defy",
		"fascinating",
		"monopoly",
		"consistently",
		"demonstration",	//120
		"examine",
		"consecutive",
		"publicize"
		},{//==========�ѱ� ��==========
		"�߻�����",
		"����",
		"�����ϴ�",
		"��ȣ����",
		"������",				//5
		"��������",
		"�����ϴ�",
		"���۵Ǵ�",
		"��ȯ, ����, ���",
		"�߻��ϴ�",				//10
		"�����ϴ�",
		"�Ӹ��ϴ�",
		"��",
		"������",
		"���ϴ�",				//15
		"������",
		"�����ϴ�",
		"�̷¼�",
		"������",
		"Ȯ��, �ڽ�",			//20
		"����",
		"�ڰ��ִ�",
		"���ý�Ű��",
		"������",
		"����, �ɼ�",			//25
		"�巡��",
		"�����ϴ�",
		"�ӱ� ����",
		"�����ϴ�",
		"����",				//30
		"����",
		"�ӱ�",
		"����",
		"��Ű��",
		"�����ϰ�",				//35
		"�����ϴ�",
		"ö���ϰ�",
		"�����ϴ�",
		"����",
		"����",					//40
		"�غ�",
		"����",
		"����ϴ�, ����",
		"���ϰ�",
		"��������",				//45
		"�����",
		"�ǹ�",
		"-�� �ΰ��ϴ�",
		"�����ϴ�",
		"�����ϴ�",				//50
		"����",
		"�����ϴ�",
		"�ͼ���",
		"�ֽ�ȸ��",
		"�䱸�� ����, ����",	//55
		"ȿ��������",
		"�����ϴ�",
		"-�� ���ϴ�",
		"��, �ӹ�, ����",
		"����, ����",			//60
		"�����ϴ�",
		"���� ���",
		"����",
		"����",
		"��������",				//65
		"-���� ������Ű��",
		"�����ϴ�",
		"������, ������ �� ��ġ��",
		"�̷��, �ٹ��Ÿ���",
		"���յ�, �յ���",		//70
		"�ڹ�������",
		"���ô�",
		"����, ������",
		"�����ϴ�",
		"�����ϴ�, �����ϴ�",	//75
		"�����, ������",
		"�����ϴ�, �Ҵ��ϴ�",
		"�����ϴ�",
		"�ּҷ�",
		"å���ִ�",				//80
		"��������; ��Ÿ����",
		"����, ����",
		"�ݴ�",
		"�������; �����ϴ�",
		"�����ϴ�, �����ϴ�",	//85
		"�߸���, �߸�",
		"�ܺο���, �ܺ�������",
		"������, ������; ���õ�",
		"�ñ�������, ���� ����",
		"���; ������",			//90
		"�ǽ��ϴ�, �����ϴ�",
		"����������, �Һ�����",
		"�����ϴ�; ������",
		"������",
		"����",					//95
		"��������, �������",
		"�����ϴ�; �����ϴ�",
		"������",
		"�ؼ�",
		"��Ȯ�ϰ� �ϴ�",		//100
		"����",
		"�ܰ������δ�",
		"�˰� �ִ�",
		"�쿬��",
		"�ٶ�����, �մ���",		//105
		"���������� �ϴ�",
		"��â����, ��������",
		"����",
		"��ȸ, ����",
		"����ϴ�, �����ϴ�",	//110
		"������, ������ �ִ�",
		"��ǰ",
		"����",
		"��ȣ��",
		"���, ������",		//115
		"�����ϴ�; ���� �Ұ����ϴ�",
		"��Ȥ����, ȲȦ��" ,
		"����, ����",
		"�׻�, �ϰ��ǰ�",
		"����; �巯��, �ÿ�",	//120
		"�����ϴ�",
		"��������",
		"��ǥ�ϴ�; �����ϴ�, �����ϴ�"
		}};
		return w;
}
