#!/usr/bin/expect

set volume 4186.

spawn [lindex $argv 0]
expect {
    $volume {
        exit 0
    }
    default {
        puts stderr "Volume of 10-meter radius sphere doesn't begin with \"${volume}\"!"
        exit 1
    }
}