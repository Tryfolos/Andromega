//The code here should only run after you've pressed the play button.
if (chosen_option == 0) {

//Counting down a timer.
timer_move_down_delay -= delta_time;

//Moving title down after you've pressed the play button and the timer has run out.
if (timer_move_down_delay <= 0) {
title_position += ((100-title_position)/1500)*delta_time;
}

//When the position reaches 100. Start alpha timer.
if (title_position > 98) {
timer_title_alpha -= delta_time;
}

//When alpha timer has run out, start decreasing alpha level of title.
if (timer_title_alpha <= 0) {
title_alpha -= 0.025*delta_time;
}

//Limiting alpha so it doesn't go below 0.
if (title_alpha < 0) {
title_alpha = 0;
}

//Devtest.
if (title_alpha == 0) {
//current_cutscene_part = -1;
}

//Drawing title screen.
al_draw_tinted_bitmap(bitmap_title_white, al_map_rgba((int)title_alpha, (int)title_alpha, (int)title_alpha, (int)title_alpha), (480*0.5)-97, title_position, 0);


}