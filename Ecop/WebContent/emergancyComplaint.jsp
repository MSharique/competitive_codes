
<%@page import="java.net.InetAddress"%>    <div class="center_title_bar">Emergency Complaint</div>
    <div class="login_box2">
    <form action="citizenAction" method="get" name="emerForm" onsubmit="return validateEmerForm();">
    <input type="hidden" name="action" value="addEmergancyComplaint">
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
   	 		<tr>
    			<th scope='col' colspan='2'><strong>Please enter city and area of the place where the crime occured </strong></th>
    		</tr>
    		<tr>
    			<th scope='col' colspan='2'><font color="red">Complained will be entertained after verification with the complainant. Legal action is likely to be taken if the complaints are found to be false.</font></th>
    		</tr>
		</thead>
		<tbody>
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
			<td><strong>Complaint information </strong> </td>
			<td>
				<textarea rows="7" cols="30" name="crimeDetail"></textarea>
			</td>
		</tr>
		<tr>
			<td><strong>IP-Address which is shown in the red with dot(.)'s</strong> </td>
			<td><input type="text" readonly="readonly" name="ipAddress" value="<%=InetAddress.getLocalHost().getHostAddress() %>"> </td>
		</tr>
		<tr>
			<td><font color="red"><h2>IP:<%=InetAddress.getLocalHost().getHostAddress() %></h2> </font> </td>
			<td><input type="submit" value="Submit"> </td>
		</tr>
    </tbody>
	</table>
	</form>
    </div><br/>
   