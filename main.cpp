//1.1
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int a, b, c;
//    scanf ("%d %d %d", &a, &b, &c);
//    printf ("%d\n", b);
//    return 0;
//}
//1.2
//#include <iostream>
//#include <cstdio>
//using namespace std;
//void myPrint(string s1) {
//    cout << "  " + s1 << endl;
//    cout << " " + s1 + s1 + s1 << endl;
//    cout << s1 + s1 + s1 + s1 + s1 << endl;
//    cout << " " + s1 + s1 + s1 << endl;
//    cout << "  " + s1 << endl;
//}
//int main() {string s1;
//    getline(cin, s1);
//    myPrint(s1);
//    return 0;
//}

//1.3
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {    char ch;
//    int i;
//    cin >> ch;
//    i = ch;
//    cout << i;
//    return 0;
//}
//1.4
//#include <iostream>
//using namespace std;
//int main() {
//    int i;
//    char ch;
//    cin>>i;
//    ch=(char)i;
//    cout<<ch;
//    return 0;
//}

//1.5
//#include <iostream>
//using namespace std;
//int main() {
//    int i;
//    short sh;
//    cout << sizeof(i) <<" "<<sizeof(sh)<< endl;
//    return 0;
//}

//1.6
//#include <iostream>
//using namespace std;
//int main() {
//    float f;
//    double d;
//    cout << sizeof(f) <<" "<<sizeof(d)<< endl;
//    return 0;
//}


//2.1
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int a, b, c;
//    scanf ("%d %d %d", &a, &b, &c);
//    printf ("%8d %8d %8d",a,b,c);
//    return 0;
//}

//2.2
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    double f;
//    scanf ("%lf", &f);
//    printf ("%.12lf",f);
//    return 0;
//}

//2.3
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main(){
//    char c;
//    int i;
//    float f;
//    double lf;
//    scanf("%c\n%d\n%f\n%lf",&c,&i,&f,&lf);
//    printf("%c %i %.6f %.6lf",c,i,f,lf);
//    return 0;
//}


//2.4
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main(){
//    double lf;
//    scanf("%lf",&lf);
//    double v = (double)4/3*3.14*lf*lf*lf;
//    printf("%.2lf",v);
//    return 0;
//}


//2.5
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int h, r;
//    double Pi = 3.14159;
//    scanf("%d %d", &h, &r);
//    double v = Pi * r * r * h;
//    int i =(int)(20*1000/v)+1;
//    printf("%d",i);
//    return 0;
//}

//exam
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//int main(){
////    cout<<6 * 4 / 5 + (7 % 2)<<endl;
////    int a = 0,b = 10, c;
////    c = a++;
////    c = ++b;
////    cout << a << "," << b << "," << c << endl;
////    char d = 'a' + 4;
////    cout << d << "," << (int) d + 3 << endl;
//    unsigned int x = 0xffffffff;
//
//    unsigned int b = x + 2;
//
//    int y = x;
//
//    printf("%x,%d,%x,%d",y,y,b,b);
//    return 0;
//}


//输出所有输入的字符
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int c;
//    while ((c = cin.get()) != EOF) {
//        cout << (char) c;
//    }
//    return 0;
//}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int i =20/-3;
//   cout<<i<<endl;
//    return 0;
//}
//3.1
//#include <iostream>
//using namespace std;
//int main() {
//    int i;
//    cin >> i;
//    if (i % 2 == 0) {
//        cout << "even";
//    } else {
//        cout << "odd";
//    }
//    return 0;
//}
//3.2
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    double a, b, c, x1, x2;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    if (a == 0) {
//        return 0;
//    }
//    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//    double d = b * b - 4 * a * c;
//    if (d == 0) {
//        printf("x1=x2=%.5lf", x1);
//    } else if (d > 0) {
//        printf("x1=%.5lf;x2=%.5lf", x1, x2);
//    } else {
//        double aa = -b / (2 * a);
//        if (aa == 0) { aa = 0.0; }
//        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", aa, sqrt(4 * a * c - b * b) / (2 * a), aa,
//               sqrt(4 * a * c - b * b) / (2 * a));
//    }
//    return 0;
//}

//3.3
//#include <iostream>
//using namespace std;
//int main() {
//    int x,y;
//    cin >> x>>y;
//    if(x>=-1&&x<=1&&y>=-1&&y<=1){
//        cout<<"yes";
//    }else{
//        cout<<"no";
//    }
//    return 0;
//}

//3.4
/*
 * 你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？*/
//#include <iostream>
//using namespace std;
//int main() {
//    int n,x,y;
//    int l;
//    cin >>n>> x>>y;
//    l= (int) (n - (double)y / x);
//    if(l<=0){ //要考虑吃完为0的情况
//        l=0;
//    }
//    cout<<l;
//    return 0;
//}

//3.5
/*一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。*/
//#include <iostream>
//using namespace std;
//int main() {
//    int x,y;
//    char c;
//    cin >>x>> y>>c;
//    if(c=='+'){
//        cout<<x+y;
//    }
//    else if(c=='-'){
//        cout<<x-y;
//    }
//    else if(c=='*'){
//        cout<<x*y;
//    }
//    else if(c=='/'){
//        if(y==0){
//            cout<<"Divided by zero!";
//        }else{
//            cout<<x/y;
//        }
//    } else{
//        cout<<"Invalid operator!";
//    }
//    return 0;
//}

//3.6
/*描述
读入n（1 <= n <= 10000）个整数，求它们的和与均值。
*/

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    int n;
//    int in;
//    int max = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &in);
//        max += in;
//    }
//    printf("%d %.5lf", max, (double) max / n);
//    return 0;
//}

//3.7
/*给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。*/
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int in;
//    int min;
//    int max;
//    cin>>n;
//    for (int i = 0; i < n; i++) {
//        cin>>in;
//        if (i==0){
//            max=in;
//            min=in;
//        }
//        if(in>max){
//            max=in;
//        }
//        if(in<min){
//            min=in;
//        }
//    }
//    cout<<max-min;
//    return 0;
//}

//3.8
/*2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
 * 样例输入
3
1 0 3
3 1 0
0 3 0
样例输出
4 4 3 11*/
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int a,b,c;
//    int asum=0,bsum=0,csum=0;
//    cin>>n;
//    for (int i = 0; i <n ; ++i) {
//        cin>>a>>b>>c;
//        asum+=a;
//        bsum+=b;
//        csum+=c;
//    }
//    cout<<asum<<" "<<bsum<<" "<<csum<<" "<<asum+bsum+csum;
//    return 0;
//}

//3.9
/*给出一个整数a和一个正整数n，求乘方a^n。*/
//#include <iostream>
//using namespace std;
//int main() {
//    int a, n;
//    cin >> a >> n;
//    int square = a;
//    for (int i = 0; i < n - 1; i++) {
//        square *= a;
//    }
//    cout << square;
//    return 0;
//}

//3.10
/*鸡尾酒疗法，原指“高效抗逆转录病毒治疗”（HAART），由美籍华裔科学家何大一于1996年提出，是通过三种或三种以上的抗病毒药物联合使用来治疗艾 滋病。该疗法的应用可以减少单一用药产生的抗药性，最大限度地抑制病毒的复制，使被破坏的机体免疫功能部分甚至全部恢复，从而延缓病程进展，延长患者生 命，提高生活质量。人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，可用通过临床对照实验的方式 进行。假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，如果y-x大于5%，则效果更好，如果x-y大于5%，则效果更差，否则称为效果差不多。下面给 出n组临床对照实验，其中第一组采用鸡尾酒疗法，其他n-1组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。*/
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    int a,b;
//    double ab;
//    int x,y;
//    double xy;
//    cin >> n;
//    string str[n];
//    for (int i = 0; i < n; i++) {
//        if(i==0){
//            cin>>a>>b;
//            ab=(double)b/a;
//        } else{
//            cin>>x>>y;
//            xy=(double)y/x;
//            if((xy-ab)>0.05){
//                str[i]="better";
//            }else if((ab-xy)>0.05){
//                str[i]="worse";
//            }else{
//                str[i]="same";
//            }
//        }
//    }
//    for (int j = 1; j <n ; ++j) {
//        cout<<str[j]<<endl;
//    }
//    return 0;
//}

//4.1
/*所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，得到的结果再按照上述规则重复处理，最终总能够得到1。如，假定初始整数为5，计算过程分别为16、8、4、2、1。
程序要求输入一个整数，将经过处理得到1的过程输出来。*/
/*#include <iostream>
using namespace std;
void jiaogu(long long i) {
    if (i == 1) {
        cout << "End";
        return;
    } else if (i % 2 == 1) {
        cout << i << "*3+1=" << i * 3 + 1 << endl;
        i = i * 3 + 1;
    } else {
        cout << i << "/2=" << i / 2<<endl;
        i = i / 2;
    }
    jiaogu(i);
}
int main() {
    long long n;
    cin >> n;
    jiaogu(n);
    return 0;
}*/

//4.2
/*监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常，现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。*/

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n, a, b;
//    int num = 0;
//    cin >> n;
//    int max = 0;
//    for (int i = 1; i <= n; i++) {
//        cin >> a >> b;
//        if ((90 <= a && a <= 140) && (60 <= b && b <= 90)) {
//            ++num;
//            max = num > max ? num : max;
//        } else {
////            max = num > max ? num : max;
//            num = 0;
//        }
//    }
//    cout << max;
//    return 0;
//}

//4.3 数字反转
/*给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例2）。*/


//#include<iostream>
//#include <cmath>
//using namespace std;
//void getReverse(int n){
//    while (true) {
//        if (n % 10 == 0){
//            n /= 10;
//        }
//        else { break; }
//    }
//    while (true) {
//        if (n / 10 == 0) {
//            cout << n << endl;
//            break;
//        }
//        cout << n % 10;
//        n /= 10;
//    }
//}
//int main() {
//    int n;
//    cin >> n;
//    if (n == 0) { cout << n; }
//    else if (n > 0) {
//        getReverse(n);
//    } else {
//        cout <<"-";
//        n=abs(n);
//        getReverse(n);
//    }
//    return 0;
//}

//4.4   求特殊自然数
/*一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示。*/
//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    int a7, b7, c7, a9, b9, c9;
//    for (int i = 1; i < 666; ++i) {
//        a7 = i / 49;
//        b7 = (i / 7) % 7;
//        c7 = i % 7;
//        a9 = i / 81;
//        b9 = (i / 9) % 9;
//        c9 = i % 9;
//        if (a7 == c9 && b7 == b9 && c7 == a9) {
//            cout << i << endl;
//            cout << a7 << b7 << c7 << endl;
//            cout << a9 << b9 << c9 << endl;
//        }
//    }
//    return 0;
//}


//4.5
/*雇佣兵的体力最大值为M，初始体力值为0、战斗力为N、拥有X个能量元素。

当雇佣兵的体力值恰好为M时，才可以参加一个为期M天的战斗期，战斗期结束体力值将为0。在同一个战斗期内，雇佣兵每连续战斗n天，战斗力就会上升1点，n为当前战斗期开始时的战斗力。

一个战斗期结束后，雇佣兵需要用若干个能量元素使其体力恢复到最大值M，从而参加下一个战斗期。每个能量元素恢复的体力值不超过当前的战斗力。每个能量元素只能使用一次。

请问：雇佣兵的战斗力最大可以到达多少。*/

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int M, N, X;
//    cin >> M >> N >> X;
//    int maxN=N;
//    cout<<maxN;
//    return 0;
//}


//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//
//    int M, N, X;
//    scanf("%d %d %d", &M, &N, &X);
//    while (M / N > 0) {
//        int y = 0;
//        if (M % N != 0) {
//            y = M / N + 1;
//        } else {
//            y = M / N;
//        }
//        if (y > X) {
//            break;
//        }
//        X = X - y;
//        N = M / N + N;
//    }
//    printf("%d", N);
//    return 0;
//}

//4.6 数字统计
/*请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。

比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。*/
//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int L, R;
//    cin >> L >> R;
//    int count = 0;
//    int temp;
//    for (int i = L; i <= R; ++i) {
//        temp = i;
//        while (temp > 1) {
//            if (temp % 10 == 2) {
//                count++;
//            }
//            temp=temp/10;
//        }
//    }
//    cout<<count;
//    return 0;
//}


//5.1 输出一个整数序列中与指定数字相同的数的个数。

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//
//    int N, a, m, count=0;
//    cin >> N;
//    int ints[N];
//    for (int i = 0; i < N; ++i) {
//        cin >> a;
//        ints[i] = a;
//    }
//    cin>>m;
//    for(int i = 0; i < N; ++i){
//        if (ints[i]==m){
//            count++;
//        }
//    }
//    cout<<count;
//    return 0;
//}

//5.2
/*陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。

现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。*/

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//
//    int H, h,count=0;
//    int hei[10];
//    for (int i = 0; i <10 ; ++i) {
//        cin>>H;
//        hei[i]=H;
//    }
//    cin>>h;
//    for (int i = 0; i <10 ; ++i) {
//       if( h+30>=hei[i]){
//            count++;
//        }
//    }
//    cout<<count;
//    return 0;
//}

//5.3
/*某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。*/
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    int n, age, age0 = 0, age19 = 0, age36 = 0, age61 = 0;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> age;
//        if (0 <= age && age <= 18) {
//            age0++;
//        } else if (19 <= age && age <= 35) {
//            age19++;
//        } else if (36 <= age && age <= 60) {
//            age36++;
//        } else if (61 <= age) {
//            age61++;
//        }
//    }
//    printf("%.2lf%%\n", (double) age0*100 / n);
//    printf("%.2lf%%\n", ((double) age19*100 / n));
//    printf("%.2lf%%\n", ((double) age36*100 / n));
//    printf("%.2lf%%\n", ((double) age61*100 / n));
//    return 0;
//}


//5.4
/*某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。

由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。*/
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    int tree[10000];
//    int L, M;
//    int start, end;
//    int count = 0;
//    cin >> L >> M;
//    for (int j = 0; j <= L; ++j) {
//        tree[j] = 1;
//    }
//    for (int i = 0; i < M; ++i) {
//        cin >> start >> end;
//        for (int j = start; j <= end; ++j) {
//            tree[j] = 0;
//        }
//    }
//    for (int k = 0; k <= L; ++k) {
//        if (tree[k] == 1) {
//            count++;
//        }
//    }
//    cout << count;
//    return 0;
//}

//5.5
/*给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25*/

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    int a, b, c, d, e, wMax[5], hMin[5];
//    int s[5][5];
//    for (int i = 0; i < 5; ++i) {
//        cin >> a >> b >> c >> d >> e;
//        s[i][0] = a;
//        s[i][1] = b;
//        s[i][2] = c;
//        s[i][3] = d;
//        s[i][4] = e;
//    }
//    for (int j = 0; j < 5; ++j) {
//        wMax[j] = s[j][0];
//        for (int i = 0; i < 5; ++i) {
//            if (s[j][i] > wMax[j]) {
//                wMax[j] = s[j][i];
//            }
//        }
//    }
//    for (int k = 0; k < 5; ++k) {
//        hMin[k] = s[0][k];
//        for (int i = 0; i < 5; ++i) {
//            if (s[i][k] < hMin[k]) {
//                hMin[k] = s[i][k];
//            }
//        }
//    }
//    for (int l = 0; l < 5; ++l) {
//        for (int i = 0; i < 5; ++i) {
//            if (s[l][i] == wMax[l] && s[l][i] == hMin[i]) {
//                cout << l + 1 << " " << i + 1 << " " << s[l][i];
//                return 0;
//            }
//        }
//    }
//    cout<<"not found";
//    return 0;
//}


//5.6
/*
 * 给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：

1. 四周最外侧的像素点灰度值不变；

2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。*/
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n,m,a;
//    cin>>n>>m;
//    double in[101][101];
//    double im[101][101];
//    for (int i = 0; i <n ; ++i) {
//        for (int j = 0; j <m ; ++j) {
//            cin>>in[i][j];
//            im[i][j]=in[i][j];
//        }
//    }
//    for (int i = 1; i <n-1 ; ++i) {
//        for (int j = 1; j <m-1 ; ++j) {
//            im[i][j]=int((in[i-1][j]+in[i][j]+in[i+1][j]+in[i][j-1]+in[i][j+1])/5+0.5);
//        }
//    }
//    for (int i = 0; i <n ; ++i) {
//        for (int j = 0; j <m ; ++j) {
//           cout<<im[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}


//5.7
/*输入一个n行m列的矩阵A，输出它的转置AT。*/
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    int n,m,a;
//    cin>>n>>m;
//    int in[101][101];
//    for (int i = 0; i <n ; ++i) {
//        for (int j = 0; j <m ; ++j) {
//            cin>>in[i][j];
//        }
//    }
//    for (int i = 0; i <m ; ++i) {
//        for (int j = 0; j <n ; ++j) {
//           cout<<in[j][i]<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}


//6.1
/*Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。
给出一个正整数k，要求Pell数列的第k项模上32767是多少。*/
//#include<stdio.h>
//
//const int M = 1000010;
//int a[M] = {0};
//
//int main() {
//    int n;
//    a[1] = 1;
//    a[2] = 2;
//    for (int i = 3; i < M; ++i)
//        a[i] = (2 * a[i - 1] + a[i - 2]) % 32767;
//    scanf("%d", &n);
//    for (int i = 0; i < n; ++i) {
//        int k;
//        scanf("%d", &k);
//        printf("%d\n", a[k]);
//    }
//    return 0;
//}

//6.2 求最大公约数问题
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int a, b;
//    int x, y, temp;
//    cin >> a >> b;
//    if (a > b) {
//        x = a, y = b;
//    } else {
//        y = a, x = b;
//    }
//    while (x % y != 0) {
//        temp = x % y;
//        x = y;
//        y = temp;
//    }
//    cout<<y;
//};

/*6.3写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位和m的第i位相同，其他位和n相同。

请使用【一行代码】补全bitManipulation1函数使得程序能达到上述的功能*/
//#include <iostream>
//using namespace std;
//
//int bitManipulation1(int n, int m, int i) {
//// 在此处补充你的代码
//    return n - (n & (1 << i)) + (m & (1 << i));
//}
//
//int main() {
//    int n, m, i, t;
//    cin >> t;
//    while (t--) {
//        cin >> n >> m >> i;
//        cout << bitManipulation1(n, m, i) << endl;
//    }
//    return 0;
//}


/*6.4写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位是n的第i位取反，其余位和n相同

请使用【一行代码】补全bitManipulation2函数使得程序能达到上述的功能*/
//#include <iostream>
//using namespace std;
//
//int bitManipulation2(int n, int i) {
//// 在此处补充你的代码
//    return n ^ (1 << i);
//}
//
//int main() {
//    int t, n, i;
//    cin >> t;
//    while (t--) {
//        cin >> n >> i;
//        cout << bitManipulation2(n, i) << endl;
//    }
//    return 0;
//}

/*6.5写出函数中缺失的部分，使得函数返回值为一个整数,该整数的左边i位是n的左边i位取反，其余位和n相同
请使用【一行代码】补全bitManipulation3函数使得程序能达到上述的功能*/
//#include <iostream>
//using namespace std;
//
//int bitManipulation3(int n, int i) {
//// 在此处补充你的代码
//    return n ^ -1 << (32 - i);
//}
//
//int main() {
//    int t, n, i;
//    cin >> t;
//    while (t--) {
//        cin >> n >> i;
//        cout << bitManipulation3(n, i) << endl;
//    }
//    return 0;
//}