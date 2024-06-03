/* sample7.c */

/* ローカル変数は独立する
 * 前項では、グローバル変数はすべての関数で共有されることも説明しました。
 * もしも、関数内にグローバル変数と同じ名前のローカル変数がある場合、
 * どちらが優先されるのか、実験してみたいと思います。
 * 次のプログラムは、main関数内で変数countを宣言してみた例です。
 */

#include <stdio.h>

int count;      /* グローバル変数 */

int countfunc(void);

int main(void)
{
    int count;  /* main関数内で同名のローカル変数を宣言 */

    countfunc();
    count = 10;
    countfunc();
    countfunc();
    printf("main: count = %d\n", count);

    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n", count);
    return count;
}
/*
 * まず、このプログラムが実行できることから、
 * グローバル変数と同名のローカル変数を宣言できることがわかります。
 * 
 * どちらが優先されるのかを知るために結果を見てみると、
 * main関数内で変数countの値を変更しているのにもかかわらず、
 * countfunc関数何の数値は全く変更されていません。
 * main関数の最後では、関数内で代入した値(count = 10)が表示されています。
 * つまり、グローバル変数と同名のローカル変数ではローカル変数が優先されるのです。
 * 
 * これも、前節で説明した、関数の独立性を維持するための仕組みです。
 * もし、グローバル変数が優先されるなら、関数をコピーする際に
 * その関数内の変数がグローバル変数と同じ名前化調べなくてはならず、面倒です。
 * 
 * -ソースファイルとグローバル変数------------------------------
 * ここでは、グローバル変数はすべての関数で共有されると説明しましたが、
 * 正確には、1つのソースファイル内で共有されています。
 * 
 * 例えば、main.cファイルの先頭で宣言されたグローバル変数は、
 * main.cファイル内のすべての関数から代入や値の参照が可能ですが、
 * 別のファイル、例えばdata.cファイルの関数からは参照できません。
 * 
 * しかし、別のファイルに変数の名前と型を教えてやれば、
 * グローバル関数はすべてのファイルから使用できるようになります。
 * 
 * 複数のソースファイルを使う方法はまだ説明していないので、
 * 現段階では、すべての関数で共有されると考えても違和感ありません。
 */