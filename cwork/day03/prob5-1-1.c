#include <stdio.h>

int main23234234234(void)
{
	//µÎÁ¡¿¡ ÁÂÇ¥¸¦ ÀúÀåÇÏ´Â º¯¼ö
	int x1, y1; //ÁÂ»ó´ÜÀÇ ÁÂÇ¥
	int x2, y2; //¿ìÇÏ´ÜÀÇ ÁÂÇ¥
	//ÁÂÇ¥°ª ÀÔ·Â
	printf("ÁÂ»ó´ÜÀÇ ÁÂÇ¥°ª(2 4) : ");
	scanf("%d %d", &x1, &y1);
	//¿ìÇÏ´ÜÀÇ ÁÂÇ¥
	printf("¿ì»ó´ÜÀÇ ÁÂÇ¥°ª(4 8) : ");
	scanf("%d %d", &x2, &y2);
	int width = x2 - x1;	//Æø	(x2 > x1)
	int height = y2 - y1;	//³ôÀÌ	(y2	> y1)
	int area = width * height;
	printf("³ÐÀÌ = %d\n" , area);
	return 0;
}