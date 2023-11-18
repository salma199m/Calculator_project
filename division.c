
int main(void)
{
	char operatorr;int oprand_1,oprand_2,result=0;
	printf("Please choose opreation:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operatorr);
	printf("Please enter oprand 1:\n");

	fflush(stdin);
	fflush(stdout);
	scanf("%d",&oprand_1);
	printf("Please enter oprand 2:\n");

	fflush(stdin);
	fflush(stdout);
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




int Div(operand1,operand 2)

{

   int res ;

   if(operand2==0)
    {
      printf("Invalid Division by 0");
      return 0;
    } 
 else
   res=operand1/operand2;
   return res;
}