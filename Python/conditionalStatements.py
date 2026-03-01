# Conditional Statement

# if 
print("====== if Statement ======")
age = 19
if(age>19):
    print("Adult")

print()

# if else 
print("====== if else Statement ======")
if(age>19):
    print("Adult")
else:
    print("Not Adult")


print()

# elif
print("====== elif Statement ======")
if(age<13):
    print("Child")
elif(age<18):
    print("Teenager")
else:
    print("Adult")

print()


# Nested if
print("====== Nested if Statement ======")
if(age<13):
    if(age<1):
        print("Baby")
    else:
        print("Child")
elif(age<18):
    print("Teenager")
else:
    print("Adult")

print()

# Ternary conditional
print("====== tenary Statement ======")

s = "Adult" if age >= 18 else "Minor"
print(s)

print()

# Match-case 
print("====== Match-Case Statement ======")

day = 5

match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday")
    case 4:
        print("Thursday")
    case 5:
        print("Friday")
    case 6:
        print("Saturday")
    case 7:
        print("Sunday")
    case _:
        print("Invalid input")



