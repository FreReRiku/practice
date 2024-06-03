/* sample1.c */
/* 13章: 複数の変数を一括して扱う */

/* 複数の変数をまとめて扱う */

/* 配列の概念
 * 今までは、変数を宣言する場合、必ず1つだけを宣言してきました。
 * しかし、場合によっては、大量の変数が必要になることもあります。
 * 例えば、100人のテストの点数を管理するプログラムを作る場合、どうしても100の変数が必要になってきます。
 * 
 * もし、いちいち100この変数を宣言していてはキリがありません。
 * このような場合には、配列を使って、一度に複数の変数を宣言します。
 * 配列とは、複数の同じ型の変数をまとめて取り扱えるようにする仕組みです。
 * 
 * -キーワード----------------------------------------
 *  【配列】
 *  同じ型の変数を複数宣言し、番号によって管理することで、
 *  複数のデータを一括して取り扱えるようにする仕組み。
 * ----------------------------------------------
 * 
 * 配列として宣言された変数は、1つ1つが番号によって区別されます。
 * 番号を適当に切り替えながら使うことで、100個でも1000個でも
 * 大量の変数を同じように取り扱うことができるようになります。
 */

/* 配列の宣言
 * 配列は、次のようにして宣言します。
 *
 * -配列-------------------------------------------
 *  型名 配列名[要素数];
 * ----------------------------------------------
 * 
 * 型名とは、今までの変数の型と同じ意味です。
 * ここで指定した型の変数が、要素数の数だけ作られます。
 * 
 * 配列名とは、配列全体の名前のことです。
 * ここの変数を使う場合、この名前に番号を就けることで区別します。
 * 
 * 要素数とは、作られる変数の数のことです。
 * ここで指定した数だけ、指定した型の変数が作られます。
 * ここで数として指定できるのは、整数値のみです。
 * 宣言のときには、整数型の変数を指定することは出来ません。
 * 
 * 以上が、配列の宣言の方法です。
 * 次は、int型の変数を100個持つ、配列arrayを宣言する例です。
 * 
 * -配列arrayを宣言する---------------------------------
 *  int array[100];
 * ----------------------------------------------
 */

/* 配列の取り扱い
 * 配列の取り扱いは、配列名に番号を付けることを除けば
 * 変数とまったく同じです。
 * 配列名に番号を付けるには、次のようにします。
 * 
 * -配列名に番号を付ける-----------------------------------
 *  配列名[番号]
 * ----------------------------------------------
 * 
 * ここで注意していただきたいのは、番号は0番から始まる点です。
 * 数学的には、0から始まったほうが都合が良いケースがほとんどです。
 * 初めの番号に10を足せば10になるので、10個先であることが明確にわかります。
 * 
 * 0番から始まることにさえ気を付ければ、後は普通の変数となんら変わりません。
 * 次のプログラムは、配列arrayの10番目の要素を使う例です。
 */

#include <stdio.h>

int main(void)
{
    int array[100];

    array [9] = 100;    /* 0番からなので9が10番目 */
    printf("1:%d\n", array[9]);
    array[9]++;
    printf("2:%d\n", array[9]);

    return 0;
}

/*
 * 結果を見ると、普通の変数を使ったときと
 * まったく同じであることがわかります。
 */
