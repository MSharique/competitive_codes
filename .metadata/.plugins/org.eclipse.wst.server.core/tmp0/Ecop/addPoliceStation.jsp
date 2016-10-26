    <div class="center_title_bar">Add a police station</div>
    <div class="login_box">
    <form action='adminAction' method='get' name='adminPolStaForm' onsubmit='return validateAdminPolStaFrom()'>
			<table id='rounded-corner'><tbody><thead>
			<tr>
			<th class='rounded-company' scope='col' colspan="2"><strong>Fill up the following detail </strong></th>
			
			</tr></thead>
			<tr>
			<td><strong>Select city</strong></td>
			<td>
				<select name="psCity">
					<option value="">select city</option>
					<option value="Indore">Indore</option>
					<option value="Bhopal">Bhopal</option>
					<option value="Jabalpur">Jabalpur</option>
				</select>
			</td>
			</tr>
			<tr>
			<td><strong>Enter area</strong></td>
			<td><input type="text" name='psArea'> </td>
			</tr>
			<tr>
			<td><strong>Enter station name</strong></td>
			<td><input type="text" name='psName'> </td>
			</tr>
			
			
			<tfoot><tr><td class='rounded-foot-left' colspan='2'><input type='submit' name='action' value='Create'> </td>
			
			</tr></tfoot></table></form>
    </div>
