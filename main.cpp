#include"functions.h"

int main()
{
	ege::setinitmode(ege::INIT_ANIMATION + ege::INIT_WITHLOGO);
	ege::initgraph(Win_W, Win_H);//初始化绘图环境
	setcaption("坦克大战 Demo"); //修改窗口名称
	setbkmode(TRANSPARENT);//设置输出文字时的背景模式为透明


	// 随机数初始化
	ege::randomize();
	// 程序主循环
	//mainloop();
	// 关闭绘图设备
	ege::closegraph();

	return 0;
}