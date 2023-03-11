<?php
    $uname="root";
    $sname="localhost";
    $password="";
    $db="csit";
    $connect=mysqli_connect($sname,$uname,$password,$db);
    if(!$connect){
        die("Failed to Connect");
    }
    $name=$_GET['name'];
    $roll=$_GET['roll'];
    $email=$_GET['email'];
    $sql="insert into info values ('$name','$roll','$email')";
    $res=mysqli_query($connect,$sql);
    if(!$res){
        die("Failed to insert");
    }
    echo"Datas inserted";
?>
