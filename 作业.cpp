#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.2f",d);
    return 0;
}
/*#include<stdio.h>
int main(){
    int a,b,c;
    double s,p;
    scanf("%d%d%d",&a,&b,&c);
    p = (a+b+c)/2.0;
    s=p*(p-a)*(p-b)*(p-c)/2;
    printf("%.2f",s);
    return 0;
}

/*#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    d=c*10+b*60*10+a*60*24*10;
    printf("%d",d);
    return 0;
}
/*#include<stdio.h>
int main(){
    int n,m,a,n1,n2;
    scanf("%d",&a);
    n1 = n%a;
    n2 = m%a;
    if(n1 != 0 && n2 != 0)
        n = (n/a+1)*(m/a+1);
    else if(n1 == 0 && n2 != 0)
        n = (n/a)*(m/a+1);
        else if(n1 != 0 && n2 == 0)
            n = (n/a+1)*(m/a);
    else
        n = (n/a)*(m/a);
    printf("%d",n);
    return 0;
}

/*#include<stdio.h>
int main(){
    int N,n;
    scanf("%d",&N);
    if(N/2%2 == 0)
        n=N*N/16;
    else
        n=N/4*(N/2-N/4);
    printf("%d",n);
    return 0;
}


/*#include<stdio.h>
int main(){
    char ch;
    int a,b;
    scanf("%c%d",&ch,&a);
    b = a-1+ch-'A';
    printf("%d",b);
    return 0;
}
/*#include<stdio.h>
int main(){
    int r,s1,s2;
    double p1,p2;
    scanf("%d",&r);
    s1 = 2*r*r;
    p1 = s1/(3.14*r*r)*100;
    s2 = 4*r*r;
    p2 = (3.14*r*r)/s2*100;
    printf("%d %.2f%%\n%d %.2f%%\n",s1,p1,s2,p2);
    return 0;
}


/*#include<stdio.h>
int main(){
    double L,x,a;
    int n;
    scanf("%lf%lf",&L,&x);
    n=L/x;
    a = L-n*x;printf("%d %02.1lf",n,a);
    return 0;
}

#include<stdio.h>
/*int main(){
    int a,b,c,n; scanf("%d%d%d",&a,&b,&c);
    n = (a+b-c)/3+c;
    printf("%d",n);
    return 0;
}
/*#include<stdio.h>
int main(){
    int m1,m2,s1,s2;
    int a,b;
    scanf("%d%d%d%d",&m1,&m2,&s1,&s2);
   if( m2 == m1)
   {
       a=m2-m1;
       b=s2-s1;
   }
    else if(m2>m1 && s2>=s1)
   {
       a=m2-m1;
       b=s2-s1;
   }
    else 
    {
        a=m2-m1-1;
        b=60-s1+s2;
    }
    printf("%02d:%02d",a,b);
    return 0;
}


/*#include<stdio.h>
int main(){
    int m1,m2,s1,s2;
    scanf("%d%d%d%d",&m1,&m2,&s1,&s2);
   int a =m2-m1-1;
    int b = 60-s1+s2;
    if(b>=60)
        printf("%02d:%02d",a+1,b-60);
    else
        printf("%02d:%02d",a,b);
    return 0;
}

/*#include<stdio.h>
int main(){
    int n,a;
    a = n+n*(n-1)*0.5;
    printf("%d",a);
    return 0;
}
 /*  #include<stdio.h>
int main(){
    char a1, b1,a2,b2;
    scanf("%c %c",&a1,&b1);
    a2 = a1-32;
    b2 = b1+32;
    printf("%c %c",a2,b2);
    return 0;
}

/*#include<stdio.h>
#include<math.h>
int main(){
    int a;
    double s; scanf("%d",&a);
    s = 6*(a*a*sqrt(3.0)/4);
    printf("%.2f",s);
    return 0;
}

/*#include<stdio.h>
int main(){
    int a,b;
    int a1,a2,a3,a4,a5,a6;
    scanf("%d",&a);
    b=a%1000000;
    printf("%06d",b);
    return 0;
}
/*int main(){
    int h1,h2,m1,m2,s1,s2;
    scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    int a=(h2-h1-1)*3600+(60-m1+m2-1)*60+(60-s1+s2);
    printf("%d",a);
    
    return 0;
}
/*#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double A,B,C;
    scanf("%d%d%d",&a,&b,&c);
    A = (b*b+c*c-a*a)/(2.0*b*c);
    B = (a*a+c*c-b*b)/(2.0*a*c);
    C = (a*a+b*b-c*c)/(2.0*a*b);
    printf("%f %f %f",A,B,C);
    return 0;
}
    
/*int main(){
    int a,b;
    int H,F;
    scanf("%d%d",&H,&F);
    a = (H-F/2)/3;
    b = H-a;
    printf("%d %d",a,b);
    return 0;
}
/*int main()
{
    int n;
    scanf("%d",&n);
    int b = (n-1)*n+n*(n-1)*(n-2)*3+n*(n-1)*(n-2)*(n-3);
    printf("%d",b);
    return 0;
}
/*int main()
{
    int n;
    double p1,p2,p3,q1,q2,q3;
    scanf("%d",&n);
    scanf("%lf %lf %lf",&p1,&p2,&p3);
    scanf("%lf %lf %lf",&q1,&q2,&q3);
    double a = p1*q2+p2*q3+p3*q1;
    double b = n*a*(1-a);
    printf("%.4f",b);
    return 0;
}


/*#include<stdio.h>
int main()
{
    int A,B;
    int a,b,c,d,e;
    scanf("%d %d",&A,&B);
    a = A+B;
    b = A-B;
    c = A*B;
    d = A/B;
    e  = A%B;
    printf("%d + %d = %d",A,B,a);
    printf("%d - %d = %d",A,B,b);
    printf("%d * %d = %d",A,B,c);
    printf("%d / %d = %d",A,B,d);
    printf("%d %% %d = %d",A,B,e);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a1,a2;
    scanf("%d",&a1);
    a = a1/1000;
    b = a1/100%10;
    c = a1/10%10;
    d = a1%10;
    a2 = d*1000+c*100+b*10+a;
    printf("%d",a2);
    return 0;
}*/
 
