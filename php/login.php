<?php
session_start();
 
if (isset($_SESSION['user'])) {
    header('Location: myaccount.php');
}
 
require_once 'class-db.php';
 
$error_message = '';
if (isset($_POST['submit'])) {
    $db = new DB();
    $response = $db->check_credentials($_POST['email'], $_POST['password']);
 
    if ($response['status'] == 'success') {
        $_SESSION['user'] = array('id' => $response['id'], 'fullname' => $response['fullname']);
        header('Location: myaccount.php');
    }
 
    $error_message = ($response['status'] == 'error') ? $response['message'] : '';
}
?>
 
<?php if (!empty($error_message)) { ?>
    <div class="error">
        <strong><?php echo $error_message; ?></strong>
    </div>
<?php } ?>
<form method="post">
    <p>
        <label for="email">Email: </label>
        <input type="email" name="email" id="email" placeholder="Enter Email" required />
    </p>
    <p>
        <label for="password">Password: </label>
        <input type="password" name="password" id="password" placeholder="Enter Password" required />
    </p>
    <input type="submit" name="submit" value="Login" />
</form>