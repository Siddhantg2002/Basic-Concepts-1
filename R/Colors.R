cat("R->Red\nG->Green\nB->Blue\n")
n=readline("Enter choice: ")
x=switch (n,
  "R"="RED",
  "G"="GREEN",
  "B"="BLUE",
)
print(x)
