n1=as.integer(readline("Enter a number: "))
i=1
while(i<=n1){
  print(i*i)
  i=i+1
}
#FACTORIAL
n2=as.integer(readline("Enter a number: "))
f=1
i=1
while(i<=n2){
  f=f*i
  i=i+1
}
cat("FACTORIAL: ",f)
#FIBONACCI
n3=as.integer(readline("Enter a number: "))
a=1
b=1
cat(a,b)
i=2
while(i<n3){
  c=a+b
  a=b
  b=c
  i=i+1
  cat(" ",c)
}
