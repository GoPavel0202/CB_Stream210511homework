#include <iostream>
#include <cstdlib>
#include <cstring>



int main(int argc, const char** argv) { 
//2.1
	int a = 25;
	char b = 2;
	char c;
	c = 'W';
	short d = 48;
	long e = 33;
	bool f = true;
	float g = 1.23456;
    double h = 12.234567;
	const double i = 43.5467;
	typedef enum sym {X=1, x, O, o} rain;
	rain symbol;
	printf("1.������� � ���樠����஢��� ��६���� �ன������ ⨯�� ������\n");
	{
	printf("%d", a);
	printf("%c\n", a);
	}
	printf("%d", b);
	printf("%c\n", b);
	printf("%d", c);
	printf("%c\n", c);
	printf("%d", d);
	printf("%c\n", d);
	printf("%d", e);
	printf("%c\n", e);
	printf("%d\n", f);
	//printf("%c\n", f);
	std::cout << g << std::endl;
	std::cout << h << std::endl;
	std::cout << i << std::endl;
//2.2
	printf("2.������� ����᫥��� � �������묨 ��ਠ�⠬� ᨬ����� ��� ���� � ���⨪�-������\n");
	symbol = x;
	std::cout << symbol << std::endl;
//2.3
	printf("3.������� ���ᨢ, ᯮᮡ�� ᮤ�ঠ�� ���祭�� ⠪��� ����᫥��� � ���樠����஢��� ���.\n");
	char k[] = {'X','x','O','o','\0'};
	printf("%c  ", k[0]);
	printf("%c  ", k[1]);
	printf("%c  ", k[2]);
	printf("%c\n", k[3]);
//2.4
	printf("4. ������� �������� ������ <���� ��� ���� � ���⨪�-������> � ᭠����� ��� �ᥬ� ����室��묨 (�� ��� �����) ᢮��⢠��\n");
	struct play {
		int age;
        int cross;
        int zero;
		float intellect;
        char name[15]; //std::string
        rain crosszero;
        int isHungry : 1;
        int isWalking : 1;
    };
    using Player = struct play;
    Player petya;//��� ��ப�
	petya.age = 5;//᪮�쪮 ���
    petya.zero = 5;//
    petya.intellect = 89.5;
    petya.crosszero = o;
    strcpy(petya.name, "Petya");
	
	printf("���� ��ப \n");
	std::cout << petya.intellect << " ";
    std::cout << petya.crosszero << " ";
    std::cout << petya.name << std::endl;

    Player vasya;
	vasya.age = 5;
    vasya.cross = 4;
    vasya.intellect = 88.6;
    vasya.crosszero = X;
    strcpy(vasya.name, "Vasya");
	
	printf("��ன ��ப \n");
    std::cout << vasya.intellect << " ";
    std::cout << vasya.crosszero << " ";
    std::cout << vasya.name << std::endl;
//2.5
	return 0;
}
