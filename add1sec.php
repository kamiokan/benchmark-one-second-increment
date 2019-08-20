<?php

$result = 0;
$dt = new DateTime();
$p = $dt->modify('+1 second');
echo "start\n";

while ($p > new DateTime()) {
    $result++;
}

echo $result . "\n";
echo "end\n";
