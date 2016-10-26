<div class="center_title_bar">Reporting Missing Persons</div>
    <div class="login_box">
    <form action='citizenMissingPersonAction' method='post' enctype="multipart/form-data" name='citizenRMPForm' onsubmit='return validateCitizenRMPForm()'>
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan=2><strong>Missing Persons Identities</strong></th>
    		</tr>
    		
    		<tr>
    			<th scope='col'><b>Name</b></th>
    			<th scope='col'><b><input type="text" name="name"> </b><br><br><a href="javascript:;" onclick="javascript:return checkEmailId();"></a></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>color</b></th>
    			<th scope='col'><b><input type="text" name="color"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Height(in cm)</b></th>
    			<th scope='col'><b><input type="text" name="height"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Weight(in kg)</b></th>
    			<th scope='col'><b><input type="text" name="weight"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Lost Place</b></th>
    			<th scope='col'><b><input type="text" name="lost"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Date and Time when he/she lost</b></th>
    			<th scope='col'>
    			<b>
    				<select name="fdd">
    				<%for(int i=1;i<32;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="fmm">
    				<%for(int i=1;i<8;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="fyy">
    				<%for(int i=2011;i<2020;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    			</b></th>
    		</tr>
    		<tr>
    			<th scope='col'>
				</th>
				<th scope='col'><b>Time:<input type="text" name="lostTime"><br/> [Ex: 00:25]</b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Photo of missing person</b></th>
    			<th scope='col'><b><input type="file" name="img"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Do you think whether the person has escaped</b></th>
    			<th scope='col'>
    				<b><select name="escaped">
    					<option value="No">No</option>
    					<option value="Yes">Yes</option>
    				</select></b>
				</th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Do you think whether the person has kidnaped</b></th>
    			<th scope='col'>
    				<b><select name="kidnaped">
    					<option value="No">No</option>
    					<option value="Yes">Yes</option>
    				</select></b>
				</th>
    		</tr>
    		
    		<tr>
    			<th scope='col' colspan="2"><b>Police Station Details in which you want to reporting</b></th>
    		</tr>
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
    		
    	</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
