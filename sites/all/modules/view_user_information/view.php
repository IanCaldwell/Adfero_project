<html>
    <body>
        <style type="text/css">
            th,td {
                border-width:0px 1px 1px 0px;
            }
        </style> 
        <?php
            mysql_connect('localhost','root','')or die(mysql_error());
            mysql_select_db('new') or die(mysql_error());
            $query=mysql_query("select * from user_information")or die(mysql_error());
            echo'<table border="1" ><th >User Id</th><th>First Name</th><th>Second Name</th>';
            while($res=mysql_fetch_array($query))
                {
                    echo'<tr><td>'.$res['id'].'</td><td>'.$res['first_name'].'</td><td>'.$res['second_name'].'</td></tr>';
                }
            echo'</table>';
                    ?>
    </body>
</html>

