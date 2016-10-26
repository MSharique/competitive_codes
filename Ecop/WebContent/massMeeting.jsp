<div class="center_title_bar">Mass Meeting Application Form</div>
    <div class="login_box">
    <form action='citizenAction' method='get' name='citizenMMForm' onsubmit='return validateCitizenMMForm()'>
    <input type="hidden" name="action" value="addCitizenMassMeetingInfo">
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan=2><strong>Meeting Information</strong></th>
    		</tr>
    		
    		<tr>
    			<th scope='col'><b>Reason for meeting</b></th>
    			<th scope='col'><b><input type="text" name="reason"> </b><br><br><a href="javascript:;" onclick="javascript:return checkEmailId();"></a></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Place of occurance</b></th>
    			<th scope='col'><b><input type="text" name="place"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col' colspan=2><strong>Duration of meeting</strong></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Meeting Date</b></th>
    			<th scope='col'><b>
    				<select name="dd">
    				<%for(int i=1;i<32;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="mm">
    				<%for(int i=1;i<8;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="yy">
    				<%for(int i=2011;i<2020;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    			</b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Starting Time [hh:mm]</b></th>
    			<th scope='col'><b><input type="text" name="startTime"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>End Time[hh:mm]</b></th>
    			<th scope='col'><b><input type="text" name="endTime"> </b></th>
    		</tr>
    		
    		<tr>
    			<th scope='col'><b>Total no. of participants</b></th>
    			<th scope='col'><b><input type="text" name="participants"> </b></th>
    		</tr>
    		
    	</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
