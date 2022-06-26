from typing import List

def create_phone_number(n: List) -> str:
    head: str  = ''.join([str(i) for i in n[:3]])
    body: str = ''.join([str(i) for i in n[3:6]])
    tail: str = ''.join(str(i) for i in n[-4:])
    return f"({head}) {body}-{tail}"


def test_create_phone_number():
    assert create_phone_number([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) == "(123) 456-7890"