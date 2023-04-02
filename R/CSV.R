getwd()
stud=read.csv("students.csv",header=TRUE,sep=",")
stud
is.data.frame(stud)
print(ncol(stud))
print(nrow(stud))
perc <-max(stud$PERCENTAGE)
perc
print(subset(stud,BRANCH=="CSE"& PERCENTAGE<=80))
print(subset(stud,BRANCH=="CSE"& PERCENTAGE<=80))
