/* sample15.c */

/* 文字列の入力
 * 数値と同様、文字列を入力する場合にもscanf関数を使うことができます。
 * 文字列を入力する場合、scanf関数で%s指定子を指定します。
 * ただし、配列名の前に&を付けません。
 * 
 * -&をつけない理由-------------------------------------
 * 実は、&をつけないことには非常に重大な理由があります。
 * 配列は、C言語の本質であるポインタそのものであるからです。
 * これはC言語の根底をなす重要なことであるため、
 * 後々じっくりと時間をとって、たっぷりと説明します。
 * ----------------------------------------------
 * 
 * 次のプログラムは、入力した文字列をそのまま表示する例です。
 */

#include <stdio.h>

int main(void)
{
    char str[32];
    scanf("%s", str);
    printf("%s\n", str);

    return 0;
}
