#include<iostream.h>
#include<iomanip.h>//I/O����ͷ�ļ���������c���Եĸ�ʽ�����Ʒ�

//С�����
struct jose
{
int code;
jose* next;
};
int main()
{
	//����ֵ
	int numsboys,interval;

	cout<<"������μ���Ϸ��С��"<<endl;
	cin>>numsboys;
	cout<<"����������"<<endl;
	cin>>interval;

	//����С���Ľṹ����
	jose* pJose=new jose[numsboys];//С����
	jose* pCurrent=pJose;//��ǰ��ָ����

	//��ʼ���ṹ���飻���ɻ�����С����ţ�������

	int item=0;//�������

	for(int i=1;i<=numsboys;i++)
	{
		pCurrent->next=pJose+i%numsboys;//���ӵ���һ��Ԫ�ؽ��
		pCurrent->code=i;//С���ı��
        pCurrent=pCurrent->next; //�ı䵱ǰλ��
		if(item++%10)//���������ʽ
			cout<<endl;
		cout<<setw(4)<<i;
	}//pCurrent ��ʱ����pJose
	item=0;

	jose* pivot;//�����ڱ�
	pCurrent=&pJose[numsboys-1];//��һ����������ĵ�һ��Ԫ��pJose[0]

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
	pivot->next=pCurrent->next;//�ø�С������
	pCurrent=pivot;
	
	}

cout<<"Last winner is"<<pCurrent->code<<endl;
delete[]pJose; //�����ռ�

return 0;
}