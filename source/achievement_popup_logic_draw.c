//Only run this code when in gameplay mode.
if (current_cutscene_part == -1) {

//Select target drawing surface. 
al_set_target_bitmap(bitmap_gameplay_display);

//Moving achievement into view based on timer.
if (timer_achievement_1_popup > 200) { //#1.
achievement_1_popup_y -= 64;
}
if (timer_achievement_1_popup < 40 & timer_achievement_1_popup > 0) {
achievement_1_popup_y += 64;
}

if (timer_achievement_2_popup > 200) { //#2.
achievement_2_popup_y -= 64;
}
if (timer_achievement_2_popup < 40 & timer_achievement_2_popup > 0) {
achievement_2_popup_y += 64;
}

if (timer_achievement_3_popup > 200) { //#3.
achievement_3_popup_y -= 64;
}
if (timer_achievement_3_popup < 40 & timer_achievement_3_popup > 0) {
achievement_3_popup_y += 64;
}

if (timer_achievement_4_popup > 200) { //#4.
achievement_4_popup_y -= 64;
}
if (timer_achievement_4_popup < 40 & timer_achievement_4_popup > 0) {
achievement_4_popup_y += 64;
}

if (timer_achievement_5_popup > 200) { //#5.
achievement_5_popup_y -= 64;
}
if (timer_achievement_5_popup < 40 & timer_achievement_5_popup > 0) {
achievement_5_popup_y += 64;
}

if (timer_achievement_6_popup > 200) { //#6.
achievement_6_popup_y -= 64;
}
if (timer_achievement_6_popup < 40 & timer_achievement_6_popup > 0) {
achievement_6_popup_y += 64;
}

if (timer_achievement_7_popup > 200) { //#7.
achievement_7_popup_y -= 64;
}
if (timer_achievement_7_popup < 40 & timer_achievement_7_popup > 0) {
achievement_7_popup_y += 64;
}

if (timer_achievement_8_popup > 200) { //#8.
achievement_8_popup_y -= 64;
}
if (timer_achievement_8_popup < 40 & timer_achievement_8_popup > 0) {
achievement_8_popup_y += 64;
}



//Counting down popup timers.
if (timer_achievement_1_popup > 0) {
timer_achievement_1_popup -= 1;
}
if (timer_achievement_2_popup > 0) {
timer_achievement_2_popup -= 1;
}
if (timer_achievement_3_popup > 0) {
timer_achievement_3_popup -= 1;
}
if (timer_achievement_4_popup > 0) {
timer_achievement_4_popup -= 1;
}
if (timer_achievement_5_popup > 0) {
timer_achievement_5_popup -= 1;
}
if (timer_achievement_6_popup > 0) {
timer_achievement_6_popup -= 1;
}
if (timer_achievement_7_popup > 0) {
timer_achievement_7_popup -= 1;
}
if (timer_achievement_8_popup > 0) {
timer_achievement_8_popup -= 1;
}

//Clamping y values.
if (achievement_1_popup_y < 0) {
achievement_1_popup_y = 0;
}
if (achievement_2_popup_y < 0) {
achievement_2_popup_y = 0;
}
if (achievement_3_popup_y < 0) {
achievement_3_popup_y = 0;
}
if (achievement_4_popup_y < 0) {
achievement_4_popup_y = 0;
}
if (achievement_5_popup_y < 0) {
achievement_5_popup_y = 0;
}
if (achievement_1_popup_y < 0) {
achievement_1_popup_y = 0;
}
if (achievement_6_popup_y < 0) {
achievement_6_popup_y = 0;
}
if (achievement_7_popup_y < 0) {
achievement_7_popup_y = 0;
}

//If timer is not running set y position to default.
if (timer_achievement_1_popup == 0) {
achievement_1_popup_y = 40*64;
}
if (timer_achievement_2_popup == 0) {
achievement_2_popup_y = 40*64;
}
if (timer_achievement_3_popup == 0) {
achievement_3_popup_y = 40*64;
}
if (timer_achievement_4_popup == 0) {
achievement_4_popup_y = 40*64;
}
if (timer_achievement_5_popup == 0) {
achievement_5_popup_y = 40*64;
}
if (timer_achievement_6_popup == 0) {
achievement_6_popup_y = 40*64;
}
if (timer_achievement_7_popup == 0) {
achievement_7_popup_y = 40*64;
}
if (timer_achievement_8_popup == 0) {
achievement_8_popup_y = 40*64;
}


///// DRAWING STUFF BELOW THIS ACHIEVEMENT #1 /////



//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_1_popup > 0) {
al_draw_filled_rounded_rectangle(20, 247+(achievement_1_popup_y/64), 250, 260+(achievement_1_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_1_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "PACIFIST");
}


//Drawing "achievement unlocked" text green.
if (timer_achievement_1_popup > 0) {
draw_text_small(text_achievement_unlocked, 26, 250+(achievement_1_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_1_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_1_popup > 0) {
draw_text_small(text_achievement_unlocked, 26, 250+(achievement_1_popup_y/64), 1, 1, 1, 1);
}


///// DRAWING STUFF BELOW THIS ACHIEVEMENT #2 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_2_popup > 0) {
al_draw_filled_rounded_rectangle(6, 247+(achievement_2_popup_y/64), 261, 260+(achievement_2_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_2_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "STORM HIKER");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_2_popup > 0) {
draw_text_small(text_achievement_unlocked, 6 + 6, 250+(achievement_2_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_2_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_2_popup > 0) {
draw_text_small(text_achievement_unlocked, 6 + 6, 250+(achievement_2_popup_y/64), 1, 1, 1, 1);
}


///// DRAWING STUFF BELOW THIS ACHIEVEMENT #3 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_3_popup > 0) {
al_draw_filled_rounded_rectangle(1, 247+(achievement_3_popup_y/64), 269, 260+(achievement_3_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_3_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "SHIP MECHANIC");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_3_popup > 0) {
draw_text_small(text_achievement_unlocked, 6, 250+(achievement_3_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_3_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_3_popup > 0) {
draw_text_small(text_achievement_unlocked, 6, 250+(achievement_3_popup_y/64), 1, 1, 1, 1);
}




///// DRAWING STUFF BELOW THIS ACHIEVEMENT #4 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_4_popup > 0) {
al_draw_filled_rounded_rectangle(3, 247+(achievement_4_popup_y/64), 266, 260+(achievement_4_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_4_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "SUPERCHARGER");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_4_popup > 0) {
draw_text_small(text_achievement_unlocked, 3 + 6, 250+(achievement_4_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_4_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_4_popup > 0) {
draw_text_small(text_achievement_unlocked, 3 + 6, 250+(achievement_4_popup_y/64), 1, 1, 1, 1);
}


///// DRAWING STUFF BELOW THIS ACHIEVEMENT #5 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_5_popup > 0) {
al_draw_filled_rounded_rectangle(3, 247+(achievement_5_popup_y/64), 268, 260+(achievement_5_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_5_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "SHIELDBREAKER");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_5_popup > 0) {
draw_text_small(text_achievement_unlocked,3 + 6, 250+(achievement_5_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_5_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_5_popup > 0) {
draw_text_small(text_achievement_unlocked,3 + 6, 250+(achievement_5_popup_y/64), 1, 1, 1, 1);
}

///// DRAWING STUFF BELOW THIS ACHIEVEMENT #6 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_6_popup > 0) {
al_draw_filled_rounded_rectangle(11 + 3, 247+(achievement_6_popup_y/64), 256, 260+(achievement_6_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_6_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "A-STUDENT");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_6_popup > 0) {
draw_text_small(text_achievement_unlocked,11 + 3 + 6, 250+(achievement_6_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_6_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_6_popup > 0) {
draw_text_small(text_achievement_unlocked,11 + 3 + 6, 250+(achievement_6_popup_y/64), 1, 1, 1, 1);
}

///// DRAWING STUFF BELOW THIS ACHIEVEMENT #7 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_7_popup > 0) {
al_draw_filled_rounded_rectangle(2, 247+(achievement_7_popup_y/64), 268, 260+(achievement_7_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_7_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "SPACE VETERAN");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_7_popup > 0) {
draw_text_small(text_achievement_unlocked,2 + 3, 250+(achievement_7_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_7_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_7_popup > 0) {
draw_text_small(text_achievement_unlocked,2 + 3, 250+(achievement_7_popup_y/64), 1, 1, 1, 1);
}

///// DRAWING STUFF BELOW THIS ACHIEVEMENT #8 /////


//Drawing background squares. Sizes depends on the achievement tha has been unlocked.
if (timer_achievement_8_popup > 0) {
al_draw_filled_rounded_rectangle(4 + 3, 247+(achievement_8_popup_y/64), 262, 260+(achievement_8_popup_y/64), 5, 5, al_map_rgb(100, 100, 111));
}

//Setting achievement_unlocked text.
if (timer_achievement_8_popup > 0) {
sprintf(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED: %s", "SPEEDRUNNER");
}

//Drawing "achievement unlocked" text green.
if (timer_achievement_8_popup > 0) {
draw_text_small(text_achievement_unlocked,4 + 3 + 6, 250+(achievement_8_popup_y/64), 0, 1, 0, 1);
}

//Setting achievement_unlocked text.
if (timer_achievement_8_popup > 0) {
strcpy(text_achievement_unlocked, "ACHIEVEMENT UNLOCKED:");
}

//Drawing "achievement unlocked" text white.
if (timer_achievement_8_popup > 0) {
draw_text_small(text_achievement_unlocked,4 + 3 + 6, 250+(achievement_8_popup_y/64), 1, 1, 1, 1);
}






} //Are we in gameplay mode?