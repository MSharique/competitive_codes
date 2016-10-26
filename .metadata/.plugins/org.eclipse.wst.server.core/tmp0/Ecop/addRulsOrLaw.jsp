    <div class="center_title_bar">Add Rules Form</div>
    <div class="login_box">
    <form action="adminAction" method="get" name="adminLawForm" onsubmit="return validateAdminLawForm();">
    <input type="hidden" name="action" value="addRulesOrLaws">
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='4'><strong>Fill Up Following Details </strong></th>
    		</tr>
		</thead>
		<tbody>
			<tr>
				<td></td>
				<td><strong>Section of the Rule/Act</strong> </td>
				<td>
					<input type="text" name="rule">Example: EP 302
				</td>
				<td></td>
			</tr>
			<tr>
				<td></td>
				<td><strong>Name of the Rule/Act</strong> </td>
				<td>
					<input type="text" name="ruleName">Example: POTA
				</td>
				<td></td>
			</tr>
			<tr>
				<td></td>
				<td><strong>Action and Punishments</strong> </td>
				<td>
					<textarea rows="7" cols="30" name="detail"></textarea><br></br>Example: Penalty of Rs.10000/- or imprisionment for maximum of 2 year or both.
				</td>
				<td></td>
			</tr>
			<tr>
				<td colspan="4"><input type="submit" value="Submit"> </td>
			</tr>
		</tbody>
	</table>
	</form>
    </div><br/>
     