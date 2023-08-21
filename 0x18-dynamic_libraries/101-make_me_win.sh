#!/bin/bash
wget -P /tmp https://github.com/sidneyriffic/alx-low_level_programming/raw/master/0x17-dynamic_libraries/chngwcd.so
export LD_PRELOAD=/tmp/chngwcd.so
