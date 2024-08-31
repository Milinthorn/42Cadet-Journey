#include "libft.h"
#include <stdlib.h>

size_t ft_strlcat( char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    size_t m = 0;

    while(dst[i] != '\0') // 9
        i++;
    while(src[j] != '\0' && j < size)
    {
        dst[i] = src[j]; 
        i++;
        j++;
    }	
    dst[i] = '\0';

}

#include <stdio.h>
int main()
{
    char dst[20] = "Milinthorn"; // 10  
    char src[] = " Pinthasiri";  // 11
    int size = 3;
    printf("%ld\n", ft_strlcat(dst, src, size));
    printf("%s", dst);
}

// เอา src ไปต่อ dst 
// เมื่อต่อเสร็จนับว่า src + dst มีทั้งหมดกี่ตัวแล้วรีเทิร์นออกมา
// ถ้าการต่อสตริงที่มากเกินขนาดบัฟเฟอร์(dst[]) จะต่อตามกำลังบัฟเฟอร์ แต่ รีเทิร์นเป็น src + dst เหมือนเดิม
// ถ้าการต่อสตริงที่เล็กเกินขนาดบัฟเฟอร์(dst[]) จะไม่สามารถต่อตัวใดๆได้เลย แต่ รีเทิร์นเป็น src + dst เหมือนเดิม