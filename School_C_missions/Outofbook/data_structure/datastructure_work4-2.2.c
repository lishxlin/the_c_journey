#include <stdio.h>

struct STUDENT
{
	int num;
	int class;
	char name[10];
	int score_1, score_2, score_3;
} stu[5];

void input(struct STUDENT *st, int);
void calc_avg(struct STUDENT *st, int);
void find_highest(struct STUDENT *st, int);

int main(void)
{
	input(stu, 5);
	calc_avg(stu, 5);
	find_highest(stu, 5);

	return 0;
}

void input(struct STUDENT *st, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Student %d infomations:\n", i + 1);
		while (1)
		{
			printf("\tNumber: ");
			scanf("%d", &st[i].num);
			printf("\tClass: ");
			scanf("%d", &st[i].class);
			printf("\tName: ");
			scanf("%s", st[i].name);
			printf("\tScore 1: ");
			scanf("%d", &st[i].score_1);
			printf("\tScore 2: ");
			scanf("%d", &st[i].score_2);
			printf("\tScore 3: ");
			scanf("%d", &st[i].score_3);
			break;
		}
	}
}

void calc_avg(struct STUDENT *st, int n)
{
	double total;
	for (int i = 0; i < n; i++)
	{
		printf("Student %d average:\n", i + 1);
		total = 0;
		total += st[i].score_1 + st[i].score_2 + st[i].score_3;
		printf("\t%lf\n", total / 3);
	}
}

void find_highest(struct STUDENT *st, int n)
{
	double total, avg;
	double avg_list[5];
	for (int i = 0; i < n; i++)
	{
		total = 0;
		avg = 0;
		total += st[i].score_1 + st[i].score_2 + st[i].score_3;
		avg = total / 3;
		avg_list[i] = avg;
	}

	double TMP_MAXED = avg_list[0];
	int index = 0;

	for (int i = 1; i < n; i++)
		if (TMP_MAXED < avg_list[i])
		{
			TMP_MAXED = avg_list[i];
			index = i;
		}
	if (TMP_MAXED == avg_list[0])
		index = 0;

	printf("Following student has highest average score:\n");
	printf("\tName: %s\n", stu[index].name);
	printf("\tNumber: %d\n", stu[index].num);
	printf("\tClass: %d\n", stu[index].class);
	printf("\tScore1: %d\n", stu[index].score_1);
	printf("\tScore2: %d\n", stu[index].score_2);
	printf("\tScore3: %d\n", stu[index].score_3);

}
