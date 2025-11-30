#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    int sum = 0;


    int num = 1000;

    for(int i=1;i<num;i++)
    {
        if(i%3==0)
        {
            sum += i;
        }
        else if(i%5==0)
        {
            sum +=i;
        }
    }

    qDebug() << sum;

    return a.exec();
}
