<?php
session_start();
 
if (!isset($_SESSION['user'])) {
    header('Location: login.php');
}
?>
 
<strong><?php echo 'Welcome, '. $_SESSION['user']['fullname']; ?></strong>
<p>
    <a href="logout.php">Log Out</a>
</p>