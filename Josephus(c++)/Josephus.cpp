#include<iostream.h>

int main()
{

    int people;
	int marknum;
	int a[100];
    cout<< "----------------"<<endl;
    cout<< "CopyRigth BY HTT"<<endl;
    cout<< "----------------"<<endl;

	cout<<"please input people(������μ���Ϸ������<100)"<<endl;
	cin>>people;
	//������������
	cout<<"please input mark(����������)"<<endl;
	cin>>marknum;

   //��С�����
	for(int i=0;i<people;i++)
	{
		a[i]=i+1;
	}
   //���С���ı��
	for(int j=0;j<people;j++)
	{
		cout<<"output "<<a[j]<<",";

	}
	cout<<endl;
  int k=1;//��ʾ�����K���뿪��С��
  int t=-1;//�����±�
  while(1)
  {
	  //��Ȧ����markmun��С��
	  for(int j=0;j<marknum;)
	  {
		  t=(t+1)%people;
		  if(a[t]!=0)
			  j++;
	  }
	  if(k==people)
		  break;
	  cout<<"��"<<k<<"���뿪��С��"<<a[t]<<","<<endl;
	  a[t]=0;
	  k++;

  }


  cout<<"����Ӯ�Ҿ���"<<a[t]<<endl;

	return 0;
}
