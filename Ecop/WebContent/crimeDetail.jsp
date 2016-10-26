
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%><%
	String emailId=(String)session.getAttribute("emailId");
	Connection con=ConnectionMaker.getConnection();
	Statement st=con.createStatement();
	ResultSet rs=st.executeQuery("select * from efir where emailId='"+emailId+"'");
 %>
<div class="center_title_bar">Crime Details Form</div>
    <div class="login_box">
    <form action='crimeDetailsAction' method='post' enctype="multipart/form-data"  name='crimeForm' onsubmit='return validateCrimeForm();'>
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong><font color="red">After identifying the accused person police officer should enter the crime details about the accused person.</font></strong></th>
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
				<th scope="col" colspan="2"><strong>Place of occurrence details shown by</strong> </th>
			</tr>
			<tr>
				<td><strong>Name</strong></td>
				<td><input type="text" name="name"></td>
			</tr>
			<tr>
				<td><strong>Son/Daughter/Husband Of</strong></td>
				<td><input type="text" name="sdhOf"></td>
			</tr>
			<tr>
				<td><strong>Address</strong> </td>
				<td>
					<textarea rows="7" cols="23" name="address"></textarea>
				</td>
			</tr>
			<tr>
				<th scope="col" colspan="2"><strong>Type of crime</strong> </th>
			</tr>
			<tr>
				<td><strong>Major Head</strong></td>
				<td><input type="text" name="majorHead"></td>
			</tr>
			<tr>
				<td><strong>Minor Head</strong></td>
				<td><input type="text" name="minorHead"></td>
			</tr>
			<tr>
				<td><strong>Conveyance(s) used</strong></td>
				<td><input type="text" name="conveyance"></td>
			</tr>
			<tr>
				<td><strong>Type of property stolen</strong></td>
				<td><input type="text" name="propertyType"></td>
			</tr>
			<tr>
				<td><strong>Particulars of the victim(s)</strong></td>
				<td><input type="file" name="particularVictim"><br/>Please fill in the particular of the victim(s) details as per the specified format in<font color='red'> <b> excel sheet</b></font></td>
			</tr>
			<tr>
				<td><strong>Details of property stolen</strong> </td>
				<td>
					<textarea rows="7" cols="23" name="detailProStolen"></textarea>
				</td>
			</tr>
			<tr>
    			<th scope='col' colspan='2'><strong>Date and time of visit to the place of occurrence</strong></th>
    		</tr>
    		<tr>
				<td><strong>Date</strong></td>
				<td scope='col'><b>
    				<select name="odd">
    				<%for(int i=1;i<32;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="omm">
    				<%for(int i=1;i<13;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    				<select name="oyy">
    				<%for(int i=2011;i<2020;i++){ %>
    					<option value="<%=i %>"><%=i %></option>
    				<%} %>	
    				</select>
    			</b></td>
			</tr>
			<tr>
				<td><strong>Time</strong></td>
				<td><input type="text" name="occurTime">Exp-[16:25] </td>
			</tr>
				    	
    	</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
