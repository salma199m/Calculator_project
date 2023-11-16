#include <stdio.h>

int Sum(int oprand1,int oprand2);
int Sub(int oprand1,int oprand2);
int Multi(int oprand1,int oprand2);
int Div(int oprand1,int oprand2);
int Mod(int oprand1,int oprand2);
int main(void)
{
	char operatorr;int oprand_1,oprand_2,result=0;
	printf("Please choose opreation:\n");
	fflush(stdin);
	scanf("%c",&operatorr);
	printf("Please enter oprand 1:\n");
	scanf("%d",&oprand_1);
		printf("Please enter oprand 2:\n");
	scanf("%d",&oprand_2);
	
	switch(operatorr)
        {
          	case'+': 
                  {
			            result=Sum(oprand_1,oprand_2);
		            }break;
		case'-': 
            {
    			 result=Sub(oprand_1,oprand_2);
		    }break;
		case'/': 
         {
    			     result=Div(oprand_1,oprand_2);
		   }break;
		case'*': 
          {
			         result=Multi(oprand_1,oprand_2);
		   }break;
        case'%': 
            {
			            result=Mod(oprand_1,oprand_2);
		   }break;
		   default :
		   {
		       //error
		   }break;
        }
        printf("Result = %d",result);

	return 0;
}

int Mod(int operand1, int operand2)
 {
    
    if (operand2 != 0) 
	{
        return operand1 % operand2;
    } 
	else 
	{
        
        printf(" Division by zero is not allowed.");
        return 0;
	}
}