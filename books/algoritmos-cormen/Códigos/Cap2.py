def e211(a):
  for i in range(1, len(a)):
    chave = a[i]
    posicao = i - 1

    while posicao >= 0 and a[posicao] > chave:
      a[posicao + 1] = a[posicao]
      a[posicao] = chave
      posicao = posicao - 1

  return a


def e212(a):
  for i in range(1, len(a)):
    chave = a[i]
    posicao = i - 1

    while posicao >= 0 and a[posicao] < chave:
      a[posicao + 1] = a[posicao]
      a[posicao] = chave
      posicao = posicao - 1

  return a


def e213(a, v):
  r = "NIL"
  for i in range(len(a)):
    if a[i] == v:
      r = i

  return r


def e214(a, b):
  n = len(a)
  c = [0] * (n + 1)

  for i in range(n - 1, -1, -1):
    sum_ = a[i] + b[i] + c[i + 1]
    c[i] = int(sum_ / 2)
    c[i + 1] = int(sum_ % 2)

  return c

a = [31, 41, 59, 26, 41, 58]
print("Valor Origem            :", a)
print("Insertion Sort          :", e211(list(a)))
print("Insertion Sort (Inverse):", e212(list(a)))
print("E 2.1-3  LF(60)         :", e213(list(a), 60))
print("E 2.1-3  LF(59)         :", e213(list(a), 59))

a = [1, 1, 0, 1]
b = [0, 1, 0, 1]
print("A     =   ", a)
print("B     =   ", b)
print("A + B =", e214(a, b))
