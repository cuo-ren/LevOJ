#include<stdio.h>

int cal(int money)
{
	//��λ����ʮ�������±�ʮ���������ӵ���ֵ
	int count = 0, hex_digit = 1, decimal_digit = 1;
	while (money)
	{
		count += (hex_digit - decimal_digit) * (money % 10);
		money /= 10;
		hex_digit *= 16;
		decimal_digit *= 10;
	}
	return count;
}
int main()
{
	int money;
	scanf("%d", &money);
	printf("%d\n", cal(money));
	return 0;
}
