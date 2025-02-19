def calculate_compound_interest(principal, time, rate, n):
    amount = principal * (1 + rate / (100 * n)) ** (n * time)
    compound_interest = amount - principal
    print(f"Compound Interest: {compound_interest:.2f}")

# Taking inputs
principal = float(input("Enter Principal Amount: "))
time = float(input("Enter Time (in years): "))
rate = float(input("Enter Rate of Interest: "))
n = int(input("Enter Number of Times Interest Compounded per Year: "))

# Calculation
calculate_compound_interest(principal, time, rate, n)
