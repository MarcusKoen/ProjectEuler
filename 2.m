% fibonacci() starts at 0

fib=0;
i=1;
size = 1;
fib(i) = fibonacci(i+1)


 while(fib(i)<4000000)
    i = i+1;
    fib(i) = fibonacci(i+1);
    size = size+1
 end

 

 sum = 0;
for j=1:1:size

    if(mod(fib(j),2)==0)
        sum = sum +fib(j);
    end
end
sum
