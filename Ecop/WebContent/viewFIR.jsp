    <%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%><%
	String emailId=(String)session.getAttribute("emailId");
	Connection con=ConnectionMaker.getConnection();
	Statement st=con.createStatement();
	ResultSet rs=st.executeQuery("select * from efir where emailId='"+emailId+"'");
 %>
    <div class="center_title_bar">View FIR Form</div>
    <div class="login_box2">
    
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong>Select F.I.R. No. </strong></th>
    		</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					<select id="firNo" name="firNo">
    				<%while(rs.next()){ String firNo=rs.getString(1); %>
    					<option value="<%=firNo %>"><%=firNo %></option>
    				<%} %>
    				</select>
    			</td>
			</tr>
		</tbody>
		<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong>Select form type </strong></th>
    		</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					<select id="type" name="type">
						<option value="FirstInformationReport">First Information Report</option>
						<option value="CrimeDetailForm">Crime Detail Form</option>
						<option value="ArrestForm">Arrest/Court Surrender Form</option>
						<option value="FinalReport">Final Form/Report</option>
					</select>
				</td>
				<td><input type="button" value="Submit" onclick="return getFIRForms();"></td>
			</tr>
			<tr>
				
			</tr>
		</tbody>
	</table>
    </div><br/>
     <div class="login_box2" id="stDetails">
    	
    </div>
