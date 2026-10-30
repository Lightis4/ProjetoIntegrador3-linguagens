nome = input("Digite seu nome: ")
matricula = input("Digite sua matricula: ")

try:
    nota1 = float(input("Digite a primeira nota: "))
    nota2 = float(input("Digite a segunda nota: "))
    nota3 = float(input("Digite a terceira nota: "))

    if (0 <= nota1 <= 10 and
        0 <= nota2 <= 10 and
        0 <= nota3 <= 10):

        media = (nota1 + nota2 + nota3) / 3

        print("\nAluno:", nome)
        print("Matricula:", matricula)
        print(f"Media: {media:.2f}")

        if media >= 7:
            print("Situacao: Aprovado")
        elif media >= 5:
            print("Situacao: Recuperacao")
        else:
            print("Situacao: Reprovado")
    else:
        print("As notas devem estar entre 0 e 10!")

except ValueError:
    print("Entrada invalida! Digite numeros nas notas.")
