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
		//단어 선택
		n=rand()%123;
		len=strlen(w.eng[n]);
		for(i=0;i<len;i++){
			ans[i]=w.eng[n][i];
			cur[i]='*';
		}
		ans[len]='\0';
		cur[len]='\0';
		r=len*2;
		
		//프로그램 사용
		printf("\n %d글자\n===================================\n\n",len);
		while(strcmp(ans,cur)!=0&&r!=0){
			printf(" 횟수 제한: %d\n %s\n\n 입력>> ",r,cur);
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
				printf(" 존재하지 않는 문자.\n\n===================================\n\n");
				r--;
			}
			else{
				printf(" 해당하는 문자 %d개.\n\n===================================\n\n",len-count);
			}
			count=0;
		}
		
		//결과
		if(r==0){
			printf(" 실패\n ");
		}
		else{
			printf(" 성공\n 차감된 횟수: %d\n",len*2-r);
		}
		printf("\n  %s: %s\n\n",ans,w.kor[n]);
		
		//프로그램 종료 및 재개
		printf("\n 0 또는 s를 입력하여 프로그램 종료.\n 나머지 키를 입력하여 프로그램 재개.\n\n>> ");
		scanf("%s",&inp);
		getchar();
		if(inp[0]=='0'||inp[0]=='s'){
			n=-1;
		}
		else{
			printf("\n=프로그램 재개=\n\n\n");
		}
	}
	printf("\n=프로그램 종료=\n");
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
		},{//==========한글 뜻==========
		"추상적인",
		"개요",
		"증가하는",
		"상호간에",
		"국내의",				//5
		"전통적인",
		"찬성하다",
		"시작되다",
		"상환, 변제, 배상",
		"발생하다",				//10
		"착취하다",
		"임명하다",
		"평가",
		"완전히",
		"평가하다",				//15
		"유능한",
		"지명하다",
		"이력서",
		"지원자",
		"확신, 자신",			//20
		"참고",
		"자격있는",
		"관련시키다",
		"성실한",
		"숙달, 능숙",			//25
		"장래의",
		"걱정하는",
		"임금 대장",
		"모집하다",
		"증명서",				//30
		"직업",
		"임금",
		"복장",
		"지키다",
		"엄격하게",				//35
		"자제하다",
		"철저하게",
		"수정하다",
		"승인",
		"점검",					//40
		"준비",
		"절차",
		"명령하다, 지시",
		"심하게",
		"지속적인",				//45
		"보상금",
		"의무",
		"-를 인가하다",
		"폐지하다",
		"시행하다",				//50
		"법률",
		"제한하다",
		"익숙한",
		"주식회사",
		"요구가 많은, 힘든",	//55
		"효율적으로",
		"지시하다",
		"-할 만하다",
		"일, 임무, 과제",
		"연장, 연기",			//60
		"위임하다",
		"주의 깊게",
		"감독",
		"수정",
		"마지못해",				//65
		"-에게 숙지시키다",
		"전달하다",
		"느슨한, 규율에 못 미치는",
		"미루다, 꾸물거리다",
		"결합된, 합동의",		//70
		"자발적으로",
		"떠맡다",
		"가끔, 때때로",
		"수행하다",
		"감독하다, 지도하다",	//75
		"기밀한, 내밀한",
		"배정하다, 할당하다",
		"조정하다",
		"주소록",
		"책임있는",				//80
		"독점적인; 배타적인",
		"의지, 의향",
		"반대",
		"충격적인; 방해하는",
		"촉진하다, 육성하다",	//85
		"중립성, 중립",
		"외부에서, 외부적으로",
		"정교한, 복잡한; 세련된",
		"시기적절한, 때를 맞춘",
		"즉시; 정각에",			//90
		"실시하다, 실행하다",
		"영구적으로, 불변으로",
		"편집하다; 모으다",
		"차후의",
		"개요",					//95
		"전무지식, 전문기술",
		"증명하다; 설명하다",
		"나머지",
		"준수",
		"명확하게 하다",		//100
		"관점",
		"외관상으로는",
		"알고 있는",
		"우연히",
		"바람직한, 합당한",		//105
		"즉흥적으로 하다",
		"동창생들, 졸업생들",
		"입장",
		"연회, 만찬",
		"헌신하다, 전념하다",	//110
		"유익한, 정보를 주는",
		"골동품",
		"원고",
		"옹호자",
		"기고가, 공헌자",		//115
		"저항하다; 거의 불가능하다",
		"매혹적인, 황홀한" ,
		"독점, 전매",
		"항상, 일관되게",
		"설명; 드러냄, 시연",	//120
		"조사하다",
		"연속적인",
		"공표하다; 광고하다, 선전하다"
		}};
		return w;
}
