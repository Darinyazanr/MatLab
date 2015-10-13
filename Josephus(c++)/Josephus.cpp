#include<iostream.h>

int main()
{

    int people;
	int marknum;
	int a[100];
    cout<< "----------------"<<endl;
    cout<< "CopyRigth BY HTT"<<endl;
    cout<< "----------------"<<endl;

	cout<<"please input people(请输入参加游戏的人数<100)"<<endl;
	cin>>people;
	//请输入标记数字
	cout<<"please input mark(请输入间隔数)"<<endl;
	cin>>marknum;

   //给小孩编号
	for(int i=0;i<people;i++)
	{
		a[i]=i+1;
	}
   //输出小孩的编号
	for(int j=0;j<people;j++)
	{
		cout<<"output "<<a[j]<<",";

	}
	cout<<endl;
  int k=1;//表示处理第K个离开的小孩
  int t=-1;//数组下标
  while(1)
  {
	  //在圈中数markmun个小孩
	  for(int j=0;j<marknum;)
	  {
		  t=(t+1)%people;
		  if(a[t]!=0)
			  j++;
	  }
	  if(k==people)
		  break;
	  cout<<"第"<<k<<"个离开的小孩"<<a[t]<<","<<endl;
	  a[t]=0;
	  k++;

  }


  cout<<"最后的赢家就是"<<a[t]<<endl;

	return 0;
}
