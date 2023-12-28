//Only running if in the audio menu.
if (chosen_option == 4) {


//Checking if file exists. Creating it and setting default values if it doesn't
fstream = fopen("user_data/audio", "rb");
if (fstream == NULL) {
fstream = fopen("user_data/audio", "wb");
putc(5, fstream);
}
fclose(fstream); //Closing filestream.

//Opening filestream to load current volume level.
fstream = fopen("user_data/audio", "rb+");
fseek(fstream, 0, SEEK_SET);
audio_menu_option_0_option = fgetc(fstream);


//Closing filestream;
fclose(fstream);


} //Are we in the audio menu?