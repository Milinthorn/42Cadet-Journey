# ชื่อของไฟล์ไบนารีที่ต้องการสร้าง
TARGET = 

# คอมไพเลอร์ที่ใช้ (สามารถใช้ gcc หรือ clang)
CC = clang

# ออปชันที่ใช้ในการคอมไพล์
CFLAGS = -Wall -Wextra -Werror

# รายชื่อไฟล์ object ที่จะถูกสร้างจากไฟล์ source
OBJS = main.o foo.o bar.o

# เป้าหมายเริ่มต้น (default target)
all: $(TARGET)

# เป้าหมายสำหรับการสร้างไบนารีจาก object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# กฎการสร้างไฟล์ object จากไฟล์ source
main.o: main.c foo.h bar.h
	$(CC) $(CFLAGS) -c main.c

foo.o: foo.c foo.h
	$(CC) $(CFLAGS) -c foo.c

bar.o: bar.c bar.h
	$(CC) $(CFLAGS) -c bar.c

# เป้าหมายสำหรับการล้างไฟล์ object และไฟล์ไบนารี
clean:
	rm -f $(OBJS) $(TARGET)

# เป้าหมายสำหรับการทำความสะอาดอย่างละเอียด (รวมไฟล์สำรอง)
fclean: clean
	rm -f $(TARGET)

# เป้าหมายสำหรับการคอมไพล์ใหม่ทั้งหมด
re: fclean all

.PHONY: all clean fclean re
