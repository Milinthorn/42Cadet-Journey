#include "libft.h"

char *ft_strnstr(const char *dest, const char *src, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t p;

    while(dest[i] != '\0' && i < len)
    {
        if(dest[i] == src[j])
            p = i; // p = 13
        while(dest[i] == src[j])
        {
            i++;
            j++;
        }
        if(src[j] == '\0')
            return (char *)dest + p;
        i++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    char dest[] = "I love Happy Moo Noi so much"; // 28
    char src[] = "Moo";
    int len = 25;// ถ้าค้นหาในจำนวนความยาวที่มากพอก็จะเจอ คำว่า Moo
    printf("%s", ft_strnstr(dest, src, len));
}

/*
dest: ชี้ไปที่สตริงหลักที่ต้องการค้นหา
src: ชี้ไปที่สตริงย่อยที่ต้องการค้นหาใน dest
len: จำนวนตัวอักษรสูงสุดใน haystack ที่จะทำการค้นหา
ดังนั้น ลูปตามความยาว len เจอ Moo มั้ย?
ถ้าเจอ return ตัวอักษรที่ถัดจาก Moo ทั้งหมด
ถ้าไม่เจอ return NULL
*/