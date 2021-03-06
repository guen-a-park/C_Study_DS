#include <stdio.h>
//from에 있는 num개의 원반을 by를 거쳐서 to로 이동
void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)	// 이동할 원반의 수가 1개라면
	{
		printf("원반1을 %c에서 %c로 이동\n", from, to);
	}
	else
	{
		HanoiTowerMove(num - 1, from, to, by); //num-1개를 A에서 B로 이동
		printf("원반%d를 %c에서 %c로 이동\n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to); //num-1개를 B에서 C로 이동
	}
}

int main()
{
	// 막대 A의 원반 3개를 막대 B를 경유하여 막대 C로 옮기기
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}
