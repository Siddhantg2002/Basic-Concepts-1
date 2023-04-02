n=as.integer(readline("Enter a number: "))
i=2
c=0
while(i<=n){
  if(n%%i==0){
    c=c+1
  }
  i=i+1
}
if(c==1){
  cat(n,"is a prime number")
}else
  cat(n,"is not a prime number")
