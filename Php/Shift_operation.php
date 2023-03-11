<?php
    $arr=[1,2,3,4,5];
    print_r($arr);
    $val=array_shift($arr);
    echo"<br>Shifted value is ".$val."<br>";
    print_r($arr);
    array_unshift($arr,1);
    echo"<br>Array After unshifting is <br>";
    print_r($arr);

?>