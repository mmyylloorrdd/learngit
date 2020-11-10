#include <stdio.h>
#include <stdlib.h>
typedef int III;

#if 0

struct mystruct
{
    int num;
    char a[10];
    char b[100];
}str[2] = { {1, "125", "2555"} , {2, "356", "5688"} };//一种初始化方式

int main()
{
    printf("%s",str[1].a);
    return 0;
}


#endif // 1

#if 0

union MyUnion
{
    int num;
    double db;
};

int main()
{
    union MyUnion my1;
    my1.db = 1.0;
    printf("%d,%f",my1.num,my1.db);//1, 1.000000公用一段内存
    return 0;
}

#endif // 1

#if 0

typedef struct
{
	struct
	{
		char name[50];
	}sum1;
	int num;
	float height;
	int age;
} stutend;

void main()
{
	stutend sd;
	stutend *p = &sd;
	p -> num = 655;
	strcpy(p->sum1.name ,"fjc");
	printf("%d,%s", p->num, p->sum1.name);
}
#endif // 1

int *go()
{
    int a = 10;
    int *p = &a;
    return p;
}

void main()
{
    printf("%d",(unsigned char)1023);
}
//rengshangreng
