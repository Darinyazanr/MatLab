a=0;
b=1;
TOL=10^(-4);
N=200;
%自适应求积法
% f=inline('(100*sin(10/x))/x^2','x');
f=inline('4./(1+x^2)','x');
APP=0;
i=1;
TOL(i)=10*TOL;
a(i)=a;
h(i)=(b-a)/2;
FA(i)=feval(f,a);
FC(i)=feval(f,a+h(i));
FB(i)=feval(f,b);
S(i)=h(i)*(FA(i)+4*FC(i)+FB(i))/3;
L(i)=1;
while(i>0)
     FD=feval(f,a(i)+h(i)/2);
     FE=feval(f,a(i)+3*h(i)/2);
     S1=h(i)*(FA(i)+4*FD+FC(i))/6;
     S2=h(i)*(FC(i)+4*FE+FB(i))/6;
     v1=a(i);
     v2=FA(i);
     v3=FC(i);
     v4=FB(i);
     v5=h(i);
     v6=TOL(i);
     v7=S(i);
     v8=L(i);
     i=i-1;
     if(abs(S1+S2-v7)<v6)
       APP=APP+(S1+S2);
     elseif(v8>=N)
       fprintf('超出范围');
       break;
     else
       i=i+1;
       a(i)=v1+v5;
       FA(i)=v3;
       FC(i)=FE;
       FB(i)=v4;
       h(i)=v5/2;
       TOL(i)=v6/2;
       S(i)=S2;
       L(i)=v8+1;
       i=i+1;
       a(i)=v1;
       FA(i)=v2;
       FC(i)=FD;
       FB(i)=v3;
       h(i)=h(i-1);
       TOL(i)=TOL(i-1);
       S(i)=S1;
       L(i)=L(i-1);
end
end
APP

