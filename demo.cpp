//
// Created by forgot on 2019/9/3.
//

//从函数返回数组
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// 要生成和返回随机数的函数
int *getRandom() {
    static int r[10];

    // 设置种子
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

// 要调用上面定义函数的主函数
int main() {
    // 一个指向整数的指针
    int *p;

    p = getRandom();
    for (int i = 0; i < 10; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}

//指向数组的指针
//#include <iostream>
//using namespace std;
//
//int main() {
//    // 带有 5 个元素的双精度浮点型数组
//    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//    double *p;
//
//    p = balance;
//
//    // 输出数组中每个元素的值
//    cout << "使用指针的数组值 " << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << "*(p + " << i << ") : ";
//        cout << *(p + i) << endl;
//    }
//
//    cout << "使用 balance 作为地址的数组值 " << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << "*(balance + " << i << ") : ";
//        cout << *(balance + i) << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//#include <iomanip>
//using std::setw;
//
//int main() {
//    int n[10]; // n 是一个包含 10 个整数的数组
//
//    // 初始化数组元素
//    for (int i = 0; i < 10; i++) {
//        n[i] = i + 100; // 设置元素 i 为 i + 100
//    }
//    cout << "Element" << setw(13) << "Value" << endl;
//
//    // 输出数组中每个元素的值
//    for (int j = 0; j < 10; j++) {
//        cout << setw(7) << j << setw(13) << n[j] << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//int main(){
//int N =10;
//int num[10] = {0};
//
//    return 0;
//}


//int main() {
//    int i, j;
//
//    // 设置种子
//    srand((unsigned) time(NULL));
//
//    /* 生成 10 个随机数 */
//    for (i = 0; i < 10; i++) {
//        // 生成实际的随机数
//        j = rand();
//        cout << "随机数： " << j << endl;
//    }
//
//    return 0;
//}
