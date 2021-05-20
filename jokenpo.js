const prompt = require("prompt-sync")()
const { sortear } = require("./functions")

let computador, jogador, sorteio, repetir, ultimoSorteio

do {
  console.log("(R)ocha-(P)apel-(T)esoura-(L)agarto-(S)pock")
  jogador = prompt("Escolha sua jogada: ")

  while (
    jogador != "r" &&
    jogador != "p" &&
    jogador != "t" &&
    jogador != "s" &&
    jogador != "l"
  ) {
    console.log("Opção inválida!")
    console.log("(R)ocha-(P)apel-(T)esoura-(L)agarto-(S)pock")
    jogador = prompt("Escolha sua jogada: ")
  }

  switch (jogador) {
    case "r":
      console.log("Jogador: Pedra")

      break

    case "p":
      console.log("Jogador: Papel")

      break

    case "t":
      console.log("Jogador: Tesoura")

      break

    case "l":
      console.log("Jogador: Lagarto")

      break

    case "s":
      console.log("Jogador: Spoock")

      break
  }

  ultimoSorteio = sorteio

  sorteio = sortear()

  if (sorteio == ultimoSorteio) sorteio = sortear()

  switch (sorteio) {
    case 0:
      computador = "r"
      console.log(`Computador: Pedra`)
      if (computador == jogador) console.log("Empate")
      else {
        if (jogador == "t" || jogador == "l") console.log("Computador Venceu")
        else {
          console.log("Jogador Venceu")
        }
      }
      break

    case 1:
      computador = "p"
      console.log(`Computador: Papel`)
      if (computador == jogador) console.log("Empate")
      else {
        if (jogador == "r" || jogador == "s") console.log("Computador Venceu")
        else {
          console.log("Jogador Venceu")
        }
      }
      break

    case 2:
      computador = "t"
      console.log(`Computador: Tesoura`)
      if (computador == jogador) console.log("Empate")
      else {
        if (jogador == "p" || jogador == "l") console.log("Computador Venceu")
        else {
          console.log("Jogador Venceu")
        }
      }
      break

    case 3:
      computador = "l"
      console.log(`Computador: Lagarto`)
      if (computador == jogador) console.log("Empate")
      else {
        if (jogador == "s" || jogador == "p") console.log("Computador Venceu")
        else {
          console.log("Jogador Venceu")
        }
      }
      break

    case 4:
      computador = "s"
      console.log(`Computador: Spock`)
      if (computador == jogador) console.log("Empate")
      else {
        if (jogador == "r" || jogador == "t") console.log("Computador venceu")
        else {
          console.log("Jogador veceu")
        }
      }

      break
  }

  repetir = prompt("Deseja jogar novamente?S/N : ")

  while (repetir != "s" && repetir != "n") {
    console.log("Opção inválida!")
    repetir = prompt("Deseja jogar novamente?S/N : ")
  }
} while (repetir == "s")

console.log("Até a próxima!")
