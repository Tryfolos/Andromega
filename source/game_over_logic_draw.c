//This is what happens once the player runs out of health.
if (current_cutscene_part == -1) {
if (player_durability < 1) {

//Setting target bitmap to draw to.
al_set_target_bitmap(bitmap_gameplay_display);


//When player is dead, move game over text upwards.
//Only move text upwards when timer has run out.
if (player_durability == 0) {
if (timer_game_over_delay == 0) {
game_over_y -= (game_over_y-(120*64))/25;
}}

//Counting down game over delay timer.
if (timer_game_over_delay > 0) {
timer_game_over_delay -= 1;
}

//If the game over text is extremely close to it's goal position, snap it into position.
if ((game_over_y-(120*64)) < (2*64)) {
game_over_y = (120*64);
}

//Limiting how far game over text can move.
if (game_over_y < (120*64)) {
game_over_y = (120*64);
}

//Choose random death quote.
if (choose_death_quote == 1) {

chosen_death_quote = randint(0, 3); //Choose one of 4 possible death quotes.
//chosen_death_quote = 3;

choose_death_quote = 0;
}

//Death quote timer.
if (timer_death_quote_delay > 0) {
timer_death_quote_delay -= 1;
}

//If death quote delay has run out, move the quote into the screen.
if (timer_death_quote_delay == 0) {
death_quote_y -= (death_quote_y-(135*64))/25;
}



//Choosing between options on death screen. Replay or go back to main menu.
if (press_left == 1 || press_right == 1) {
game_over_selected_option = !game_over_selected_option;
play_sound_change_option
}

//If pressing select button on an option it will be chosen.
if (game_over_selected_option == 0) {
if (input_select() == 1) {
#include "replay_logic.c"
}
}

//Counting down reset timer.
if (timer_reset > 0) {
timer_reset -= 1;
}

//Going back to main menu after dying logic.
if (game_over_selected_option == 1) {
if (input_select() == 1) {
#include "back_to_menu_logic.c"
timer_reset = 5;
timer_main_menu_up_time = 5;
}}

//Limiting how far up the death quote can move.

//Drawing game over text.
//draw_text(text_video_menu_30, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
draw_text(text_game_over, 90, game_over_y/64, 1, 0, 0, 1);

//Draw death quote depending on which one was chosen at random.
switch (chosen_death_quote) {


case 0:
draw_text_small(text_death_quote_0, 63, (game_over_y/64)+14, 1, 0, 0, 1);
break;



case 1:
draw_text_small(text_death_quote_1, 33, (game_over_y/64)+14, 1, 0, 0, 1);
break;



case 2:
draw_text_small(text_death_quote_2, 48, (game_over_y/64)+14, 1, 0, 0, 1);
break;


case 3:
draw_text_small(text_death_quote_3, 88, (game_over_y/64)+14, 1, 0, 0, 1);
break;

};


//Draw menu or replay options if the other text is in place.
if (death_quote_y < 137*64) {

if (game_over_selected_option == 0) {
al_draw_bitmap_region(bitmap_game_over_selection, 0, 0, 46, 11, 73, 153, 0);
}
if (game_over_selected_option == 1) {
al_draw_bitmap_region(bitmap_game_over_selection, 0, 0, 72, 11, 133, 153, 0);
}
draw_text_small(text_replay, 75, 155, 1, 1, 1, 1);
draw_text_small(text_main_menu, 135, 155, 1, 1, 1, 1);

}



} //Is player out of health.
} //Are we in game or not.