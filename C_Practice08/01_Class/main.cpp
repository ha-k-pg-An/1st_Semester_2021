#include <stdio.h>
#include <stdlib.h>

struct StructHoge
{
	int value;
};

class ClassHoge
{

public:
	int value;

	void PrintfHelloWorld();
};

void ClassHoge::PrintfHelloWorld()
{
	printf("Hello World\n");
}

int main()
{
	StructHoge struct_hoge;

	struct_hoge.value = 1;

	ClassHoge class_hoge;

	class_hoge.value = 10;

	class_hoge.PrintfHelloWorld();



	system("pause");
	return 0;

}