    <div class="center_title_bar">Public request form</div>
    <div class="login_box2">
    
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong>Select Date </strong></th>
    		</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					<select id="dd" name="dd">
    				<%for(int i=1;i<32;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select id="mm" name="mm">
    				<%for(int i=1;i<13;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select id="yy" name="yy">
    				<%for(int i=2011;i<2020;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
				</td>
			</tr>
		</tbody>
		<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong>Select request type </strong></th>
    		</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					<select id="type" name="type">
						<option value="Loudspeaker">Loudspeaker</option>
						<option value="MassMeeting">Mass Meeting</option>
					</select>
				</td>
				<td><input type="button" value="Submit" onclick="return getRequestRes();"></td>
			</tr>
			<tr>
				
			</tr>
		</tbody>
	</table>
    </div><br/>
     <div class="login_box2" id="stDetails">
    	
    </div>
