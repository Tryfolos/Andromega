#include "include_headers.c"

//Only run this code while in a level.
if (current_cutscene_part == -1) {

//Draw side panels.
al_set_target_bitmap(internal_display);
al_draw_bitmap(bitmap_level_side_panel, 0, 0, 0);
al_draw_bitmap(bitmap_level_side_panel_2, 105+270, 0, 0);

//Drawing little black triangles to round off side panels. 
a = 80.0;
b = 50.0;
c = 100.0;
al_draw_filled_triangle((float)375, (float)260, (float)375, (float)270, (float)396, (float)270, al_map_rgb((80+65)*(hailstorm_background_tint), 50*(hailstorm_background_tint), (100+65)*(hailstorm_background_tint)));
al_draw_filled_triangle((float)375, (float)0, (float)375, (float)10, (float)396, (float)0, al_map_rgb((80+65)*(hailstorm_background_tint), 50*(hailstorm_background_tint), (100+65)*(hailstorm_background_tint)));
al_draw_filled_triangle((float)85, (float)0, (float)105, (float)0, (float)105, (float)10, al_map_rgb((80+65)*(hailstorm_background_tint), 50*(hailstorm_background_tint), (100+65)*(hailstorm_background_tint)));
al_draw_filled_triangle((float)85, (float)270, (float)105, (float)260, (float)105, (float)270, al_map_rgb((80+65)*(hailstorm_background_tint), 50*(hailstorm_background_tint), (100+65)*(hailstorm_background_tint)));

//Drawing black screens on panels that are the same shade as the black screen on the level.
al_draw_filled_rectangle(0, 0, 105, 270, al_map_rgba(0, 0, 0, (int)level_black_screen_alpha));
al_draw_filled_rectangle(270+105, 0, 480, 270, al_map_rgba(0, 0, 0, (int)level_black_screen_alpha));

//Drawing durability text.
//draw_text_small(text_durability_1, 5, 2+3, 1, 1, 1, 1);

//Drawing durability bar.
//al_draw_bitmap(bitmap_durability, 2, 2+13, 0);

//Drawing shield text.
draw_text_small(text_shield, 5, 4+31+13-10, 1, 1, 1, 1);

//Drawing shield bar.
al_draw_bitmap(bitmap_shield, 2, 4+31+13, 0);

//Drawing supershield bar if powerup is enabled.
if (timer_death_powerup > 0) {
al_draw_bitmap(bitmap_supershield, 2, 4+31+13, 0);
}

//Drawing laser text.
draw_text_small(text_laser, 5, 12+60+10-10, 1, 1, 1, 1);

//Drawing laser bar.
al_draw_bitmap(bitmap_laser, 2, 12+60+10, 0);

//Drawing plasma text.
draw_text_small(text_plasma, 5, 19+62+25+10-10, 1, 1, 1, 1);

//Drawing firerate/plasma bar.
al_draw_bitmap(bitmap_firerate, 2, 19+62+25+10, 0);

//Drawing lightning icon next to energy.
al_draw_bitmap(bitmap_lightning_icon, (105/2)-9, 25+74+73+11, 0);

//Drawing energy cell count text.
draw_text_small(text_player_energy, (105/2)+4, 25+74+40+35+11, 1, 1, 1, 1);


//Drawing black/red background behind gun heat bar. 
f = 49;
while (f < 201) {

al_draw_line(376, f-5+64, 398, f+5+64, al_map_rgb(gun_heat_background_color, 0, 0), 1);

f += 1;
}

//Drawing gun heat bar.
f = 50;
while (f < 250) {

//al_draw_line(390, (250-(gun_heat/5)), 410, 250, al_map_rgb(255, 255, 255));
if ((gun_heat/5) > f) {

al_draw_line(377, ((250-f)-5)+63, 397, ((250-f)+5)+63, al_map_rgb(0+f, 200-f, 30), 1);

}
f += 1;
}

//Drawing gun heat warning icon if gun is currently overheated.
if (gun_heat == 1000) {
al_draw_bitmap(bitmap_gun_heat_warning, 380, 170, 0);
}


//Drawing black bars on top of stat bars to indicate how much of them are left.
//al_draw_filled_rectangle(2+player_durability*10, 3+12, 2+100, 17+12+4, al_map_rgb(0, 0, 0));
al_draw_filled_rectangle(2+(player_shield+player_shield_offset)*10, 2+37+9, 2+100, 4+12+37+12+1, al_map_rgb(0, 0, 0));
al_draw_filled_rectangle(2+(player_laser+player_laser_offset)*10, 13+60+9, 2+100, 27+60+13, al_map_rgb(0, 0, 0));
al_draw_filled_rectangle(2+(player_plasma+player_plasma_offset)*10, 25+74+17, 2+100, 25+74+25+10, al_map_rgb(0, 0, 0));

//Drawing players score.
draw_text_small(text_score, 380, 24, 1, 1, 1, 1);


//Drawing triplefire icon.
al_draw_bitmap(bitmap_triplefire_timer, 399, 244, 0);

//Drawing text on top of triplefire icon that represents the time left on the timer.
if (timer_triplefire_enabled > 0) {
draw_text(text_timer_triplefire, 400, 245, 1, 1, 1, 1);
}

//Drawing death icon. 
al_draw_bitmap(bitmap_death_icon, 425, 244, 0);


//Drawing the text on top of the death icon that represents the time left on the timer.
if (timer_death_powerup > 0) {
draw_text(text_timer_death_powerup, 426, 245, 1, 1, 1, 1);
}

//Drawing laser powerup icon.
al_draw_bitmap(bitmap_laser_powerup_icon, 450, 244, 0);

//Drawing the text on top of the laser icon that represents the time left on the timer.
if (timer_laser_powerup > 0) {
draw_text(text_timer_laser_powerup, 451, 246, 1, 1, 1, 1);
}

//Drawing time passed in game.
draw_text_small(text_temp, 380, 49, 0, 1, 0, 1);

//Drawing clock symbol next to time.
al_draw_bitmap(bitmap_clock, 430, 48, 0);

//Devtest.
/*
memset(devtest_text, 0, 31);
sprintf(devtest_text, "%d", gun_heat);
draw_text_small(devtest_text, 380, 25, 1, 0, 1, 1);
*/

//Drawing stuff on gameplay display.
al_set_target_bitmap(bitmap_gameplay_display);

//If paused, draw background panel.
if (game_paused == 1) {
al_draw_bitmap(bitmap_pause_background, 0, 0, 0);
}

//Drawing blue rectangle that behind allocation options to show what stat is currently selected.
if (game_paused == 1) {
if (pause_menu_selected_stat < 3) {
if (pause_menu_selected_stat != -1) {
al_draw_bitmap(bitmap_pause_menu_selected_stat, 11, selected_stat_background_y/64, 0); 
}}}

//Drawing blue rectangle/background behind top option. This is where you can change between energy allocation menu and upgrades menu.
if (game_paused == 1) {
if (pause_menu_selected_stat == -1) {
if (pause_menu_selected_upgrade == 0) {
al_draw_bitmap(bitmap_pause_menu_selected_tab, 10, 10, 0); 
}}}


//Drawing energy allocation text on top of pause menu.
if (game_paused == 1) {
if (current_cutscene_part == -1) {
if (pause_menu_selected_tab_top == 0) {
al_set_target_bitmap(bitmap_gameplay_display);
draw_text(text_paused, 46, 16, 1, 1, 1, 1);
}
}
}

//Drawing Upgrades text on top of pause menu when on second tab. 
if (game_paused == 1) {
if (current_cutscene_part == -1) {
if (pause_menu_selected_tab_top == 1) {
draw_text(text_upgrades, 91, 16, 1, 1, 1, 1);
}
}
}

//Drawing blue boxes behind upgrade options. upgrades menu.
if (game_paused == 1) {
if (pause_menu_selected_tab_top == 1) {
switch (pause_menu_selected_upgrade) {

case 1:
al_draw_filled_rectangle(10, 37, 260, 48, al_map_rgba(117, 150, 221, 255));
break;

case 2:
al_draw_filled_rectangle(10, 49, 260, 60, al_map_rgba(117, 150, 221, 255));
break;

case 3:
al_draw_filled_rectangle(10, 61, 260, 72, al_map_rgba(117, 150, 221, 255));
break;

case 4:
al_draw_filled_rectangle(10, 73, 260, 84, al_map_rgba(117, 150, 221, 255));
break;

case 5:
al_draw_filled_rectangle(10, 85, 260, 96, al_map_rgba(117, 150, 221, 255));
break;

};
}

} //If game is paused.


//Drawing text on upgrade menu.
if (pause_menu_selected_tab_top == 1) {
if (game_paused == 1) {
if (upgrade_0 == 0) {
draw_text_small(text_gun_cools_down_twice_as_fast, 12, 39, 1, 0.35, 0.35, 1);
} else {
draw_text_small(text_gun_cools_down_twice_as_fast, 12, 39, 0.35, 1, 0.35, 1);
}
if (upgrade_1 == 0) {
draw_text_small(text_durability_is_fully_repaired, 12, 51, 1, 0.35, 0.35, 1);
} else {
draw_text_small(text_durability_is_fully_repaired, 12, 51, 0.35, 1, 0.35, 1);
}
if (upgrade_2 == 0) {
draw_text_small(text_3x_energy_for_every_pickup, 12, 63, 1, 0.35, 0.35, 1);
} else {
draw_text_small(text_3x_energy_for_every_pickup, 12, 63, 0.35, 1, 0.35, 1);
}
if (upgrade_3 == 0) {
draw_text_small(text_laser_costs_half_as_much_energy, 12, 75, 1, 0.35, 0.35, 1); 
} else {
draw_text_small(text_laser_costs_half_as_much_energy, 12, 75, 0.35, 1, 0.35, 1); 
}
if (upgrade_4 == 0) {
draw_text_small(text_plasma_never_depletes, 12, 87, 1, 0.35, 0.35, 1); 
} else {
draw_text_small(text_plasma_never_depletes, 12, 87, 0.35, 1, 0.35, 1); 
}
}
}

//Drawing locked icons. If upgrade is locked.
if (game_paused == 1) {
if (pause_menu_selected_tab_top == 1) {

if (upgrade_0 == 0) {
al_draw_bitmap(bitmap_locked_upgrade, 250, 38, 0);
} else {
al_draw_bitmap(bitmap_unlocked_upgrade, 250, 38, 0);
}

if (upgrade_1 == 0) {
al_draw_bitmap(bitmap_locked_upgrade, 250, 50, 0);
} else {
al_draw_bitmap(bitmap_unlocked_upgrade, 250, 50, 0);
}

if (upgrade_2 == 0) {
al_draw_bitmap(bitmap_locked_upgrade, 250, 62, 0);
} else {
al_draw_bitmap(bitmap_unlocked_upgrade, 250, 62, 0);
}

if (upgrade_3 == 0) {
al_draw_bitmap(bitmap_locked_upgrade, 250, 74, 0);
} else {
al_draw_bitmap(bitmap_unlocked_upgrade, 250, 74, 0);
}

if (upgrade_4 == 0) {
al_draw_bitmap(bitmap_locked_upgrade, 250, 86, 0);
} else {
al_draw_bitmap(bitmap_unlocked_upgrade, 250, 86, 0);
}

}}


//Drawing cost text. Upgrade menu.
if (game_paused == 1) {
if (pause_menu_selected_tab_top == 1) {
if (pause_menu_selected_upgrade > 0 && pause_menu_selected_upgrade < 6) {
draw_text_small(text_cost_of_upgrade, 12, 133, 1, 1, 1, 1);
}}}


//Drawing energy allocation buttons and text. 
if (game_paused == 1) {
if (pause_menu_selected_tab_top == 0) {
al_draw_bitmap(bitmap_add_shield, 12, 4+37+13-6, 0);
draw_text_small(text_add_shield, 12, 4+37+3-6, 1, 1, 1, 1);
al_draw_bitmap(bitmap_add_laser, 12, 12+60+16-6, 0);
draw_text_small(text_add_laser, 12, 12+60+6-6, 1, 1, 1, 1);
al_draw_bitmap(bitmap_add_firerate, 12, 19+62+25+16-6, 0);
draw_text_small(text_add_plasma, 12, 19+62+25+6-6, 1, 1, 1, 1);
}}

//Drawing text that tells you what hotkeys should be used to charge. 
if (game_paused == 1) {
if (pause_menu_selected_tab_top == 0) {
switch (pause_menu_selected_stat) {

case 0:
draw_text_small(text_hotkey_1, 194, 60, 0, 1, 0, 1);
break;

case 1:
draw_text_small(text_hotkey_2, 194, 94, 0, 1, 0, 1);
break;

case 2:
draw_text_small(text_hotkey_3, 194, 128, 0, 1, 0, 1);
break;

};

}
}

//Drawing blue overlay on top of tab selection if selected stat is 3. 
if (game_paused == 1) {
if (pause_menu_selected_stat == 3) {
al_draw_bitmap(bitmap_pause_menu_selected_tab, 10, 141, 0);
}
} 

//Drawing left and right arrows on tab selection.
if (game_paused == 1) {
//if (pause_menu_selected_stat == 3) {
al_draw_bitmap(bitmap_video_menu_arrow, 12, 144, 0);
al_draw_bitmap(bitmap_video_menu_arrow, 242, 144, ALLEGRO_FLIP_HORIZONTAL);
}
//}

//Drawing left and right arrows on tab selection on top of the screen.
if (game_paused == 1) {
//if (pause_menu_selected_stat == -1) {
//if (pause_menu_selected_upgrade == 0) {
al_draw_bitmap(bitmap_video_menu_arrow, 12, 13, 0);
al_draw_bitmap(bitmap_video_menu_arrow, 242, 13, ALLEGRO_FLIP_HORIZONTAL);
}
//}}

//Drawing text on the tab that shows what menu you have chosen, for example video or controls.
if (game_paused == 1) {
if (pause_menu_selected_tab == 0) {
draw_text(text_video, 112, 146, 1, 1, 1, 1);
}
if (pause_menu_selected_tab == 1) {
draw_text(text_controls, 95, 146, 1, 1, 1, 1);
}
if (pause_menu_selected_tab == 2) {
draw_text(text_audio, 112, 146, 1, 1, 1, 1);
}
}

//Drawing blue backgrounds in video menu depending on what option is selected.
if (game_paused == 1) {
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 4) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 168, 0);
}
if (pause_menu_selected_stat == 5) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 180, 0);
}
}
}

