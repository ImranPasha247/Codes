def generate_fibonacci(n):
    fib_sequence = []
    a, b = 0, 1
    for _ in range(n):
        fib_sequence.append(a)
        a, b = b, a + b
    return fib_sequence

def main():
    try:
        n = int(input("Enter the number of terms you want in the Fibonacci sequence: "))
        if n <= 0:
            print("Please enter a positive integer.")
        else:
            result = generate_fibonacci(n)
            print(f"The first {n} terms of the Fibonacci sequence are:")
            print(result)
    except ValueError:
        print("Invalid input! Please enter an integer.")

if __name__ == "__main__":
    main()
