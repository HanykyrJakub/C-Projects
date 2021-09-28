/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: admin
 *
 * Created on 10. června 2021, 13:34
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]));

 
typedef struct player {
    char name[16];
    int tip;
    int difference;
} Player;
 
typedef struct game {
    Player players[8];
    Player winner;
    int rand;
} Game;
 
int difference(int num1, int num2) {
    int result = num1 - num2;
    return result < 0 ? -result : result;
}
 
Player create_player(const char * name, int tip) {
    Player player;
    strcpy(player.name, name);
    player.tip = tip;
    return player;
}
 
void join_players(Game * game) {
    int i;
    
    for (i = 0; i < 8; i++) {
        game->players[i] = create_player("Player", i);
    }
}
 
void print_player(Player player) {
    printf("\nName: %s", player.name);
    printf("\nTip: %d", player.tip);
    printf("\nDifference: %d\n", player.difference);
}
 
int main() {
    Player player;
    int i;
    
    Game game;
    game.rand = ();
    join_players(&game);
    
    printf("Random: %d\n", game.rand);
    
    for (i = 0; i < 8; i++) {
        player = game.players[i];
        player.difference = difference(game.rand, player.tip);
        
        if (player.difference < game.winner.difference)
            game.winner = player;
        
        print_player(player);
    }
    
    printf("\n- Winner: %s", game.winner.name);
    print_player(game.winner);
    return (EXIT_SUCCESS);
}
