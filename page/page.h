const char MAIN_pagetime[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<body>


<body topmargin="0">
<DIV>
	<p align="center"><b><font face="Times New Roman" size="5" color="#999999">
	<br>
	Network Config</font></b></DIV>
<DIV>



<HR style="COLOR: #EB9243; BACKGROUND-COLOR: #EB9243"></DIV>
<p valign="top">
<table width="500" height="350"border="0"  align="center" cellpadding="1" cellspacing="1" bgcolor="#999999">

 


<tr>
    <td align="center" bgcolor="ffffff"><br>
      <form action="/form" name="form1" method="post">
      <table width="350" border="0" cellpadding="1" cellspacing="1" bgcolor="#ff0000">
        <tr>

<td bgcolor="#FEfeEF"><table width="350" border="0" cellspacing="0" cellpadding="0">


<tr>
<td width="110" height="22"><font size="2" color="#FEfeef">...</font><font size="2">time</font></td>
<td width="110" height="22"><input type="time" id="myTime" name="deger" value="22:15:00"></td>
</tr>

<tr>
<td width="110" height="22"><font size="2" color="#FEfeef">...</font><font size="2">Date</font></td>
<td width="110" height="22"><input type="date" id="myDate" name="deger1" value="2014-02-09"></td>
</tr>


</table></td>

</table>

<br>
<input class="mdl-button mdl-js-button mdl-button--raised mdl-js-ripple-effect" type="Submit" value="Submit">



<script>
function myFunction() {
    var x = document.getElementById("myTime").value;
    document.getElementById("demo").innerHTML = x;
}
</script>

<script>
function myFunction() {
    var x = document.getElementById("myDate").value;
    document.getElementById("demo").innerHTML = x;
}
</script>

</form>
</body>
</html>
)=====";