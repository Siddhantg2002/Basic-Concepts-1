cat("1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\n")
n=as.integer(readline("Enter the number: "))
if(n==1){
  r=as.integer(readline("Enter the radius: "))
  a1=3.14*r*r
}else if(n==2){
  l=as.integer(readline("Enter the length: "))
  b=as.integer(readline("Enter the breadth: "))
  a2=l*b
}else{
  h=as.integer(readline("Enter the height: "))
  bs=as.integer(readline("Enter the base: "))
  a3=0.5*h*bs
}
x=switch (
  n,
  "1"=cat("The area of the circle is: ",a1),
  "2"=cat("The area of the rectangle is: ",a2),
  "3"=cat("The area of the triangle is: ",a3),
  )

