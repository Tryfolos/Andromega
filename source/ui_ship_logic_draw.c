if (timer_main_menu_up_time == 0) {

//Only running this code when in gameplay mode.
if (current_cutscene_part == -1) {


//Emptying temporary array that is used for storing ships durability stat.
memset(text_temp, '*', 128);


//Putting durability into char array.
sprintf(text_temp, "%d", player_durability);

//Checking if player has lost health the this frame.
if (player_durability < durability_last_frame) {
timer_ui_ship_damage_flash = 30; //The ui will flash red for 30 frames.
}


//Keeping track of the players durability stat.
durability_last_frame = player_durability;

//Counting down damage flash.
if (timer_ui_ship_damage_flash > 0) {
timer_ui_ship_damage_flash -= 1;
}

//Making sure timer never runs out if player is dead. This makes sure the ship on the ui always shows a red tint when dead.
if (player_durability == 0) {
timer_ui_ship_damage_flash = 10;
}

///// Above this line is logic related stuff. /////
///// Below this line is drawing related stuff. /////


//Setting target bitmap to ui ship background.
if (bitmap_ui_ship_background) {
al_set_target_bitmap(bitmap_ui_ship_background);
}

//Drawing all black on the background.
al_clear_to_color(al_map_rgb(0, 0, 0));

//Drawing ship on background, what sprite will be drawn depends on the ship durability.
switch (player_durability) {

case 10:
al_draw_bitmap(bitmap_ui_ship_1, 0, 0, 0);
break;

case 9:
al_draw_bitmap(bitmap_ui_ship_2, 0, 0, 0);
break;

case 8:
al_draw_bitmap(bitmap_ui_ship_3, 0, 0, 0);
break;

case 7:
al_draw_bitmap(bitmap_ui_ship_4, 0, 0, 0);
break;

case 6:
al_draw_bitmap(bitmap_ui_ship_5, 0, 0, 0);
break;

case 5:
al_draw_bitmap(bitmap_ui_ship_6, 0, 0, 0);
break;

case 4:
al_draw_bitmap(bitmap_ui_ship_7, 0, 0, 0);
break;

case 3:
al_draw_bitmap(bitmap_ui_ship_8, 0, 0, 0);
break;

case 2:
al_draw_bitmap(bitmap_ui_ship_9, 0, 0, 0);
break;

case 1:
al_draw_bitmap(bitmap_ui_ship_10, 0, 0, 0);
break;


};



//Drawing blue tint effect on ship display.
if (timer_ui_ship_damage_flash == 0) {
al_draw_filled_rectangle(0, 0, 77, 125, al_map_rgba(0, 0, 25, 50));
} else {
al_draw_filled_rectangle(0, 0, 77, 125, al_map_rgba(25, 0, 0, 50));
}

//Drawing a line on every other row that is a different shade.
if (timer_ui_ship_damage_flash == 0) {
f = 0;
while (f < 125) {

al_draw_line(0, f, 77, f, al_map_rgba(0, 0, 25, 100), 0); //Drawing blue tint.

f += 2;
}
} else {
    f = 0;
while (f < 125) {

al_draw_line(0, f, 77, f, al_map_rgba(25, 0, 0, 100), 0); //Drawing red tint if damaged recently.

f += 2;
}
}

//Drawing durability number.
draw_text(text_temp, 2, 2, 1, 1, 1, 1);

//Setting target bitmap.
al_set_target_bitmap(internal_display);


//Drawing "display" for ui ship that you see in game.
al_draw_bitmap(bitmap_ui_ship_background, 400, 117, 0);





} //Are we in gameplay mode?

}