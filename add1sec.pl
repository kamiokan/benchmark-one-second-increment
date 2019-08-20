#!/usr/bin/env perl

use strict;
use warnings;

my $result = 0;
my $p      = time + 1;
print "start\n";

while ( $p > time ) {
    $result++;
}

print $result . "\n";
print "end\n";
