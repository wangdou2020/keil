#include <REGX52.H>
#include <INTRINS.H>

//ÑÓÊ±1000msº¯Êý
void Delay1ms(unsigned int hao_miao)		//@11.0592MHz
{
	while(hao_miao)
	{
		unsigned char i, j;

		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		hao_miao--;
	}
}


void main()
{
	P2=0xFE;//1111 1110;
	Delay1ms(500);
	P2=0xFD;//1111 1101;
	Delay1ms(500);
	P2=0xFB;//1111 1011;
	Delay1ms(100);
	P2=0xF7;//1111 0111;
	Delay1ms(100);
	P2=0xEF;//1110 1111;
	Delay1ms(100);
	P2=0xDF;//1101 1111;
	Delay1ms(100);
	P2=0xBF;//1011 1111;
	Delay1ms(100);
	P2=0x7f;//0111 1111;
	Delay1ms(100);
}
