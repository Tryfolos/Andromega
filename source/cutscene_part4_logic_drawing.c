if (current_cutscene_part == 3) {
if (chosen_option == 0) {



//Counting timer down.
timer_cutscene_part4 -= delta_time;


//Adding letters to text as time goes on.
if (timer_cutscene_part4 < sec*14.5) {
text_cutscene_part4[0] = 'A';
}
if (timer_cutscene_part4 < sec*14.4) {
text_cutscene_part4[1] = ' ';
}
if (timer_cutscene_part4 < sec*14.3) {
text_cutscene_part4[2] = 'M';
}
if (timer_cutscene_part4 < sec*14.2) {
text_cutscene_part4[3] = 'E';
}
if (timer_cutscene_part4 < sec*14.1) {
text_cutscene_part4[4] = 'N';
}
if (timer_cutscene_part4 < sec*14.0) {
text_cutscene_part4[5] = 'A';
}
if (timer_cutscene_part4 < sec*13.9) {
text_cutscene_part4[6] = 'C';
}
if (timer_cutscene_part4 < sec*13.8) {
text_cutscene_part4[7] = 'I';
}
if (timer_cutscene_part4 < sec*13.7) {
text_cutscene_part4[8] = 'N';
}
if (timer_cutscene_part4 < sec*13.6) {
text_cutscene_part4[9] = 'G';
}
if (timer_cutscene_part4 < sec*13.5) {
text_cutscene_part4[10] = ' ';
}
if (timer_cutscene_part4 < sec*13.4) {
text_cutscene_part4[11] = 'F';
}
if (timer_cutscene_part4 < sec*13.3) {
text_cutscene_part4[12] = 'I';
}
if (timer_cutscene_part4 < sec*13.2) {
text_cutscene_part4[13] = 'G';
}
if (timer_cutscene_part4 < sec*13.1) {
text_cutscene_part4[14] = 'U';
}
if (timer_cutscene_part4 < sec*13.0) {
text_cutscene_part4[15] = 'R';
}
if (timer_cutscene_part4 < sec*12.9) {
text_cutscene_part4[16] = 'E';
}
if (timer_cutscene_part4 < sec*12.8) {
text_cutscene_part4[17] = ' ';
}
if (timer_cutscene_part4 < sec*12.8) {
text_cutscene_part4[18] = 'R';
}
if (timer_cutscene_part4 < sec*12.7) {
text_cutscene_part4[19] = 'E';
}
if (timer_cutscene_part4 < sec*12.6) {
text_cutscene_part4[20] = 'V';
}
if (timer_cutscene_part4 < sec*12.5) {
text_cutscene_part4[21] = 'E';
}
if (timer_cutscene_part4 < sec*12.4) {
text_cutscene_part4[22] = 'A';
}
if (timer_cutscene_part4 < sec*12.3) {
text_cutscene_part4[23] = 'L';
}
if (timer_cutscene_part4 < sec*12.2) {
text_cutscene_part4[24] = 'S';
}
if (timer_cutscene_part4 < sec*12.1) {
text_cutscene_part4[25] = ' ';
}
if (timer_cutscene_part4 < sec*12.0) {
text_cutscene_part4[26] = 'I';
}
if (timer_cutscene_part4 < sec*11.9) {
text_cutscene_part4[27] = 'T';
}
if (timer_cutscene_part4 < sec*11.8) {
text_cutscene_part4[28] = 'S';
}
if (timer_cutscene_part4 < sec*11.7) {
text_cutscene_part4[29] = 'E';
}
if (timer_cutscene_part4 < sec*11.6) {
text_cutscene_part4[30] = 'L';
}
if (timer_cutscene_part4 < sec*11.5) {
text_cutscene_part4[31] = 'F';
}

//drawing texts.
draw_text(text_cutscene_part4, cutscene_part4_draw_x, cutscene_part4_draw_y, 1, 1, 1, 1);
draw_text(text_cutscene_part4_2, cutscene_part4_draw_x+50, cutscene_part4_draw_y+12, 1, 1, 1, 1);


//Once the timer has reached a certain point the cutscene will be over and switch over to gameplay mode in mission 1.
if (timer_cutscene_part4 < (sec*11.5) - (sec*2.5)) {
current_cutscene_part = -1;
}


}
}