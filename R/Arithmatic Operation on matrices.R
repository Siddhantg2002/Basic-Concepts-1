rw=c("R1","R2")
cm=c("C1","C2","C3")
mat1=matrix(1:6,nrow=2,ncol=3,byrow=T,dimnames = list(rw,cm))
mat1
mat2=matrix(7:12,nrow=2,ncol=3,byrow=T,dimnames = list(rw,cm))
mat2
mat3=mat1+mat2
mat3
mat4=mat1-mat2
mat4
mat5=mat1*mat2
mat5
mat6=mat1/mat2
mat6
#######
x=diag(3)
x
sum=0
for(i in x){
  sum=sum+i
}
sum

