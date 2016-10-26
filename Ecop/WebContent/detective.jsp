
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%>    <div class="center_title_bar">Detectives Information</div>
    
    <div class="header_092">
    <%
    	Connection con=ConnectionMaker.getConnection();
    	Statement st=con.createStatement();
    	ResultSet rs=st.executeQuery("select * from detective");
    	while(rs.next()){
     %>
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col'><strong>Name </strong></th>
    			<th scope='col'><%=rs.getString(2) %></th>
    		</tr>
    		<tr>
    			<th scope='col'><strong>Contact No. </strong></th>
    			<th scope='col'><%=rs.getString(3) %></th>
    		</tr>
    		<tr>
    			<th scope='col'><strong>Fax No. </strong></th>
    			<th scope='col'><%=rs.getString(4) %></th>
    		</tr>
    		<tr>
    			<th scope='col'><strong>Email</strong></th>
    			<th scope='col'><%=rs.getString(5) %></th>
    		</tr>
    		<tr>
    			<th scope='col'><strong>Web-site </strong></th>
    			<th scope='col'><%=rs.getString(6) %></th>
    		</tr>
    		<tr>
    			<th scope='col'><strong>Address </strong></th>
    			<th scope='col'><textarea rows="4" cols="25" readonly="readonly"><%=rs.getString(7) %></textarea> </th>
    		</tr>
    		
    	</thead>
    	<tbody>
    		<tr>
    			<td></td><td></td>
    		</tr>
    	</tbody>
	</table>
	<%} %>
	</div><br/>
   
