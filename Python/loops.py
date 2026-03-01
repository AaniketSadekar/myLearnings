# loops

# For loop
print("====== For Loop ======")
for i in range(1,11):
    print(i,end=" ")

print()

# while loop
print("====== while Loop ======")

i = 1
while (i<=10):
    print(i,end=" ")
    i += 1

print()

# nested for loop
print("====== Nested For Loop ======")

for x in range(1,6):
    for j in range(x):
        print(x,end=" ")
    print()

print()

# Break 
print("====== break ======")
for y in range(1,11):
    if(y==4):
        break
    print(y,end=" ")
    print()

print()

# pass
print("====== Pass ======")

for m in range(1,11):
    if(m % 2 != 0):
        print(m,end=" ")
        pass
    print()

print()
        
    
    

