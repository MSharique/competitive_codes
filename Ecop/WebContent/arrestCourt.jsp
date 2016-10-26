
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%><%
	String emailId=(String)session.getAttribute("emailId");
	Connection con=ConnectionMaker.getConnection();
	Statement st=con.createStatement();
	ResultSet rs=st.executeQuery("select * from efir where emailId='"+emailId+"'");
 %>
<div class="center_title_bar">Arrest/Court Surrender Form</div>
    <div class="login_box">
    <form action='arrestCourtAction' method='post' enctype="multipart/form-data"  name='arrestForm' onsubmit='return validateArrestForm();'>
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong><font color="red"> Once crime details is entered then the police officer should arrest the accused person and enter accused personal details in the database.</font></strong></th>
    		</tr>
    		<tr>
    			<td scope="col"><strong>F.I.R No</strong></td>
    			<td scope="col">
    				<select name="firNo">
    					<%while(rs.next()){String firno=rs.getString(1); %>
    						<option value="<%=firno %>"><%=firno %></option>
    					<%} %>
    				</select>
    			</td>
    		</tr>
    		<tr>
    			<td scope='col'><strong>Date</strong></td>
    			<td scope='col'><b>
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
    				<%for(int i=2011;i<2020;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    			</b></td>
    		</tr>
    		<tr>
    			<th scope='col' colspan='2'><strong>Select city and area for Police Station Info</strong></th>
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
			
			<tr>
				<td><strong>Name of the court</strong></td>
				<td><input type="text" name="courtName"></td>
			</tr>
			<tr>
				<td><strong>Act and sections</strong></td>
				<td><input type="text" name="actOrSection"></td>
			</tr>
			<tr>
    			<th scope='col' colspan='2'><strong>Select Applicable Portion</strong></th>
    		</tr>
			<tr>
				<td><strong><input type="radio" name="applicablePortion" value="Arrested and Forwarded">Arrested and Forwarded </strong> </td>
				<td><strong><input type="radio" name="applicablePortion" value="Arrested and released on bail or PR bond">Arrested and released on bail or PR bond </strong> </td>
			</tr>
			<tr>
				<td><strong><input type="radio" name="applicablePortion" value="Arrested but released on anticipatory bail">Arrested but released on anticipatory bail </strong> </td>
				<td><strong><input type="radio" name="applicablePortion" value="Arrested and remanded to police custody">Arrested and remanded to police custody  </strong> </td>
			</tr>
			<tr>
				<td><strong><input type="radio" name="applicablePortion" value="Surrendered in court and bailed out">Surrendered in court and bailed out  </strong> </td>
				<td><strong><input type="radio" name="applicablePortion" value="Surrendered in court and sent to judicial custody">Surrendered in court and sent to judicial custody </strong> </td>
			</tr>
			<tr>
				<td></td>
				<td><strong><input type="radio" name="applicablePortion" value="Surrendered in court and remanded to police custody">Surrendered in court and remanded to police custody </strong> </td>
			</tr>
			<tr>
				<th scope="col" colspan="2"><strong>Particulars of arrested</strong> </th>
			</tr>
			<tr>
				<td><strong>Name</strong></td>
				<td><input type="text" name="nameAP"></td>
			</tr>
			<tr>
				<td><strong>Son/Daughter/Husband Of</strong></td>
				<td><input type="text" name="sdhOfAP"></td>
			</tr>
			<tr>
				<td><strong>Nationality</strong></td>
				<td><input type="text" name="nationality"></td>
			</tr>
			<tr>
				<td><strong>Voter ID Card No</strong></td>
				<td><input type="text" name="voterIdNo"></td>
			</tr>
			<tr>
				<td><strong>Physical features, Deformities and other details of arrested person  </strong></td>
				<td><input type="file" name="phisicalInfo"><br/>Please fill in the physical feature of the arrested person details as per the specified format in<font color='red'> <b> Word(.doc)</b></font></td>
			</tr>
		</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
