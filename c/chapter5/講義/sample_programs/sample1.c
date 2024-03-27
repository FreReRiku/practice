// 5章： 数値の記憶と計算
/*
    変数：数値を入れておく箱のこと。
    数値を記憶するメモリに名前をつけて管理する方法。
    コンピューターのメモリとは、横一列に膨大に並べられたロッカーのような構造である。
    コンピューターで扱われる数値は、そのロッカーのどこかに入っている。
    普通ならば、そのロッカーの番号を元に数値を入れたり出したりするが、毎回長ったらしい番号を使っていては面倒すぎる。7桁の番号で区別するのは面倒すぎる。
    
    そこで、それぞれのロッカーに名前をつけることで管理を行う。
*/

/*
    変数の宣言方法
    型名　変数名;
    型名とは、記憶しておきたい数値の種類を表す名前である。(int, doubleなど)
    変数名とは、変数につける名前のことである。
    ※変数名の付け方
    1.半角アルファベット、半角数字、半角アンダーバー（_）を使うことができる。
    2.1文字目には数字を使うことが出来ない。
    3.あらかじめ決められた予約語も使用することが出来ない。
    ↓
    既視感がある...そう、これは関数名の名前の付け方と同じなのである。
    では、早速（前置きが長かったが）変数を宣言するプログラムを書いてみる。
*/

#include <stdio.h>

int main(void)
{
    int value; /* 変数宣言の部分 */
    return 0;
}

/*
    注意点
    変数の宣言は基本的に、関数の先頭でしか行うことが出来ない。
    先頭以外で変数を宣言してしまうとエラーになる。

    例：
    # include <stdio.h>

    int main(void)
    {
        printf("Hello\n");
        int value;
        return 0;
    }

    ※しかし、現在のコンパイラーでは関数の先頭以外で宣言しても通ってしまう。
    なぜなら、C++のコンパイラーでは関数中に変数を宣言しても動作してしまうからだ。
    とはいえ、もともとのC言語では使えないということは覚えておいたほうがいい。
*/

/* sample2.cへ続く */
