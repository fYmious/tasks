def main():
    n = int(input("Введите число n: "))
    s = f(n)
    print(f"s = {s}")

def f(n):
    s = 0
    for i in range(1, n + 1):
        s += 1 / (i * (i + 1))
    return s

if __name__ == "__main__":
    main()
