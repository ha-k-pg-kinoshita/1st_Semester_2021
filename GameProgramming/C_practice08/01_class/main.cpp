#include <stdio.h>
#include <stdlib.h>

struct StructHoge
{
	int Value;


};
class ClassHoge
{
	int Value = 10;
	
	void PrintHelloWorld();
	
};
void ClassHoge::PrintHelloWorld()
{
	printf("HelloWorld\n");

}
int main()
{
	StructHoge struct_hoge;
	ClassHoge class_hoge;
	struct_hoge.Value = 1;
	class_hoge.Value = 10;
	class_hoge.PrintHelloWorld();
	system("pause");
	return 0;
	
	
}

