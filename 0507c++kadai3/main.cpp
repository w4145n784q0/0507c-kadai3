#include<iostream>
#include"CircleClass.h"
//メイン関数
int main()
{
	//CircleClass クラスのインスタンス（実態）を作る
	CircleClass t;

	//３つのメンバ関数を呼び出す
	t.Input();
	t.Calc();
	t.Disp();

}
