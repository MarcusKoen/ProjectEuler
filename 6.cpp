#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <math.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    int sumSquares=0;
    int squaresSum=0;
    int squareSumSquared = 0;
    int diff = 0;

    for(int i = 1;i<=100;i++)
    {

        sumSquares += i*i;

        squaresSum += i;

    }

    squareSumSquared = pow(squaresSum,2);

    diff = squareSumSquared-sumSquares;

    qDebug() << diff;


    return a.exec();
}
