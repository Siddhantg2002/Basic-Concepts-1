sum <-function(n){
  if(n==0){
    return(0)
}
return(n+sum(n-1))
}
revs <-function(n){
  if(n==0)
    return(0)
  d=n%%10
  revs(n%%10)
}
n=as.integer(readline("Enter number:"))
revs(n)
sum(n) 
