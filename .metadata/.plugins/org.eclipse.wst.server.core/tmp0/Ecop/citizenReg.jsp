<div class="center_title_bar">Citizen Sign Up Form</div>
    <div class="login_box">
    <form action='citizenAction' method='get' name='citizenForm' onsubmit='return validateCitizenForm()'>
    <input type="hidden" name="action" value="addCitizenInfo">
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan=2><strong>Fill Following Detail</strong></th>
    		</tr>
    		<tr>
    			<th scope='col' colspan=2><strong>Login Information</strong></th>
    		</tr>
    		
    		<tr>
    			<th scope='col'><b>Email-id</b></th>
    			<th scope='col'><b><input type="text" id="emailId" name="emailId"> </b><br><br><a href="javascript:;" onclick="javascript:return checkEmailId();"><b>Check Availability</b></a></th>
    		</tr>
    		<tr>
    			<th></th>
    			<th id="checkId"></th>
    		</tr>	
    		<tr>
    			<th scope='col'><b>Password</b></th>
    			<th scope='col'><b><input type="password" name="password"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Retype your password</b></th>
    			<th scope='col'><b><input type="password" name="repwd"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col' colspan=2><strong>Personal Information</strong></th>
    		</tr>
    		
    		<tr>
    			<th scope='col'><b>Full name</b></th>
    			<th scope='col'><b><input type="text" name="name"> </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Gender</b></th>
    			<th scope='col'><b><input type="radio" name="gender" value="Male" checked="checked">Male<input type="radio" name="gender" value="Female">Female </b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>DOB</b></th>
    			<th scope='col'><b>
    				<select name="dd">
    				<%for(int i=1;i<32;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="mm">
    				<%for(int i=1;i<13;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="yy">
    				<%for(int i=1940;i<2011;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    			</b></th>
    		</tr>
    		<tr>
    			<th scope='col'><b>Contact number</b></th>
    			<th scope='col'><b><input type="text" name="contact"> </b></th>
    		</tr>
    		<tr>
    			<th><b>Address</b></th>
    			<th><textarea rows="4" cols="20" name="address"></textarea>
    	</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
