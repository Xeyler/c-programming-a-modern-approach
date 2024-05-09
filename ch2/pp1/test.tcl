#!/usr/bin/expect

set check_mark {
       *
      *
     *
*   *
 * *
  *
}

spawn [lindex $argv 0]
expect {
    [string trimleft $check_mark "\n"] {
        exit 0
    }
    default {
        puts stderr "Check mark was printed incorrectly!"
        exit 1
    }
}