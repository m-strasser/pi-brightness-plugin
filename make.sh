#!/bin/sh

main=pi_brightness

gcc -Wall -shared -o lib${main}.so -fPIC panel-plugin/main.c `pkg-config --cflags --libs libxfce4panel-1.0` `pkg-config --cflags --libs gtk+-3.0`
