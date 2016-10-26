    <div class="center_title_bar">Police station detail form</div>
    <div class="login_box2">
    <form action='adminAction' method='get'>
    		<input type="hidden" name='action' value="policeStationDetail">
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
			<tfoot><tr><td class='rounded-foot-left' colspan='2'><input type="button" value='Detail' onclick="return getPsDetails();"> </td>
			
			</tr></tfoot></table></form>
    </div><br/>
     <div class="login_box2" id="stDetails">
    	
    </div>
