    <div class="center_title_bar">Create police officer posting</div>
    <div class="login_box">
    <form action='adminAction' method='get'>
    		<input type="hidden" name='action' value="createPosting">
			<table id='rounded-corner'><tbody><thead>
			<tr>
			<th class='rounded-company' scope='col' colspan="2"><strong>Fill up the following detail </strong></th>
			
			</tr></thead>
			<tr>
			<td><strong>Select city</strong></td>
			<td>
				<select id="psCity" name="psCity" onchange="javascript:return getStationArea();">
					<option value="Indore">Indore</option>
					<option value="Bhopal">Bhopal</option>
					<option value="Jabalpur">Jabalpur</option>
				</select>
			</td>
			</tr>
			<tr>
			<td><strong>Select area</strong></td>
			<td id="sArea">
				<select name="psId">
					<option value="">select station area</option>
				</select>
			</td>
			</tr>
			<tr>
				<td><strong>Designation</strong></td>
				<td>
					<select id="designation" name="designation" onblur="javascript:return getOfficer();" >
						<option value="Sub-Inspector">Sub-Inspector</option>
						<option value="Inspector">Inspector</option>
						<option value="Constable">Constable</option>
					</select>
				</td>
			</tr>
			<tr>
			<td><strong>Select Officer</strong></td>
			<td id="sOff">
				<select name="emailid">
					<option value="">select Officer</option>
				</select>
			</td>
			</tr>
    		</tbody>    			
			
			
			<tfoot><tr><td class='rounded-foot-left' colspan='2'><input type='submit' value='Create'> </td>
			
			</tr></tfoot></table></form>
    </div>
