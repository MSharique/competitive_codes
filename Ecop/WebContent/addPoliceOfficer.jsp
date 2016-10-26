    <div class="center_title_bar">Add a police officer/employee</div>
    <div class="login_box">
    <form action='adminAction' method='get' name='citizenForm' onsubmit='return validateCitizenForm()'>
    		<input type="hidden" name='action' value="createOfficer">
			<table id='rounded-corner'><tbody><thead>
			<tr>
			<th class='rounded-company' scope='col' colspan="2"><strong>Fill up the following detail </strong></th>
			
			</tr></thead>
			<tr>
				<td><strong>Designation</strong></td>
				<td>
					<select name="designaion">
						<option value="Sub-Inspector">Sub-Inspector</option>
						<option value="Inspector">Inspector</option>
						<option value="Constable">Constable</option>
					</select>
				</td>
			</tr>
			<tr>
    			<td scope='col'><b>Email-id</b></td>
    			<td scope='col'><b><input type="text" id="emailId" name="emailId"> </b><br/><a href="javascript:;" onclick="javascript:return checkOfficerEmailId();"><b>Check Availability</b></a></td>
    		</tr>
    		<tr>
    			<td></td>
    			<td id="checkId"></td>
    		</tr>	
    		<tr>
    			<td scope='col'><b>Password</b></td>
    			<td scope='col'><b><input type="password" name="password"> </b></td>
    		</tr>
    		<tr>
    			<td scope='col'><b>Retype password</b></td>
    			<td scope='col'><b><input type="password" name="repwd"> </b></td>
    		</tr>
    		
    		<tr>
    			<td scope='col' colspan=2><strong>Personal Information</strong></td>
    		</tr>
    		
    		<tr>
    			<td scope='col'><b>Full name</b></td>
    			<td scope='col'><b><input type="text" name="name"> </b></td>
    		</tr>
    		<tr>
    			<td scope='col'><b>Gender</b></td>
    			<td scope='col'><b><input type="radio" name="gender" value="Male" checked="checked">Male<input type="radio" name="gender" value="Female">Female </b></td>
    		</tr>
    		<tr>
    			<td scope='col'><b>DOB</b></td>
    			<td scope='col'><b>
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
    				<%for(int i=1940;i<2011;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    			</b></td>
    		</tr>
    		<tr>
    			<td scope='col'><b>Contact number</b></td>
    			<td scope='col'><b><input type="text" name="contact"> </b></td>
    		</tr>
    		<tr>
    			<td><b>Address</b></td>
    			<td><textarea rows="4" cols="20" name="address"></textarea></td>
    		</tr>
    		</tbody>    			
			
			
			<tfoot><tr><td class='rounded-foot-left' colspan='2'><input type='submit' value='Create'> </td>
			
			</tr></tfoot></table></form>
    </div>
