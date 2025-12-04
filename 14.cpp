#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <math.h>
#include <QVector>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);





    long long int  chain = 1;

    long long int  maxChain=0;
    long long int  num=0;
    //20=8, 13==10

    for(long long int  i = 1;i<1000000;i++)
    {

        num=i;
        chain=1;
    while(num!=1)
    {
        if(num%2==0)
        {
            num=num/2;
            chain++;
        }else
            if(num%2!=0)
        {
            num=3*num+1;
            chain++;
        }
    }
    if(chain>maxChain)
    {

        maxChain=chain;
        //printf("%ld",maxChain);
        qDebug() << i<< maxChain;
    }


    }


    return a.exec();
}
