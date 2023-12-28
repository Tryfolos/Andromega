//Calculating delta time.
delta_time = (clock()/100) - time_passed;
delta_time = delta_time;

//Calculating time_passed.
time_passed = (clock()/100);

//Calculating framerate.
framerate = (1.0/(float)delta_time)*10000.0;

//Devtest.
//printf("%f     %d\n", framerate, lagger);

///// If the target fps is lower than 60. /////

//Increasing the lag if the framerate is too high.
if (target_framerate < 60.0) {
if (framerate > target_framerate) {
framerate_gap = framerate - target_framerate;
if (framerate_gap > 99.99) {
lagger += 750000;
}
if (framerate_gap < 100.0) {
if (framerate_gap > 9.99) {
lagger += 500000;
}}
if (framerate_gap < 10.0) {
if (framerate_gap > 2.49) {
lagger += 400000;
}}
if (framerate_gap < 2.5) {
if (framerate_gap > 0.99) {
lagger += 150000;
}}
if (framerate_gap < 1.0) {
lagger += 5000;
}
}

//Decreasing the lag if the framerate is too low.
if (framerate < target_framerate) {
framerate_gap = target_framerate - framerate;
if (framerate_gap > 99.99) {
lagger -= 750000;
}
if (framerate_gap < 100.0) {
if (framerate_gap > 9.99) {
lagger -= 500000;
}}
if (framerate_gap < 10.0) {
if (framerate_gap > 2.49) {
lagger -= 400000;
}}
if (framerate_gap < 2.5) {
if (framerate_gap > 0.99) {
lagger -= 150000;
}}
if (framerate_gap < 1.0) {
lagger -= 5000;
}
}
}


///// If the target fps is between 60-120. /////

//Increasing the lag if the framerate is too high.
if (target_framerate > 59.0) {
if (target_framerate < 121.0) {
if (framerate > target_framerate) {
framerate_gap = framerate - target_framerate;
if (framerate_gap > 99.99) {
lagger += 500000;
}
if (framerate_gap < 100.0) {
if (framerate_gap > 9.99) {
lagger += 200000;
}}
if (framerate_gap < 10.0) {
if (framerate_gap > 2.49) {
lagger += 50000;
}}
if (framerate_gap < 2.5) {
if (framerate_gap > 0.99) {
lagger += 25000;
}}
if (framerate_gap < 1.0) {
lagger += 1500;
}
}

//Decreasing the lag if the framerate is too low.
if (framerate < target_framerate) {
framerate_gap = target_framerate - framerate;
if (framerate_gap > 99.99) {
lagger -= 500000;
}
if (framerate_gap < 100.0) {
if (framerate_gap > 9.99) {
lagger -= 200000;
}}
if (framerate_gap < 10.0) {
if (framerate_gap > 2.49) {
lagger -= 50000;
}}
if (framerate_gap < 2.5) {
if (framerate_gap > 0.99) {
lagger -= 25000;
}}
if (framerate_gap < 1.0) {
lagger -= 1500;
}
}
}}



///// If the target fps is between 120-240. /////

//Increasing the lag if the framerate is too high.
if (target_framerate > 120.0) {
if (target_framerate < 241.0) {
if (framerate > target_framerate) {
framerate_gap = framerate - target_framerate;
if (framerate_gap > 99.99) {
lagger += 100000;
}
if (framerate_gap < 100.0) {
if (framerate_gap > 9.99) {
lagger += 25000;
}}
if (framerate_gap < 10.0) {
if (framerate_gap > 2.49) {
lagger += 2000;
}}
if (framerate_gap < 2.5) {
if (framerate_gap > 0.99) {
lagger += 500;
}}
if (framerate_gap < 1.0) {
lagger += 200;
}
}

//Decreasing the lag if the framerate is too low.
if (framerate < target_framerate) {
framerate_gap = target_framerate - framerate;
if (framerate_gap > 99.99) {
lagger -= 100000;
}
if (framerate_gap < 100.0) {
if (framerate_gap > 9.99) {
lagger -= 25000;
}}
if (framerate_gap < 10.0) {
if (framerate_gap > 2.49) {
lagger -= 2000;
}}
if (framerate_gap < 2.5) {
if (framerate_gap > 0.99) {
lagger -= 500;
}}
if (framerate_gap < 1.0) {
lagger -= 200;
}
}
}}


//Lagging.
i = 0;
while (i < lagger) {
i += 1;
}

