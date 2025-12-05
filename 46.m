syms x

f=x.^x


sol = symsum(f,x,1,1000)

