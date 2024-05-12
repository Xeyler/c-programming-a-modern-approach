#!/usr/bin/expect

proc verify_volume {binary radius} {
    set volume [expr {4.0 / 3.0 * 3.14 * $radius ** 3}]
    spawn $binary
    expect "Input radius: "
    send "$radius\n"
    expect eof

    set output [lindex [split $expect_out(buffer) "\n"] end-1]
    set output [string trim $output]
    set tolerance 0.1

    if {abs($output - $volume) <= $tolerance} {
        return 0
    } else {
        puts stderr "Output wasn't within $tolerance of $volume (radius $radius)"
        return 1
    }
}

set return_status 0
incr return_status [verify_volume [lindex $argv 0] 5]
incr return_status [verify_volume [lindex $argv 0] 1.5]
incr return_status [verify_volume [lindex $argv 0] 25]
exit $return_status
