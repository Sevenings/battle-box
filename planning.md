# Planejamento

## O que deve ser esse jogo?

Este será um jogo de combate em turnos, inspirado em sistemas
de batalhas como o de pokemon e de RPGs de mesa, como D&D e
Tormenta. 

## Metas Iniciais:

Alguns features que o jogo deve comportar de início:

- Este jogo deve possuir ao menos 2 personagens jogáveis;
- Cada personagem tem uma lista de 3 ataques pré-definidos;
- Os personagens tem Vida e Força;
- Deve haver um sistema para escolher personagem;
- Deve ser possível escolher um ataque no turno;
- Os personagens vão se bater até restar 1;

- Interface visual

## Sobre a interface gráfica:

Com as metas iniciais cumpridas, vamos partir para a criação da
interface visual básica. Vamos começar com a divisão das cenas
do jogo: Começo, Meio e Fim. Após isso, vamos fazer os detalhes 
de cada uma das 'cenas' do jogo.

* [Cena] Menu Inicial
    - [Visual] Nome do Jogo
    - [Botão] Jogar
        1. [Cena] Escolha de personagens
        2. [Cena] (Batalha) Loop Principal do Jogo 
        3. [Ação] Voltar para o Menu Principal
    - [Botão] Sair

Podemos dividir então o sistema em *[Cenas]*, que são compostas por alguns
*[Objetos]* (Textos, Imagens, Botões) e podem ser *tocadas* (cena.play()).

Agora veio a questão, como fazer a classe Cena? Eu construo como uma 
classe nova ou herdo de alguma classe? Se for herdar, de qual? 
Pensei em herdar de uma classe Window ou algo assim, mas provavelmente,
sempre que eu der um cena.play(), uma nova janela vai se abrir e a antiga
irá se fechar, o que não faz nenhum sentido. Como eu quero que o programa
inteiro se dê em uma janela apenas, então a classe Cena não pode herdar de
Janela. E mais, dentro da classe Janela utilizada, deverá estar qual a 
cena atual.

Sobre a biblioteca da GUI, ainda não sei qual usar. Estou pensando sobre 
questões de compatibilidade, das quais não tinha problema em Java. Ok,
confesso que por alguns instantes, depois de pesquisar um pouco, pensei
em fazer tudo pelo OpenGL puro mesmo, seria uma péssima escolha, eu nunca
mais iria sair desse projeto. Decidi então usar o GTK, ele tem compatibilidade
com multiplataforma (nem que seja por meio de compilar os binários separadamente)
e é open-source. O Qt5 tinha um site mais bonito, mas tinha um monte de produtos
diferentes e não sei oq... me senti intimidado, o GTK me parece mais simples, e
no geral eu preso por isso, pois facilita a integração com o projeto. Confesso
ainda que ainda fico curioso de como ficaria fazer tudo no OpenGL.

Pois é... agora me resta então é aprender um pouco do GTK, fazer o que né.

Estou indo bem, mas na questão de compatibilidade e compilar... pelo visto
por enquanto a aplicação vai ficar linux-only.



## Brincadeiras para o Futuro:

No futuro a gente brinca de adicionar itens, pets, armaduras, 
efeitos de estado, veneno, barra de energia, tipo de elemento,
armas que se combinam, armas com afinidades, peso, velocidade,
mais atributos pro jogador, combates diferentes, mais ações de
combate, editor de arma, de magia, de personagem, rolar dados, 
armas de curto, médio e longo alcançe, armas que desmontam, 
ARMAS PROGRAMAVEIS, crafting, crafting durante batalha, poções,
MAGIAS PROGRAMAVEIS, sistema de negociação no meio da batalha,
propor vencer no jokempo, propor mudar os critérios de vitória
no meio do jogo, testes de persuasão, carisma, origens culturais
dos personagens, comportamentos de costumes dos personagens (No
Japão não se batem nos mais velhos), sistema de movimentação
pelo mapa. Combates aéreos, combates montados, combates
aquáticos.
Vamo focar no básico, no simples.


## Dev Log:

    1. Beleza, implementei uma lista de ataques 
no personagem. É possível trocar o ataque
durante o jogo.

    2. Agora, está na hora de fazer o jogo jogavel,
depois, fazer um menu para escolher o personagem.
Ou o contrário.
