def main():
    n, m = map(int, input("Enter n, m: ").split())

    counter = 0

    for i in range(n):
        row = list(map(int, input().split()))
        if len(row) != m:
            print("Invalid input")
            break

        if i % 2 != 0:
            for j in range(m):
                if row[j] < 0:
                    counter += 1

    print(counter)

if __name__ == "__main__":
    main()
