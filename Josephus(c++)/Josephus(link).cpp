#include<iostream.h>
#include<iomanip.h>//I/O控制头文件，类似于c语言的格式化控制符

//小孩结点
struct jose
{
int code;
jose* next;
};
int main()
{
	//赋初值
	int numsboys,interval;

	cout<<"请输入参加游戏的小孩"<<endl;
	cin>>numsboys;
	cout<<"请输入间隔数"<<endl;
	cin>>interval;

	//建立小孩的结构数组
	jose* pJose=new jose[numsboys];//小孩数
	jose* pCurrent=pJose;//当前的指针结点

	//初始化结构数组；构成环链，小孩编号，输出编号

	int item=0;//输出项数

	for(int i=1;i<=numsboys;i++)
	{
		pCurrent->next=pJose+i%numsboys;//链接到下一个元素结点
		pCurrent->code=i;//小孩的编号
        pCurrent=pCurrent->next; //改变当前位置
		if(item++%10)//控制输出样式
			cout<<endl;
		cout<<setw(4)<<i;
	}//pCurrent 此时等于pJose
	item=0;

	jose* pivot;//链表哨兵
	pCurrent=&pJose[numsboys-1];//下一个就是数组的第一个元素pJose[0]

	while(pCurrent->next!=pCurrent)
	{
		for(int j=0;j<interval;j++)
		{
			pivot=pCurrent;
			pCurrent=pivot->next;
		}

	
	if(item++%10==0)
		cout<<endl;
	cout<<"outer:"<<pCurrent->code<<endl;
	pivot->next=pCurrent->next;//让该小孩脱链
	pCurrent=pivot;
	
	}

cout<<"Last winner is"<<pCurrent->code<<endl;
delete[]pJose; //返还空间

return 0;
}