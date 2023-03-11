<?php
$array=["p"=>'Prime',"n"=>'NCCS',"P"=>'Patan',"A"=>'ASCOL',"k"=>'KMC',"B"=>'Bhaktapur'];
print_r($array);
echo '<br>Sorted in based on Key value<br>';
ksort($array);
print_r($array);
echo '<br>Sorted in reverse order based on values<br>';
arsort($array);
print_r($array);
?>