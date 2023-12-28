if (chosen_option == 0) {
if (current_cutscene_part == 2) {

//Counting down timer.
if (delta_time < 1000) {
timer_cutscene_part3 -= delta_time;
}

//Adding more letters
if (timer_cutscene_part3 < sec*14.5) {
text_cutscene_part3[0] = 'A';
}
if (timer_cutscene_part3 < sec*14.4) {
text_cutscene_part3[1] = 'N';
}
if (timer_cutscene_part3 < sec*14.3) {
text_cutscene_part3[2] = ' ';
}
if (timer_cutscene_part3 < sec*14.2) {
text_cutscene_part3[3] = 'E';
}
if (timer_cutscene_part3 < sec*14.1) {
text_cutscene_part3[4] = 'E';
}
if (timer_cutscene_part3 < sec*14.0) {
text_cutscene_part3[5] = 'R';
}
if (timer_cutscene_part3 < sec*13.9) {
text_cutscene_part3[6] = 'I';
}
if (timer_cutscene_part3 < sec*13.8) {
text_cutscene_part3[7] = 'E';
}
if (timer_cutscene_part3 < sec*13.7) {
text_cutscene_part3[8] = ' ';
}
if (timer_cutscene_part3 < sec*13.6) {
text_cutscene_part3[9] = 'P';
}
if (timer_cutscene_part3 < sec*13.5) {
text_cutscene_part3[10] = 'R';
}
if (timer_cutscene_part3 < sec*13.4) {
text_cutscene_part3[11] = 'E';
}
if (timer_cutscene_part3 < sec*13.3) {
text_cutscene_part3[12] = 'C';
}
if (timer_cutscene_part3 < sec*13.2) {
text_cutscene_part3[13] = 'E';
}
if (timer_cutscene_part3 < sec*13.1) {
text_cutscene_part3[14] = 'N';
}
if (timer_cutscene_part3 < sec*13.0) {
text_cutscene_part3[15] = 'S';
}
if (timer_cutscene_part3 < sec*12.9) {
text_cutscene_part3[16] = 'E';
}
if (timer_cutscene_part3 < sec*12.8) {
text_cutscene_part3[17] = ' ';
}
if (timer_cutscene_part3 < sec*12.7) {
text_cutscene_part3[18] = 'I';
}
if (timer_cutscene_part3 < sec*12.6) {
text_cutscene_part3[19] = 'S';
}
if (timer_cutscene_part3 < sec*12.5) {
text_cutscene_part3[20] = ' ';
}
if (timer_cutscene_part3 < sec*12.4) {
text_cutscene_part3[21] = 'L';
}
if (timer_cutscene_part3 < sec*12.3) {
text_cutscene_part3[22] = 'O';
}
if (timer_cutscene_part3 < sec*12.2) {
text_cutscene_part3[23] = 'O';
}
if (timer_cutscene_part3 < sec*12.1) {
text_cutscene_part3[24] = 'M';
}
if (timer_cutscene_part3 < sec*12.0) {
text_cutscene_part3[25] = 'I';
}
if (timer_cutscene_part3 < sec*11.9) {
text_cutscene_part3[26] = 'N';
}
if (timer_cutscene_part3 < sec*11.8) {
text_cutscene_part3[27] = 'G';
}
if (timer_cutscene_part3 < sec*11.7) {
text_cutscene_part3[28] = ' ';
}
if (timer_cutscene_part3 < sec*11.6) {
text_cutscene_part3[29] = 'O';
}
if (timer_cutscene_part3 < sec*11.5) {
text_cutscene_part3[30] = 'V';
}
if (timer_cutscene_part3 < sec*11.4) {
text_cutscene_part3[31] = 'E';
}
if (timer_cutscene_part3 < sec*11.3) {
text_cutscene_part3[32] = 'R';
}
if (timer_cutscene_part3 < sec*11.2) {
text_cutscene_part3[33] = ' ';
}
if (timer_cutscene_part3 < sec*11.1) {
text_cutscene_part3[34] = 'T';
}
if (timer_cutscene_part3 < sec*11.0) {
text_cutscene_part3[35] = 'H';
}
if (timer_cutscene_part3 < sec*10.9) {
text_cutscene_part3[36] = 'E';
}
if (timer_cutscene_part3 < sec*10.8) {
text_cutscene_part3[37] = ' ';
}
if (timer_cutscene_part3 < sec*10.7) {
text_cutscene_part3[38] = 'H';
}
if (timer_cutscene_part3 < sec*10.6) {
text_cutscene_part3[39] = 'O';
}
if (timer_cutscene_part3 < sec*10.5) {
text_cutscene_part3[40] = 'R';
}
if (timer_cutscene_part3 < sec*10.4) {
text_cutscene_part3[41] = 'I';
}
if (timer_cutscene_part3 < sec*10.3) {
text_cutscene_part3[42] = 'Z';
}
if (timer_cutscene_part3 < sec*10.2) {
text_cutscene_part3[43] = 'O';
}
if (timer_cutscene_part3 < sec*10.1) {
text_cutscene_part3[44] = 'N';
}

//If the text has been on the screen for over two seconds, it will disappear.
if (timer_cutscene_part3 < (sec*10.1)-(sec*2)) {
current_cutscene_part = 3;
}

//Draw skull.
if (timer_cutscene_part3 < sec*12) {
al_draw_tinted_scaled_bitmap(bitmap_skull, al_map_rgba((int)cutscene_part3_skull_alpha, (int)cutscene_part3_skull_alpha, (int)cutscene_part3_skull_alpha, (int)cutscene_part3_skull_alpha), 0, 0, 41, 64, (480/2)-((41*3)/2), 20, 41*3, 64*3, 0);
}

//Change the transparency of the skull as soon as the skull is shown.
if (timer_cutscene_part3 < sec*12) {
cutscene_part3_skull_alpha -= 0.2*delta_time;
}

//Limit transparency of skull.
if (cutscene_part3_skull_alpha < 0.0) {
cutscene_part3_skull_alpha = 0.0;
}





//Draw text.
if (timer_cutscene_part3 < sec*14.5) {
draw_text(text_cutscene_part3, cutscene_part3_draw_x, cutscene_part3_draw_y, 1, 1, 1, 1);
}


}
}