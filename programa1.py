#!/usr/bin/python3

def _main() -> None:
    enter = str(input(""))
    sum = 0
    while True:
        for i in enter:
            sum = int(i) + sum
        if sum >= 10:
            enter = str(sum)
            sum = 0
        else:
            break

    print(sum)

if __name__ == '__main__':
    _main()