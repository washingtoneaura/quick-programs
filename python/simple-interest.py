def calculate_simple_interest(principal, time, rate):
    simple_interest = (principal * time * rate) / 100
    print(f"Simple Interest: {simple_interest:.2f}")

# Taking inputs
principal = float(input("Enter Principal Amount: "))
time = float(input("Enter Time (in years): "))
rate = float(input("Enter Rate of Interest: "))

# Calculations
calculate_simple_interest(principal, time, rate)