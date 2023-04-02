x=as.integer(readline('Enter 3 digit number: '))
a=x%%10
b=x%%100
if(a==b){
  cat(x,"PALINDROME")
}else
 cat(x,"NOT A PALINDROME")
