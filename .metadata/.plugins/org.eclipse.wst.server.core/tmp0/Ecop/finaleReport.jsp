
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%><%
	String emailId=(String)session.getAttribute("emailId");
	Connection con=ConnectionMaker.getConnection();
	Statement st=con.createStatement();
	ResultSet rs=st.executeQuery("select * from efir where emailId='"+emailId+"'");
 %>
<div class="center_title_bar">Final Form/Report</div>
    <div class="login_box">
    <form action='finalReportAction' method='post' enctype="multipart/form-data"  name='finalForm' onsubmit='return validateFinalForm();'>
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong><font color="red"> This form is the final form for which after the accused is produced in court and the judgment is given.</font></strong></th>
    		</tr>
    		<tr>
				<td><strong>Name of the court</strong></td>
				<td><input type="text" name="court"></td>
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
				<td><strong>Act and sections</strong></td>
				<td><input type="text" name="actOrSection"></td>
			</tr>
			<tr>
    			<th scope='col' colspan='2'><strong>Type of Final Form/Report</strong></th>
    		</tr>
			<tr>
				<td><strong><input type="radio" name="reportType" value="Charge Sheet/Not charge sheeted for want of evidence/FR True">Charge Sheet/Not charge sheeted for want of evidence/FR True </strong> </td>
				<td><strong><input type="radio" name="reportType" value="Undetected/FR True">Undetected/FR True </strong> </td>
			</tr>
			<tr>
				<td><strong><input type="radio" name="reportType" value="Untraced/FR True">Untraced/FR True </strong> </td>
				<td><strong><input type="radio" name="reportType" value="FR Unoccured">FR Unoccured  </strong> </td>
			</tr>
			<tr>
    			<th scope='col' colspan='2'><strong></strong></th>
    		</tr>
			<tr>
				<td><strong>Name of Complainant</strong></td>
				<td><input type="text" name="complainantName"></td>
			</tr>
			<tr>
				<td><strong>Father/Husband's Name</strong></td>
				<td><input type="text" name="fhName"></td>
			</tr>
			<tr>
				<td><strong>Detail of properties/Articles/Documents recovered during investigation and relied upon  </strong></td>
				<td><input type="file" name="detail"><br/>Please fill in the details as per the specified format in<font color='red'> <b> Word(.doc)</b></font></td>
			</tr>
		</thead>
    	<tr><td colspan='2'><input type='submit' value='submit'> </td> </tr>
    	</table>
	</form>
    </div>
