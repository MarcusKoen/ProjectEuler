#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <math.h>
#include <QVector>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);





    for(int a =1;a<=1000;a++)
    {

        for(int b = 1;b<=1000;b++)
        {

            for(int c = 1;c<=1000;c++)
            {
                if((pow(a,2)+pow(b,2)==pow(c,2))&&(a+b+c==1000))
                {
                    qDebug() <<a *b*c;
                }

            }
        }

    }






    return a.exec();
}
