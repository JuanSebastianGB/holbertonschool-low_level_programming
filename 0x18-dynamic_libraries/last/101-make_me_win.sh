#!/bin/bash
wget -q -O /tmp/victory_condition.so https://github.com/JuanSebastianGB/holbertonschool-low_level_programming/raw/main/0x18-dynamic_libraries/last/victory_condition.so
export LD_PRELOAD=/tmp/victory_condition.so
