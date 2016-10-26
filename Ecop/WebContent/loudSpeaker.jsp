<div class="center_title_bar">LoudSpeaker License Form</div>
    <div class="login_box">
    <form action='citizenAction' method='get' name='citizenLSForm' onsubmit='return validateCitizenLSForm()'>
    <input type="hidden" name="action" value="addCitizenLoudSpeakerInfo">
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan=2><strong>Petitioner Information</strong></th>
    		</tr>
    		
    		<tr>
    			<th scope='col'><b>Applicant's Name</b></th>
    			<th scope='col'><b><input type="text" name="name"> </b><br><br><a href="javascript:;" onclick="javascript:return checkEmailId();"></a></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Reason for using speakers</b></th>
    			<th scope='col'><b><input type="text" name="reason"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col' colspan=2><strong>Date and Time of Using Speakers</strong></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>From:</b>
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
    			<th scope='col'><b>Time:<input type="text" name="fromTime"><br/>[Ex: 18:25] </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>To:</b>
    				<select name="tdd">
    				<%for(int i=1;i<32;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="tmm">
    				<%for(int i=1;i<8;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="tyy">
    				<%for(int i=2011;i<2020;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
				</th>
				<th scope='col'><b>Time:<input type="text" name="toTime"><br/> [Ex: 00:25]</b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Location of the speakers to be used</b></th>
    			<th scope='col'><b><input type="text" name="location"> </b></th>
    		</tr>
    		
    	</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
