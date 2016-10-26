    <div class="center_title_bar">Admin Login Form</div>
    <div class="login_box">
    <form action='adminAction' method='get' name='adminLoginForm' onsubmit='return validateAdminLoginFrom()'>
			<table id='rounded-corner'><tbody><thead>
			<tr>
			<th class='rounded-company' scope='col' colspan="2"><strong>Enter Loginid & Password</strong></th>
			
			</tr></thead>
			<tr>
			<td><strong>Login Id</strong></td>
			<td><input type='text' name='loginId'> </td>
			</tr>
			<tr>
			<td><strong>Password</strong></td>
			<td><input type='password' name='password'> </td>
			</tr>
			
			
			<tfoot><tr><td class='rounded-foot-left' colspan='2'><input type='submit' name='action' value='Sign-in'> </td>
			
			</tr></tfoot></table></form>
    </div>
