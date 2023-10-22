#include<stdio.h>
#include<string.h>
char fun()
{
 char ch=2;
 printf("%c\n",ch);
 return 0;	
}
char heart()
{
 char ch=3;
 printf("%c\n",ch);
 return 0;	
}
int main()
{
	int s,point,n,h,count=0;
	char name[40];
	printf("\n");
	printf("\n"); 
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t\t\t  WELLCOME TO THE");
	printf("\n");
	printf("\t\t\t\t\t    KAUN BANEGA ");
	printf("\n");
	printf("\t\t\t\t\t     CROREPATI\n ");
	printf("\n");
	printf("PLAYER NAME  ");
	gets(name);
	strupr(name);
	printf("\n");
	printf("HELLO %s!",name);
	printf("\n");
	printf("\t\t\t\t  *************LEVEL 1****************\n");
	printf("\n");
	printf("\t\t\t\t\t   RULE OF GAME\n\n");
	printf("\t\t\t\t     FOR CORRECT ANSWER + Rs.50\n\n");
	printf("\t\t\t\t     FOR WRONG ANSWER  -Rs.20\n\n");
	printf("\t\t\t\t\t TO START THE GAME \n\n");
	printf("\t\t\t\t\t%s PRESS '1' KEY ",name);
	scanf("%d",&s);

    if(s==1)
{
    printf("\nQ.01 which is the thrird highest civilian award in India ?\n\n");
    printf("1) Bharat Ratna  2) Padma Bhushan\n");	
    printf("3) Padma Shri    4) Padma Vibhushan\n");	
    
	scanf("%d",&n);
    	if(n==2)
    	{
    		
    		printf("CORRECT ANSWER ");
    		fun();
    		
    		point=point+50;
		}
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    }
   	printf("\nQ.02 When is national Voters Day celebrated in India ?\n\n");
    printf("1) 5 January      2) 5 December\n");	
    printf("3) 7 December     4) 25 January\n");	
    scanf("%d",&n);
    	if(n==4)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
        	point=point+50;
		}    
      	else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    }
	  	
	printf("\nQ.03 Where was Mahatma Gandhi born ?\n\n");
    printf("1)Porabandar      2) Allahabad\n");	
    printf("3)Lucknow         4) Gandhi Nagar\n");	
    scanf("%d",&n);
    	if(n==1)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		}  
			else
        {
        	printf("WRONG ANSWER");
        	point=point-20;
	    } 
	printf("\nQ.04 Which is the lower house of the parliment of india ?\n\n");
    printf("1)Lok Sabha       2)Rajya Sabha\n");	
    printf("3)Vidhan Sabha    4)None of these\n");	
    scanf("%d",&n);
    	if(n==1)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    }   
	printf("\nQ.05 Name the river bank on which Taj Mahal is situated ?\n\n");
    printf("1)Ganges           2)Yamuna\n");	
    printf("3)Godavari         4)Indus\n");	
    scanf("%d",&n);
    	if(n==2)
    	{ 
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    }   
		       
	printf("\nQ.06 Find the missing Number 2,5,10,__,26,37 ?\n\n");
    printf("1)15               2)18\n");	
    printf("3)17               4)14\n");	
    scanf("%d",&n);
    	if(n==3)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    } 
	printf("\nQ.07  If a=1,A=5,b=4,c=0,C=8 ,z=7,d=-10 then Find the A+c+z-d ?\n\n");
    printf("1)12               2)30\n");	
    printf("3)18               4)22\n");	
    scanf("%d",&n);
    	if(n==4)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    } 
	printf("\nQ.08 Which was the first satellite of India ?\n\n");
    printf("1)Bhaskara       2)Aryabhata\n");	
    printf("3)Rohini         4)Kalpana\n");	
    scanf("%d",&n);
    	if(n==2)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    } 
	printf("\nQ.09  Where is Tehri Dam Situated ?\n\n");
    printf("1)Uttar Pradesh        2)Odisha\n");	
    printf("3)Madhya Pradesh       4)Uttarakhand\n");	
    scanf("%d",&n);
    	if(n==4)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    }   
	printf("\nQ.10 Which is the longest River flowing in India ?\n\n");
    printf("1)Indus           2)Godavari\n");	
    printf("3)Ganga           4)Brahmputra\n");	
    scanf("%d",&n);
    	if(n==3)
    	{
    		printf("CORRECT ANSWER ");
    		fun();
    		point=point+50;
		} 
			else
        {
        	printf("WRONG ANSWER\n");
        	point=point-20;
	    }     
}
if(point>0)
{
	printf("\n");
	printf("*********************************\n");
	printf("%s WIN Rs. %d ",name,point);heart();
	
}
else 
{	
printf("\n");
printf("|| %s TRY AGAIN RS.00.00 ||",name);
}

return 0;
}
