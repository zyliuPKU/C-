//定义变量
int x=10;
float y=3.14;
string name='Alice'; //#include <string>

//向量
#include <vector>
vector<int> mylist={1,2,3,4,5};
mylist.push_back(6); //append
int first=mylist[0]; //索引
mylist.size();//大小

//输入输出
int x;std::cin>>x;
cout<<x<<endl;//#include <isostream>

//函数
int func1(int a, int b){return a+b;} //返回整数
void func2(int a, int b){cout<<a+b<<endl;} //不返回

//const修饰符
void func(const int x) {} //x 不能被修改
//默认参数
void func(int x=1) {} 
//函数重载(overloading)
可以定义多个同名函数，但是必须参数个数或类型不同，否则不能同名。
//传引用
x=10
void func1(int& x) {} //直接传x的引用，修改会改变原本的x
void func2(int x) {} // 传值，修改不会改变x，但是效率低，需要复制一份

//条件
if (x>0) {cout<<x<<endl;} else{cout<<-x<<endl;}

//for循环
for (int i=1;i<5;i+=2) {std::cout<<i<<std::endl;}

//while循环
int i=1;
while (i<=5) {std::cout<<i<<std::endl;i++;}