//Drawing blue background in audio menu.
if (game_paused == 1) {
if (pause_menu_selected_tab == 2) {
if (pause_menu_selected_stat == 4) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 168, 0);
}
}
}

//Drawing text in video menu (pause menu).
if (game_paused == 1) {
if (pause_menu_selected_tab == 0) {
draw_text_small(text_window_mode, 12, 170, 1, 1, 1, 1);
draw_text_small(text_resolution, 12, 182, 1, 1, 1, 1);

draw_text_small(text_window_mode_variable, 99, 170, 1, 1, 1, 1);
draw_text_small(text_resolution_variable, 88, 182, 1, 1, 1, 1);
}
}


/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////// Input Settings /////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

//Drawing text in controls menu (pause menu).
if (game_paused == 1) {
if (pause_menu_selected_tab == 1) {


//Drawing blue background for options.
if (pause_menu_selected_stat == 4) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 168, 0);
}
if (pause_menu_selected_stat == 5) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 179, 0);
}
if (pause_menu_selected_stat == 6) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 190, 0);
}
if (pause_menu_selected_stat == 7) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 201, 0);
}
if (pause_menu_selected_stat == 8) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 212, 0);
}
if (pause_menu_selected_stat == 9) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 223, 0);
}
if (pause_menu_selected_stat == 10) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 234, 0);
}
if (pause_menu_selected_stat == 11) {
al_draw_bitmap(bitmap_pause_menu_selected_option, 10, 245, 0);
}



