/* sample4.c */

/*
 * sample3.cで書いたプログラムはちゃんと正しく動作します。
 * このコードですが、幼児でも子供でもなければ確実に大人だと断言できます。同様に、幼児でなければ子供か大人のどちらかになります。
 * それにも関わらず、4回も年齢をチェックしており、無駄のあるプログラムになっています。
 * 
 * 幼児ではない、大人ではない、といった条件に一致しない場合の処理にはelse文を使用できます。
 * したがって、else文を使用すれば無駄な年齢チェックを減らすことができます。
 * 今までは、条件に一致しない場合の処理は1つだけでした。今回は条件に一致しない場合の処理が、幼児ではない、大人ではないの2つあります。
 * 
 * 条件に一致しない場合の処理が2つある場合には、if ~ else文を連続させて書くことができます。
 * つまり、else文の実行文として、if文を使用することで、直前に判断した内容を生かすことができるため無駄がなくなります。
 * この考え方で修正したプログラムは次のとおりになります。
 */

#include <stdio.h>

int main(void)
{
    int age;
    printf("年齢: ");
    scanf("%d", &age);

    if (age <= 3) {
        printf("幼児であるため、料金は無料です。\n");
    } else if (age <= 12) {
        printf("子供の料金は 250円 です。\n");
    } else {
        printf("大人の料金は 400円 です。\n");
    }

    return 0;
}

/*
 * このプログラムのポイントはelse文で実行する文にif文を使っている点です。　<= 重要！
 * まず初めのif文で幼児であるのかどうかを判定しています。
 * 次に、幼児でない場合は子供であるかを判定しています。
 * 子供でもない場合は確実に大人なので判断せずに表示します。
 * 年齢のチェックが2回だけですんでおり、無駄が大幅に減少しています。
 * 
 * このプログラムでは、else文のすぐ後ろにif文をつなげています。そのため、この書き方を俗に「else-if文」と呼ぶことがあります。
 * この書き方の良いところは、条件がいくつ増えても横に長くならないことです。そのため、比較的見やすいプログラムになります。
 */
