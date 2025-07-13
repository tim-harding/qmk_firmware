#!/usr/bin/env fish
argparse 'l/left' 'r/right' -- $argv
qmk json2c -o keymap.c timharding.json
if set -q _flag_left
    qmk flash -kb splitkb/kyria/rev1 -km timharding
else if set -q _flag_right
    qmk flash -kb splitkb/kyria/rev1 -km timharding -bl avrdude
else
    echo 'Expected --left or --right'
end
