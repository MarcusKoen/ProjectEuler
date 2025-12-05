#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <math.h>
#include <QVector>
#include <vector>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    class Solution {
    public:
        QVector<int> twoSum(QVector<int>& nums, int target) {


        for(int i =0;i<=nums.size()-1;i++)
        {
            for(int j=1;j<=nums.size()-1;j++)
            {
                if((nums.value(i)+nums.value(j)==target)&&(i!=j))
                {
                    qDebug()<<nums.value(i)<<nums.value(j);
                    qDebug()<<i<<j;
                }
            }
        }


        }
    };

    Solution sol;
    QVector<int> nums;
    nums.append(3);
    nums.append(3);
    nums.append(11);
    nums.append(15);


    sol.twoSum(nums,6);



    return a.exec();
}
