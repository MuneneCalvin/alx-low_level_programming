#!/bin/bash
wget -P /tmp https://github.com/MuneneCalvin/alx-low_level_progamming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
