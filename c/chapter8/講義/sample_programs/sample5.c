/* sample5.c */

// 番号による場合分け

/* 番号と対応させる処理
 * 今までに説明した方法で、もはやどんな条件の判断も可能です。しかし、もう一つ、C言語に用意された便利な判断文を知っておきましょう。
 * 我々の身の回りでは、番号分けをすることがよくあります。
 * その1例として、学校のクラスの出席番号名簿を考えてみましょう。
 * ある学校のあるクラスの出席番号名簿が次のとおりであるとします。
 * 
 * 番号     名前            性別
 * -------------------------------
 * 1        野比漢      男性
 * 2        源姫        女性
 * 3        豪田        男性
 * 4        骨漢        男性
 * 
 * 上記を元に、出席番号を入力すると、対応する名前を表示するプログラムを作ってみましょう。
 */

/* switch文 ~ case の使い方
 * 複数の番号との一致を判断する場合に限り、if~else文よりも簡単に書ける書き方が用意されています。
 * それがswitch文 ~ case です。
 * switch, case の使い方は次のように書くことができます。
 * -----------------------------------------------------------
 * switch (条件式) {
 * case 数値:
 *  実行文;
 *  break;
 * case 数値:
 *  実行文;
 *  break;
 * }
 * -----------------------------------------------------------
 * switch文は、指定された条件式の値と同じ値のcaseまで、処理の順番をジャンプします。
 * ジャンプ先ではcase以下の文を実行し、break文を見つけたら、switch文のあとで囲っている{}のなかから抜け出します。
 * 次のプログラムは、switch文~caseを使って書き直した例です。
 */

#include <stdio.h>

int main(void)
{
    int no;
    scanf("%d", &no);

    switch (no) {
        case 1:
            printf("ノビ漢\n");
            break;
        
        case 2:
            printf("源姫\n");
            break;
        
        case 3:
            printf("豪田\n");
            break;

        case 4:
            printf("骨漢\n");
            break;
    }

    return 0;
}


/* 
 * 先程のプログラムよりも、番号との対応がわかりやすく、美しいコードになっています。
 * もちろん、番号を入力すると、対応する名前を表示させます。
 * なお、if文と異なり、{}なしで複数の文を並べても構いません。
 * -------------------------------------------------------------------
 * プログラマーは芸術家
 * 先程から、美しく、などという言葉を使用していますが
 * 実はプログラマーの間では意外にも普通に使用される言葉です。
 * プログラマーの仕事は単純な計算を複雑に組み合わせるパズルであり、
 * それはある側面では芸術に近いと言える部分もあります。
 */
