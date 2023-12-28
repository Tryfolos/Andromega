//Adjusting difficulty after certain time intervals.
if (progression < 60*30) { //0 - 29 frames (30 seconds).
difficulty = 0;
}


if (progression >= 60*30) { // 30 - 59 frames (30 seconds).
if (progression < 60*60) {
difficulty = 1;
}}


if (progression >= 60*60) { // 60 - 89 frames (30 seconds).
if (progression < 60*90) {
difficulty = 2;
}}

if (progression >= 60*90) { // 90 - 119 frames (30 seconds).
if (progression < 60*120) {
difficulty = 3;
}}

if (progression >= 60*120) { // 120 - 179 frames (60 seconds).
if (progression < 60*180) {
difficulty = 4;
}}

if (progression >= 60*180) { // 180 - 239 frames (60 seconds).
if (progression < 60*240) {
difficulty = 5;
}}

if (progression >= 60*240) { //240 - 300 frames (60 seconds).
if (progression < 60*300) {
difficulty = 6;
}}

if (progression >= 60*300) { //300 - 360 frames (60 seconds).
if (progression < 60*360) {
difficulty = 7;
}}

if (progression >= 60*360) { //360 - 420 frames (60 seconds).
if (progression < 60*420) {
difficulty = 8;
}}

if (progression >= 60*420) { //420 - 510 frames (90 seconds).
if (progression < 60*510) {
difficulty = 9;
}}

if (progression >= 60*510) { //510 - 600 frames (90 seconds).
if (progression < 60*600) {
difficulty = 10;
}}


if (progression >= 60*600) { //600 - 720 frames (2 minutes) 10 - 12.5 minutes.
if (progression < 60*750) {
difficulty = 11;
}}

if (progression >= 60*750) { //720 - 840 frames (2 minutes) 12.5 - 15 minutes.
if (progression < 60*900) {
difficulty = 12;
}}

if (progression >= 60*900) { //840 - 960 frames (2 minutes) 15 - 17.5 minutes.
if (progression < 60*1050) {
difficulty = 13;
}}

if (progression >= 60*1050) { //960 - 1080 frames (2 minutes) 17.5 - 20 minutes.
if (progression < 60*1200) {
difficulty = 14;
}}

if (progression >= 60*1200) { //1080 frames (infinite minutes) 20 - infinity.
difficulty = 15;
}

