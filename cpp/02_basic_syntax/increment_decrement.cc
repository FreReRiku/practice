/* increment_decrement */
#include <iostream>

int main()
{
    /* インクリメントとデクリメント */
    int x = 0;
    ++x;    // 前置インクリメント
    x++;    // 後置インクリメント
    --x;    // 前置デクリメント
    x--;    // 後置デクリメント

    // 前置の場合は、インクリメント及びデクリメントの演算が先に行われます。
    int a = 5;
    int b = 0;

    b = ++a;    // aをインクリメントしてから、bに代入する。
    std::cout << a << std::endl;    // 6
    std::cout << b << std::endl;    // 6


    // 対して、後置の場合は、インクリメント及びデクリメントの演算以外の処理が先に行われます。
    int c = 5;
    int d = 0;

    d = c++;    // cをdに代入してから、cをインクリメントする。
    std::cout << c << std::endl;    // 6
    std::cout << d << std::endl;    // 5

    // 使用する状況にも依りますが、後置インクリメント/デクリメントよりも前置インクリメント/デクリメントのほうが効率が良いとされています。
    
}