#include <stdio.h>
#define BASIC_RATE 10.00
#define OVERTIME 1.5
#define TAX_300 0.15
#define TAX_NEXT_150 0.20
#define TAX_REST 0.25

int main(void)
{
	float work_hr, basic, total, taxes, net_pay;

	printf("Please enter how many hours you worked: ");
	scanf("%f", &work_hr);

	if (work_hr <= 0)
	{
		printf("Hours should be a positive, non-zero number!\n");
		total = -1;
	}
	else if (work_hr > 0 && work_hr <= 40)
		total = work_hr * BASIC_RATE;
	else
	{
		basic = 40 * BASIC_RATE;
		total = (((work_hr - 40) * OVERTIME) * BASIC_RATE) + basic;
	}

	if (total <= 300)
		taxes = total * TAX_300;
	else if (total > 300 && total <= 450)
		taxes = (300 * TAX_300) + ((total - 300) * TAX_NEXT_150);
	else
		taxes = (300 * TAX_300) + (150 * TAX_NEXT_150) + ((total - 450) * TAX_REST);

	net_pay = total - taxes;
	
	if (work_hr < 1e-6)
		taxes = net_pay = -1;
	
	printf("Here is the table:\n");
	printf("Total     |Taxes     |Net     \n");
	printf("%10f|%10f|%10f\n", total, taxes, net_pay);

	return 0;
}
