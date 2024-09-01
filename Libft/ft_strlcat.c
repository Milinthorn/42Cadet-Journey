#include "libft.h"

size_t ft_strlcat( char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
	j = 0;
	if (size <= i)
		return (size + i);
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i + ft_strlen(&src[j]));
}

#include <stdio.h>
int main()
{
    char dst[10] = "Hello"; // 5  
    char src[] = "World";  // 5
    int size = 7; // เก็บได้แค่ 7 ไบต์
    printf("%ld\n", ft_strlcat(dst, src, size));
    printf("%s", dst);
}

// เอา src ไปต่อ dst 
// เมื่อต่อเสร็จนับว่า src + dst มีทั้งหมดกี่ตัวแล้วรีเทิร์นออกมา
// ถ้าการต่อสตริงที่มากเกินขนาดบัฟเฟอร์(dst[]) จะต่อตามกำลังบัฟเฟอร์ แต่ รีเทิร์นเป็น src + dst เหมือนเดิม
// ถ้าการต่อสตริงที่เล็กเกินขนาดบัฟเฟอร์(dst[]) จะไม่สามารถต่อตัวใดๆได้เลย แต่ รีเทิร์นเป็น src + dst เหมือนเดิม