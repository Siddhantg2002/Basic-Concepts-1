elements=3:14
rw=c("R1","R2","R3","R4")
cl=c("C1","C2","C3")
x=matrix(elements,nrow=4,ncol=3,byrow=T,dimnames = list(rw,cl))
print(x)
x[1,3]
x[4,2]
x[2,]
x[,3]
x[,-2]
x[-2,]
dim(x)
t(x)
dim(x)
y=x+4
y
#######
x1=diag(3)
x1
x2 <- matrix(c(1, 2, 2, 3), 2)
x2
isSymmetric(x1)
isSymmetric(x2)