draw_text_small(text_shoot2, 12, 170, 1, 1, 1, 1);
draw_text_small(text_laser2, 12, 181, 1, 1, 1, 1);
draw_text_small(text_select2, 12, 181+11, 1, 1, 1, 1);
draw_text_small(text_pause2, 12, 181+11+11, 1, 1, 1, 1);
draw_text_small(text_up2, 12, 181+11+11+11, 1, 1, 1, 1);
draw_text_small(text_down2, 12, 181+11+11+11+11, 1, 1, 1, 1);
draw_text_small(text_left2, 12, 181+11+11+11+11+11, 1, 1, 1, 1);
draw_text_small(text_right2, 12, 181+11+11+11+11+11+11, 1, 1, 1, 1);


////////////////////
////////////////////
// Shoot ///////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 4) {
goto aftershoot2;
}}

//Alphabet.
if (strcmp(input_mapping_shoot, "_a") == 0) {
draw_text_small(text_controls_menu_a, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_b") == 0) {
draw_text_small(text_controls_menu_b, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_c") == 0) {
draw_text_small(text_controls_menu_c, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_d") == 0) {
draw_text_small(text_controls_menu_d, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_e") == 0) {
draw_text_small(text_controls_menu_e, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_f") == 0) {
draw_text_small(text_controls_menu_f, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_g") == 0) {
draw_text_small(text_controls_menu_g, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_h") == 0) {
draw_text_small(text_controls_menu_h, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_i") == 0) {
draw_text_small(text_controls_menu_i, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_j") == 0) {
draw_text_small(text_controls_menu_j, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_k") == 0) {
draw_text_small(text_controls_menu_k, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_l") == 0) {
draw_text_small(text_controls_menu_l, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_m") == 0) {
draw_text_small(text_controls_menu_m, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_n") == 0) {
draw_text_small(text_controls_menu_n, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_o") == 0) {
draw_text_small(text_controls_menu_o, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_p") == 0) {
draw_text_small(text_controls_menu_p, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_q") == 0) {
draw_text_small(text_controls_menu_q, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_r") == 0) {
draw_text_small(text_controls_menu_r, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_s") == 0) {
draw_text_small(text_controls_menu_s, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_u") == 0) {
draw_text_small(text_controls_menu_u, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_v") == 0) {
draw_text_small(text_controls_menu_v, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_w") == 0) {
draw_text_small(text_controls_menu_w, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_x") == 0) {
draw_text_small(text_controls_menu_x, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_y") == 0) {
draw_text_small(text_controls_menu_y, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_z") == 0) {
draw_text_small(text_controls_menu_z, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_shoot, "1") == 0) {
draw_text_small(text_controls_menu_1, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "2") == 0) {
draw_text_small(text_controls_menu_2, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "3") == 0) {
draw_text_small(text_controls_menu_3, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "4") == 0) {
draw_text_small(text_controls_menu_4, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "5") == 0) {
draw_text_small(text_controls_menu_5, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "6") == 0) {
draw_text_small(text_controls_menu_6, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "7") == 0) {
draw_text_small(text_controls_menu_7, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "8") == 0) {
draw_text_small(text_controls_menu_8, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "9") == 0) {
draw_text_small(text_controls_menu_9, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "0") == 0) {
draw_text_small(text_controls_menu_0, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_shoot, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_shoot, "_up") == 0) {
draw_text_small(text_controls_menu_up, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_down") == 0) {
draw_text_small(text_controls_menu_down, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_left") == 0) {
draw_text_small(text_controls_menu_left, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_right") == 0) {
draw_text_small(text_controls_menu_right, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_shoot, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "space") == 0) {
draw_text_small(text_controls_menu_space, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "home") == 0) {
draw_text_small(text_controls_menu_home, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "period") == 0) {
draw_text_small(text_controls_menu_period, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_shoot, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 54, 170, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
aftershoot2:
////////////////////
////////////////////
////////////////////
// Laser ///////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 5) {
goto afterlaser2;
}}

if (strcmp(input_mapping_laser, "_a") == 0) {
draw_text_small(text_controls_menu_a, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_b") == 0) {
draw_text_small(text_controls_menu_b, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_c") == 0) {
draw_text_small(text_controls_menu_c, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_d") == 0) {
draw_text_small(text_controls_menu_d, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_e") == 0) {
draw_text_small(text_controls_menu_e, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_f") == 0) {
draw_text_small(text_controls_menu_f, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_g") == 0) {
draw_text_small(text_controls_menu_g, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_h") == 0) {
draw_text_small(text_controls_menu_h, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_i") == 0) {
draw_text_small(text_controls_menu_i, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_j") == 0) {
draw_text_small(text_controls_menu_j, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_k") == 0) {
draw_text_small(text_controls_menu_k, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_l") == 0) {
draw_text_small(text_controls_menu_l, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_m") == 0) {
draw_text_small(text_controls_menu_m, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_n") == 0) {
draw_text_small(text_controls_menu_n, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_o") == 0) {
draw_text_small(text_controls_menu_o, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_p") == 0) {
draw_text_small(text_controls_menu_p, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_q") == 0) {
draw_text_small(text_controls_menu_q, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_r") == 0) {
draw_text_small(text_controls_menu_r, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_s") == 0) {
draw_text_small(text_controls_menu_s, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_u") == 0) {
draw_text_small(text_controls_menu_u, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_v") == 0) {
draw_text_small(text_controls_menu_v, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_w") == 0) {
draw_text_small(text_controls_menu_w, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_x") == 0) {
draw_text_small(text_controls_menu_x, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_y") == 0) {
draw_text_small(text_controls_menu_y, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_z") == 0) {
draw_text_small(text_controls_menu_z, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_laser, "1") == 0) {
draw_text_small(text_controls_menu_1, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "2") == 0) {
draw_text_small(text_controls_menu_2, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "3") == 0) {
draw_text_small(text_controls_menu_3, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "4") == 0) {
draw_text_small(text_controls_menu_4, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "5") == 0) {
draw_text_small(text_controls_menu_5, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "6") == 0) {
draw_text_small(text_controls_menu_6, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "7") == 0) {
draw_text_small(text_controls_menu_7, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "8") == 0) {
draw_text_small(text_controls_menu_8, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "9") == 0) {
draw_text_small(text_controls_menu_9, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "0") == 0) {
draw_text_small(text_controls_menu_0, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_laser, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_laser, "_up") == 0) {
draw_text_small(text_controls_menu_up, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_down") == 0) {
draw_text_small(text_controls_menu_down, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_left") == 0) {
draw_text_small(text_controls_menu_left, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_right") == 0) {
draw_text_small(text_controls_menu_right, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_laser, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "space") == 0) {
draw_text_small(text_controls_menu_space, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "home") == 0) {
draw_text_small(text_controls_menu_home, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "period") == 0) {
draw_text_small(text_controls_menu_period, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_laser, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 50, 181, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterlaser2:
////////////////////
////////////////////
////////////////////
// Select //////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 6) {
goto afterselect2;
}}
if (strcmp(input_mapping_select, "_a") == 0) {
draw_text_small(text_controls_menu_a, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_b") == 0) {
draw_text_small(text_controls_menu_b, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_c") == 0) {
draw_text_small(text_controls_menu_c, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_d") == 0) {
draw_text_small(text_controls_menu_d, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_e") == 0) {
draw_text_small(text_controls_menu_e, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_f") == 0) {
draw_text_small(text_controls_menu_f, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_g") == 0) {
draw_text_small(text_controls_menu_g, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_h") == 0) {
draw_text_small(text_controls_menu_h, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_i") == 0) {
draw_text_small(text_controls_menu_i, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_j") == 0) {
draw_text_small(text_controls_menu_j, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_k") == 0) {
draw_text_small(text_controls_menu_k, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_l") == 0) {
draw_text_small(text_controls_menu_l, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_m") == 0) {
draw_text_small(text_controls_menu_m, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_n") == 0) {
draw_text_small(text_controls_menu_n, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_o") == 0) {
draw_text_small(text_controls_menu_o, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_p") == 0) {
draw_text_small(text_controls_menu_p, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_q") == 0) {
draw_text_small(text_controls_menu_q, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_r") == 0) {
draw_text_small(text_controls_menu_r, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_s") == 0) {
draw_text_small(text_controls_menu_s, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_u") == 0) {
draw_text_small(text_controls_menu_u, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_v") == 0) {
draw_text_small(text_controls_menu_v, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_w") == 0) {
draw_text_small(text_controls_menu_w, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_x") == 0) {
draw_text_small(text_controls_menu_x, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_y") == 0) {
draw_text_small(text_controls_menu_y, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_z") == 0) {
draw_text_small(text_controls_menu_z, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_select, "1") == 0) {
draw_text_small(text_controls_menu_1, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "2") == 0) {
draw_text_small(text_controls_menu_2, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "3") == 0) {
draw_text_small(text_controls_menu_3, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "4") == 0) {
draw_text_small(text_controls_menu_4, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "5") == 0) {
draw_text_small(text_controls_menu_5, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "6") == 0) {
draw_text_small(text_controls_menu_6, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "7") == 0) {
draw_text_small(text_controls_menu_7, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "8") == 0) {
draw_text_small(text_controls_menu_8, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "9") == 0) {
draw_text_small(text_controls_menu_9, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "0") == 0) {
draw_text_small(text_controls_menu_0, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_select, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_select, "_up") == 0) {
draw_text_small(text_controls_menu_up, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_down") == 0) {
draw_text_small(text_controls_menu_down, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_left") == 0) {
draw_text_small(text_controls_menu_left, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_right") == 0) {
draw_text_small(text_controls_menu_right, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_select, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "space") == 0) {
draw_text_small(text_controls_menu_space, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "home") == 0) {
draw_text_small(text_controls_menu_home, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "period") == 0) {
draw_text_small(text_controls_menu_period, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_select, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 58, 192, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterselect2:
////////////////////
////////////////////
////////////////////
// Pause ///////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 7) {
goto afterpause2;
}}

if (strcmp(input_mapping_pause, "_a") == 0) {
draw_text_small(text_controls_menu_a, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_b") == 0) {
draw_text_small(text_controls_menu_b, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_c") == 0) {
draw_text_small(text_controls_menu_c, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_d") == 0) {
draw_text_small(text_controls_menu_d, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_e") == 0) {
draw_text_small(text_controls_menu_e, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_f") == 0) {
draw_text_small(text_controls_menu_f, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_g") == 0) {
draw_text_small(text_controls_menu_g, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_h") == 0) {
draw_text_small(text_controls_menu_h, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_i") == 0) {
draw_text_small(text_controls_menu_i, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_j") == 0) {
draw_text_small(text_controls_menu_j, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_k") == 0) {
draw_text_small(text_controls_menu_k, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_l") == 0) {
draw_text_small(text_controls_menu_l, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_m") == 0) {
draw_text_small(text_controls_menu_m, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_n") == 0) {
draw_text_small(text_controls_menu_n, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_o") == 0) {
draw_text_small(text_controls_menu_o, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_p") == 0) {
draw_text_small(text_controls_menu_p, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_q") == 0) {
draw_text_small(text_controls_menu_q, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_r") == 0) {
draw_text_small(text_controls_menu_r, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_s") == 0) {
draw_text_small(text_controls_menu_s, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_u") == 0) {
draw_text_small(text_controls_menu_u, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_v") == 0) {
draw_text_small(text_controls_menu_v, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_w") == 0) {
draw_text_small(text_controls_menu_w, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_x") == 0) {
draw_text_small(text_controls_menu_x, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_y") == 0) {
draw_text_small(text_controls_menu_y, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_z") == 0) {
draw_text_small(text_controls_menu_z, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_pause, "1") == 0) {
draw_text_small(text_controls_menu_1, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "2") == 0) {
draw_text_small(text_controls_menu_2, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "3") == 0) {
draw_text_small(text_controls_menu_3, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "4") == 0) {
draw_text_small(text_controls_menu_4, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "5") == 0) {
draw_text_small(text_controls_menu_5, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "6") == 0) {
draw_text_small(text_controls_menu_6, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "7") == 0) {
draw_text_small(text_controls_menu_7, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "8") == 0) {
draw_text_small(text_controls_menu_8, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "9") == 0) {
draw_text_small(text_controls_menu_9, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "0") == 0) {
draw_text_small(text_controls_menu_0, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_pause, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_pause, "_up") == 0) {
draw_text_small(text_controls_menu_up, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_down") == 0) {
draw_text_small(text_controls_menu_down, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_left") == 0) {
draw_text_small(text_controls_menu_left, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_right") == 0) {
draw_text_small(text_controls_menu_right, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_pause, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "space") == 0) {
draw_text_small(text_controls_menu_space, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "home") == 0) {
draw_text_small(text_controls_menu_home, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "period") == 0) {
draw_text_small(text_controls_menu_period, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_pause, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 52, 203, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterpause2:

////////////////////
////////////////////
////////////////////
// Up //////////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 8) {
goto afterup2;
}}

if (strcmp(input_mapping_up, "_a") == 0) {
draw_text_small(text_controls_menu_a, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_b") == 0) {
draw_text_small(text_controls_menu_b, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_c") == 0) {
draw_text_small(text_controls_menu_c, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_d") == 0) {
draw_text_small(text_controls_menu_d, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_e") == 0) {
draw_text_small(text_controls_menu_e, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_f") == 0) {
draw_text_small(text_controls_menu_f, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_g") == 0) {
draw_text_small(text_controls_menu_g, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_h") == 0) {
draw_text_small(text_controls_menu_h, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_i") == 0) {
draw_text_small(text_controls_menu_i, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_j") == 0) {
draw_text_small(text_controls_menu_j, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_k") == 0) {
draw_text_small(text_controls_menu_k, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_l") == 0) {
draw_text_small(text_controls_menu_l, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_m") == 0) {
draw_text_small(text_controls_menu_m, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_n") == 0) {
draw_text_small(text_controls_menu_n, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_o") == 0) {
draw_text_small(text_controls_menu_o, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_p") == 0) {
draw_text_small(text_controls_menu_p, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_q") == 0) {
draw_text_small(text_controls_menu_q, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_r") == 0) {
draw_text_small(text_controls_menu_r, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_s") == 0) {
draw_text_small(text_controls_menu_s, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_u") == 0) {
draw_text_small(text_controls_menu_u, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_v") == 0) {
draw_text_small(text_controls_menu_v, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_w") == 0) {
draw_text_small(text_controls_menu_w, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_x") == 0) {
draw_text_small(text_controls_menu_x, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_y") == 0) {
draw_text_small(text_controls_menu_y, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_z") == 0) {
draw_text_small(text_controls_menu_z, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_up, "1") == 0) {
draw_text_small(text_controls_menu_1, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "2") == 0) {
draw_text_small(text_controls_menu_2, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "3") == 0) {
draw_text_small(text_controls_menu_3, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "4") == 0) {
draw_text_small(text_controls_menu_4, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "5") == 0) {
draw_text_small(text_controls_menu_5, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "6") == 0) {
draw_text_small(text_controls_menu_6, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "7") == 0) {
draw_text_small(text_controls_menu_7, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "8") == 0) {
draw_text_small(text_controls_menu_8, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "9") == 0) {
draw_text_small(text_controls_menu_9, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "0") == 0) {
draw_text_small(text_controls_menu_0, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_up, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_up, "_up") == 0) {
draw_text_small(text_controls_menu_up, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_down") == 0) {
draw_text_small(text_controls_menu_down, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_left") == 0) {
draw_text_small(text_controls_menu_left, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_right") == 0) {
draw_text_small(text_controls_menu_right, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_up, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "space") == 0) {
draw_text_small(text_controls_menu_space, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "home") == 0) {
draw_text_small(text_controls_menu_home, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "period") == 0) {
draw_text_small(text_controls_menu_period, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_up, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 29, 214, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterup2:

////////////////////
////////////////////
////////////////////
// Down ////////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 9) {
goto afterdown2;
}}
if (strcmp(input_mapping_down, "_a") == 0) {
draw_text_small(text_controls_menu_a, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_b") == 0) {
draw_text_small(text_controls_menu_b, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_c") == 0) {
draw_text_small(text_controls_menu_c, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_d") == 0) {
draw_text_small(text_controls_menu_d, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_e") == 0) {
draw_text_small(text_controls_menu_e, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_f") == 0) {
draw_text_small(text_controls_menu_f, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_g") == 0) {
draw_text_small(text_controls_menu_g, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_h") == 0) {
draw_text_small(text_controls_menu_h, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_i") == 0) {
draw_text_small(text_controls_menu_i, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_j") == 0) {
draw_text_small(text_controls_menu_j, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_k") == 0) {
draw_text_small(text_controls_menu_k, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_l") == 0) {
draw_text_small(text_controls_menu_l, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_m") == 0) {
draw_text_small(text_controls_menu_m, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_n") == 0) {
draw_text_small(text_controls_menu_n, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_o") == 0) {
draw_text_small(text_controls_menu_o, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_p") == 0) {
draw_text_small(text_controls_menu_p, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_q") == 0) {
draw_text_small(text_controls_menu_q, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_r") == 0) {
draw_text_small(text_controls_menu_r, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_s") == 0) {
draw_text_small(text_controls_menu_s, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_u") == 0) {
draw_text_small(text_controls_menu_u, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_v") == 0) {
draw_text_small(text_controls_menu_v, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_w") == 0) {
draw_text_small(text_controls_menu_w, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_x") == 0) {
draw_text_small(text_controls_menu_x, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_y") == 0) {
draw_text_small(text_controls_menu_y, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_z") == 0) {
draw_text_small(text_controls_menu_z, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_down, "1") == 0) {
draw_text_small(text_controls_menu_1, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "2") == 0) {
draw_text_small(text_controls_menu_2, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "3") == 0) {
draw_text_small(text_controls_menu_3, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "4") == 0) {
draw_text_small(text_controls_menu_4, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "5") == 0) {
draw_text_small(text_controls_menu_5, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "6") == 0) {
draw_text_small(text_controls_menu_6, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "7") == 0) {
draw_text_small(text_controls_menu_7, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "8") == 0) {
draw_text_small(text_controls_menu_8, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "9") == 0) {
draw_text_small(text_controls_menu_9, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "0") == 0) {
draw_text_small(text_controls_menu_0, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_down, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_down, "_up") == 0) {
draw_text_small(text_controls_menu_up, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_down") == 0) {
draw_text_small(text_controls_menu_down, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_left") == 0) {
draw_text_small(text_controls_menu_left, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_right") == 0) {
draw_text_small(text_controls_menu_right, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_down, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "space") == 0) {
draw_text_small(text_controls_menu_space, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "home") == 0) {
draw_text_small(text_controls_menu_home, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "period") == 0) {
draw_text_small(text_controls_menu_period, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_down, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 46, 225, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterdown2:

////////////////////
////////////////////
////////////////////
// Left ////////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 10) {
goto afterleft2;
}}

if (strcmp(input_mapping_left, "_a") == 0) {
draw_text_small(text_controls_menu_a, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_b") == 0) {
draw_text_small(text_controls_menu_b, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_c") == 0) {
draw_text_small(text_controls_menu_c, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_d") == 0) {
draw_text_small(text_controls_menu_d, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_e") == 0) {
draw_text_small(text_controls_menu_e, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_f") == 0) {
draw_text_small(text_controls_menu_f, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_g") == 0) {
draw_text_small(text_controls_menu_g, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_h") == 0) {
draw_text_small(text_controls_menu_h, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_i") == 0) {
draw_text_small(text_controls_menu_i, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_j") == 0) {
draw_text_small(text_controls_menu_j, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_k") == 0) {
draw_text_small(text_controls_menu_k, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_l") == 0) {
draw_text_small(text_controls_menu_l, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_m") == 0) {
draw_text_small(text_controls_menu_m, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_n") == 0) {
draw_text_small(text_controls_menu_n, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_o") == 0) {
draw_text_small(text_controls_menu_o, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_p") == 0) {
draw_text_small(text_controls_menu_p, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_q") == 0) {
draw_text_small(text_controls_menu_q, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_r") == 0) {
draw_text_small(text_controls_menu_r, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_s") == 0) {
draw_text_small(text_controls_menu_s, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_u") == 0) {
draw_text_small(text_controls_menu_u, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_v") == 0) {
draw_text_small(text_controls_menu_v, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_w") == 0) {
draw_text_small(text_controls_menu_w, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_x") == 0) {
draw_text_small(text_controls_menu_x, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_y") == 0) {
draw_text_small(text_controls_menu_y, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_z") == 0) {
draw_text_small(text_controls_menu_z, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_left, "1") == 0) {
draw_text_small(text_controls_menu_1, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "2") == 0) {
draw_text_small(text_controls_menu_2, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "3") == 0) {
draw_text_small(text_controls_menu_3, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "4") == 0) {
draw_text_small(text_controls_menu_4, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "5") == 0) {
draw_text_small(text_controls_menu_5, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "6") == 0) {
draw_text_small(text_controls_menu_6, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "7") == 0) {
draw_text_small(text_controls_menu_7, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "8") == 0) {
draw_text_small(text_controls_menu_8, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "9") == 0) {
draw_text_small(text_controls_menu_9, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "0") == 0) {
draw_text_small(text_controls_menu_0, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_left, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_left, "_up") == 0) {
draw_text_small(text_controls_menu_up, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_down") == 0) {
draw_text_small(text_controls_menu_down, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_left") == 0) {
draw_text_small(text_controls_menu_left, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_right") == 0) {
draw_text_small(text_controls_menu_right, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_left, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "space") == 0) {
draw_text_small(text_controls_menu_space, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "home") == 0) {
draw_text_small(text_controls_menu_home, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "period") == 0) {
draw_text_small(text_controls_menu_period, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_left, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 42, 236, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterleft2:

////////////////////
////////////////////
////////////////////
// Right ///////////
////////////////////
////////////////////
////////////////////
if (pause_menu_record_input == 1) {
if (pause_menu_selected_stat == 11) {
goto afterright2;
}}

if (strcmp(input_mapping_right, "_a") == 0) {
draw_text_small(text_controls_menu_a, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_b") == 0) {
draw_text_small(text_controls_menu_b, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_c") == 0) {
draw_text_small(text_controls_menu_c, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_d") == 0) {
draw_text_small(text_controls_menu_d, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_e") == 0) {
draw_text_small(text_controls_menu_e, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_f") == 0) {
draw_text_small(text_controls_menu_f, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_g") == 0) {
draw_text_small(text_controls_menu_g, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_h") == 0) {
draw_text_small(text_controls_menu_h, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_i") == 0) {
draw_text_small(text_controls_menu_i, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_j") == 0) {
draw_text_small(text_controls_menu_j, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_k") == 0) {
draw_text_small(text_controls_menu_k, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_l") == 0) {
draw_text_small(text_controls_menu_l, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_m") == 0) {
draw_text_small(text_controls_menu_m, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_n") == 0) {
draw_text_small(text_controls_menu_n, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_o") == 0) {
draw_text_small(text_controls_menu_o, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_p") == 0) {
draw_text_small(text_controls_menu_p, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_q") == 0) {
draw_text_small(text_controls_menu_q, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_r") == 0) {
draw_text_small(text_controls_menu_r, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_s") == 0) {
draw_text_small(text_controls_menu_s, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_t") == 0) {
draw_text_small(text_controls_menu_t_, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_u") == 0) {
draw_text_small(text_controls_menu_u, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_v") == 0) {
draw_text_small(text_controls_menu_v, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_w") == 0) {
draw_text_small(text_controls_menu_w, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_x") == 0) {
draw_text_small(text_controls_menu_x, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_y") == 0) {
draw_text_small(text_controls_menu_y, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_z") == 0) {
draw_text_small(text_controls_menu_z, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_right, "1") == 0) {
draw_text_small(text_controls_menu_1, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "2") == 0) {
draw_text_small(text_controls_menu_2, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "3") == 0) {
draw_text_small(text_controls_menu_3, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "4") == 0) {
draw_text_small(text_controls_menu_4, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "5") == 0) {
draw_text_small(text_controls_menu_5, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "6") == 0) {
draw_text_small(text_controls_menu_6, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "7") == 0) {
draw_text_small(text_controls_menu_7, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "8") == 0) {
draw_text_small(text_controls_menu_8, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "9") == 0) {
draw_text_small(text_controls_menu_9, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "0") == 0) {
draw_text_small(text_controls_menu_0, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_right, "f1") == 0) {
draw_text_small(text_controls_menu_f1, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f2") == 0) {
draw_text_small(text_controls_menu_f2, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f3") == 0) {
draw_text_small(text_controls_menu_f3, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f4") == 0) {
draw_text_small(text_controls_menu_f4, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f5") == 0) {
draw_text_small(text_controls_menu_f5, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f6") == 0) {
draw_text_small(text_controls_menu_f6, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f7") == 0) {
draw_text_small(text_controls_menu_f7, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f8") == 0) {
draw_text_small(text_controls_menu_f8, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f9") == 0) {
draw_text_small(text_controls_menu_f9, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f10") == 0) {
draw_text_small(text_controls_menu_f10, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f11") == 0) {
draw_text_small(text_controls_menu_f11, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f12") == 0) {
draw_text_small(text_controls_menu_f12, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_right, "_up") == 0) {
draw_text_small(text_controls_menu_up, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_down") == 0) {
draw_text_small(text_controls_menu_down, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_right") == 0) {
draw_text_small(text_controls_menu_right, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_right") == 0) {
draw_text_small(text_controls_menu_right, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_right, "escape") == 0) {
draw_text_small(text_controls_menu_escape, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "tab") == 0) {
draw_text_small(text_controls_menu_tab, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "capslock") == 0) {
draw_text_small(text_controls_menu_capslock, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "lshift") == 0) {
draw_text_small(text_controls_menu_lshift, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "lcontrol") == 0) {
draw_text_small(text_controls_menu_lcontrol, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "alt") == 0) {
draw_text_small(text_controls_menu_alt, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "space") == 0) {
draw_text_small(text_controls_menu_space, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "rcontrol") == 0) {
draw_text_small(text_controls_menu_rcontrol, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "rshift") == 0) {
draw_text_small(text_controls_menu_rshift, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "altgr") == 0) {
draw_text_small(text_controls_menu_altgr, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "enter") == 0) {
draw_text_small(text_controls_menu_enter, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "delete") == 0) {
draw_text_small(text_controls_menu_delete, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "home") == 0) {
draw_text_small(text_controls_menu_home, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "pageup") == 0) {
draw_text_small(text_controls_menu_pageup, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "pagedown") == 0) {
draw_text_small(text_controls_menu_pagedown, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "backspace") == 0) {
draw_text_small(text_controls_menu_backspace, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "minus") == 0) {
draw_text_small(text_controls_menu_minus, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "equals") == 0) {
draw_text_small(text_controls_menu_equals, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "slash") == 0) {
draw_text_small(text_controls_menu_slash, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "comma") == 0) {
draw_text_small(text_controls_menu_comma, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "semicolon") == 0) {
draw_text_small(text_controls_menu_semicolon, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "period") == 0) {
draw_text_small(text_controls_menu_period, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "tilde") == 0) {
draw_text_small(text_controls_menu_tilde, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_right, "num_1") == 0) {
draw_text_small(text_controls_menu_num_1, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_2") == 0) {
draw_text_small(text_controls_menu_num_2, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_3") == 0) {
draw_text_small(text_controls_menu_num_3, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_4") == 0) {
draw_text_small(text_controls_menu_num_4, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_5") == 0) {
draw_text_small(text_controls_menu_num_5, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_6") == 0) {
draw_text_small(text_controls_menu_num_6, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_7") == 0) {
draw_text_small(text_controls_menu_num_7, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_8") == 0) {
draw_text_small(text_controls_menu_num_8, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_9") == 0) {
draw_text_small(text_controls_menu_num_9, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_0") == 0) {
draw_text_small(text_controls_menu_num_0, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_slash") == 0) {
draw_text_small(text_controls_menu_num_slash, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_asterisk") == 0) {
draw_text_small(text_controls_menu_num_asterisk, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_minus") == 0) {
draw_text_small(text_controls_menu_num_minus, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_plus") == 0) {
draw_text_small(text_controls_menu_num_plus, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_delete") == 0) {
draw_text_small(text_controls_menu_num_delete, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_enter") == 0) {
draw_text_small(text_controls_menu_num_enter, 51, 247, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterright2:



} //Are we in controls tab (pause menu)?
} //Is the game paused?


//Audio menu (pause menu).
if (game_paused == 1) {
if (pause_menu_selected_tab == 2) { 

draw_text_small(text_audio_menu_option_0_option, 12, 170, 1, 1, 1, 1);

}}


}