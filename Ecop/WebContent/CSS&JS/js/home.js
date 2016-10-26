//Create browser object

	function GetXmlHttpObject() {
	
	if (window.XMLHttpRequest) {
  // code for IE7+, Firefox, Chrome, Opera, Safari
		return new XMLHttpRequest();
	}
	if (window.ActiveXObject) {
  // code for IE6, IE5
		return new ActiveXObject("Microsoft.XMLHTTP");
	}
	return null;
}


function noBack(){
	 window.history.forward()
 }
noBack(); 
window.onload=noBack; 
window.onpageshow=function(evt){
	if(evt.persisted){
		noBack()}
} 
window.onunload=function(){void(0)}

var link = null;
var please_wait = null;



function open_url2(){
	var url='checkout1.jsp';
	var target='centerPan';
	if ( ! document.getElementById) {
  		return false;
 	}

 	if (please_wait !== null) {
  		document.getElementById(target).innerHTML = please_wait;
 	}

 	if (window.ActiveXObject) {
  		link = new ActiveXObject("Microsoft.XMLHTTP");
 	} else if (window.XMLHttpRequest) {
  		link = new XMLHttpRequest();
 	}

 	if (link == undefined) {
  		return false;
 	}
 	link.onreadystatechange = function() { response(url, target); }
 	link.open("GET", url, true);
 	link.send(null);
	
}


function open_url1(){
	var url='checkout.jsp';
	var target='centerPan';
	if ( ! document.getElementById) {
  		return false;
 	}

 	if (please_wait !== null) {
  		document.getElementById(target).innerHTML = please_wait;
 	}

 	if (window.ActiveXObject) {
  		link = new ActiveXObject("Microsoft.XMLHTTP");
 	} else if (window.XMLHttpRequest) {
  		link = new XMLHttpRequest();
 	}

 	if (link == undefined) {
  		return false;
 	}
 	link.onreadystatechange = function() { response(url, target); }
 	link.open("GET", url, true);
 	link.send(null);
	
}

function open_url(url, target) {
	
 	if ( ! document.getElementById) {
  		return false;
 	}

 	if (please_wait !== null) {
  		document.getElementById(target).innerHTML = please_wait;
 	}

 	if (window.ActiveXObject) {
  		link = new ActiveXObject("Microsoft.XMLHTTP");
 	} else if (window.XMLHttpRequest) {
  		link = new XMLHttpRequest();
 	}

 	if (link == undefined) {
  		return false;
 	}
 	link.onreadystatechange = function() { response(url, target); }
 	link.open("GET", url, true);
 	link.send(null);
}

function response(url, target) {
 	if (link.readyState == 4) {
	 	document.getElementById(target).innerHTML = (link.status ==200) ? link.responseText : "Ooops!! A broken link! Please contact the webmaster of this website ASAP and give him the fallowing errorcode: " + link.status;
	}
}

function validateEmerForm(){
	var psId = document.emerForm.psId;
	var crimeDetail = document.emerForm.crimeDetail;
	   if (psId.value == "")
	    {
	        window.alert("psId required");
	        psId.focus();
	        return false;
	    }
	    if (crimeDetail.value == "")
	    {
	        window.alert("crimeDetail required");
	        crimeDetail.focus();
	        return false;
	    }
	    
	    return true;
}

function validateAdminLawForm(){
	var rule = document.adminLawForm.rule;
	var ruleName = document.adminLawForm.ruleName; 
    var detail = document.adminLawForm.detail;
    
    if (rule.value == "")
    {
        window.alert("rule required");
        rule.focus();
        return false;
    }
    if (ruleName.value == "")
    {
        window.alert("ruleName required");
        ruleName.focus();
        return false;
    }
    if (detail.value == "")
    {
        window.alert("detail required");
        detail.focus();
        return false;
    }
    
    return true;
}

function validateCitizenFIRForm(){
	var psId = document.citizenFIRForm.psId;
	var complaintInfo = document.citizenFIRForm.complaintInfo; 
    var ipadd = document.citizenFIRForm.ipadd;
    
    if (psId.value == "")
    {
        window.alert("station required");
        psId.focus();
        return false;
    }
    if (complaintInfo.value == "")
    {
        window.alert("complaintInfo required");
        complaintInfo.focus();
        return false;
    }
    if (ipadd.value == "")
    {
        window.alert("IP-Address required");
        ipadd.focus();
        return false;
    }
    
    return true;
}

function validateFinalForm(){
	var court = document.finalForm.court;
    var psId = document.finalForm.psId;
    var actOrSection = document.finalForm.actOrSection;
    var reportType = document.finalForm.reportType;
    var complainantName = document.finalForm.complainantName; 
    var fhName = document.finalForm.fhName;
    var detail = document.finalForm.detail;
    
    if (court.value == "")
    {
        window.alert("court required");
        court.focus();
        return false;
    }
    
    if (psId.value == "")
    {
        window.alert("psId required");
        psId.focus();
        return false;
    }
    if (actOrSection.value == "")
    {
        window.alert("actOrSection required");
        actOrSection.focus();
        return false;
    }
    if (reportType.value == "")
    {
        window.alert("reportType required");
        reportType.focus();
        return false;
    }
    if (complainantName.value == "")
    {
        window.alert("complainantName required");
        complainantName.focus();
        return false;
    }
    if (fhName.value == "")
    {
        window.alert("fhName required");
        fhName.focus();
        return false;
    }
    
    if (detail.value == "")
    {
        window.alert("detail required");
        detail.focus();
        return false;
    }
    
    return true;
}


function validateArrestForm(){
	var psId = document.arrestForm.psId;
    var courtName = document.arrestForm.courtName;
    var actOrSection = document.arrestForm.actOrSection;
    var applicablePortion = document.arrestForm.applicablePortion;
    var nameAP = document.arrestForm.nameAP; 
    var sdhOfAP = document.arrestForm.sdhOfAP;
    var nationality = document.arrestForm.nationality;
    var voterIdNo = document.arrestForm.voterIdNo;
    var phisicalInfo = document.arrestForm.phisicalInfo;
   
    if (psId.value == "")
    {
        window.alert("psId required");
        psId.focus();
        return false;
    }
    
    if (courtName.value == "")
    {
        window.alert("courtName required");
        courtName.focus();
        return false;
    }
    if (actOrSection.value == "")
    {
        window.alert("actOrSection required");
        actOrSection.focus();
        return false;
    }
    if (applicablePortion.value == "")
    {
        window.alert("applicablePortion required");
        applicablePortion.focus();
        return false;
    }
    if (nameAP.value == "")
    {
        window.alert("nameAP required");
        nameAP.focus();
        return false;
    }
    if (sdhOfAP.value == "")
    {
        window.alert("sdhOfAP required");
        sdhOfAP.focus();
        return false;
    }
    
    if (nationality.value == "")
    {
        window.alert("nationality required");
        nationality.focus();
        return false;
    }
    
    if (voterIdNo.value == "")
    {
        window.alert("voterIdNo required");
        voterIdNo.focus();
        return false;
    }
    if (phisicalInfo.value == "")
    {
        window.alert("phisicalInfo required");
        phisicalInfo.focus();
        return false;
    }
    
   
    return true;

}



function validateCrimeForm(){
	var psId = document.crimeForm.psId;
    var name = document.crimeForm.name;
    var sdhOf = document.crimeForm.sdhOf;
    var address = document.crimeForm.address;
    var majorHead = document.crimeForm.majorHead; 
    var minorHead = document.crimeForm.minorHead;
    var conveyance = document.crimeForm.conveyance;
    var propertyType = document.crimeForm.propertyType;
    var particularVictim = document.crimeForm.particularVictim;
    var detailProStolen = document.crimeForm.detailProStolen;
    var occurTime = document.crimeForm.occurTime;
    if (psId.value == "")
    {
        window.alert("psId required");
        psId.focus();
        return false;
    }
    
    if (name.value == "")
    {
        window.alert("name required");
        name.focus();
        return false;
    }
    if (sdhOf.value == "")
    {
        window.alert("sdhOf required");
        sdhOf.focus();
        return false;
    }
    if (address.value == "")
    {
        window.alert("address required");
        address.focus();
        return false;
    }
    if (majorHead.value == "")
    {
        window.alert("majorHead required");
        majorHead.focus();
        return false;
    }
    if (minorHead.value == "")
    {
        window.alert("minorHead required");
        minorHead.focus();
        return false;
    }
    
    if (conveyance.value == "")
    {
        window.alert("conveyance required");
        conveyance.focus();
        return false;
    }
    
    if (propertyType.value == "")
    {
        window.alert("propertyType required");
        propertyType.focus();
        return false;
    }
    if (particularVictim.value == "")
    {
        window.alert("particularVictim required");
        particularVictim.focus();
        return false;
    }
    if (detailProStolen.value == "")
    {
        window.alert("detailProStolen required");
        detailProStolen.focus();
        return false;
    }
    if (occurTime.value == "")
    {
        window.alert("occurTime required");
        occurTime.focus();
        return false;
    }	
   
    return true;

}

function validateFIRForm(){
	var occurTime = document.firForm.occurTime;
    var reportDate = document.firForm.reportDate;
    var reportTime = document.firForm.reportTime;
    var occurPlace = document.firForm.occurPlace;
    var particularProperty = document.firForm.particularProperty; 
    var propertyValue = document.firForm.propertyValue;
    var name = document.firForm.name;
    var sdhOf = document.firForm.sdhOf;
    var nationality = document.firForm.nationality;
    var occuption = document.firForm.occuption;
    var firSummary = document.firForm.firSummary;
    if (occurTime.value == "")
    {
        window.alert("occurTime required");
        occurTime.focus();
        return false;
    }
    
    if (reportDate.value == "")
    {
        window.alert("reportDate required");
        reportDate.focus();
        return false;
    }
    if (reportTime.value == "")
    {
        window.alert("reportTime required");
        reportTime.focus();
        return false;
    }
    if (occurPlace.value == "")
    {
        window.alert("occurPlace required");
        occurPlace.focus();
        return false;
    }
    if (particularProperty.value == "")
    {
        window.alert("particularProperty required");
        particularProperty.focus();
        return false;
    }
    if (propertyValue.value == "")
    {
        window.alert("propertyValue required");
        propertyValue.focus();
        return false;
    }
    
    if (name.value == "")
    {
        window.alert("name required");
        name.focus();
        return false;
    }
    
    if (sdhOf.value == "")
    {
        window.alert("sdhOf required");
        sdhOf.focus();
        return false;
    }
    if (nationality.value == "")
    {
        window.alert("nationality required");
        nationality.focus();
        return false;
    }
    if (occuption.value == "")
    {
        window.alert("occuption required");
        occuption.focus();
        return false;
    }
    if (firSummary.value == "")
    {
        window.alert("firSummary required");
        firSummary.focus();
        return false;
    }	
   
    return true;
}

function validateCitizenRMPForm(){
	var name = document.citizenRMPForm.name;
    var color = document.citizenRMPForm.color;
    var height = document.citizenRMPForm.height;
    var weight = document.citizenRMPForm.weight;
    var lost = document.citizenRMPForm.lost; 
    var lostTime = document.citizenRMPForm.lostTime;
    var psId = document.citizenRMPForm.psId;
    if (name.value == "")
    {
        window.alert("name required");
        name.focus();
        return false;
    }
    
    if (color.value == "")
    {
        window.alert("color required");
        color.focus();
        return false;
    }
    if (height.value == "")
    {
        window.alert("height required");
        height.focus();
        return false;
    }
    if (weight.value == "")
    {
        window.alert("weight required");
        weight.focus();
        return false;
    }
    if (lost.value == "")
    {
        window.alert("lost place required");
        lost.focus();
        return false;
    }
    if (lostTime.value == "")
    {
        window.alert("lostTime required");
        lostTime.focus();
        return false;
    }
    
    if (psId.value == "")
    {
        window.alert("station required");
        psId.focus();
        return false;
    }
   
    return true;
}

function validateCitizenLSForm(){
	var name = document.citizenLSForm.name;
    var reason = document.citizenLSForm.reason;
    var fromTime = document.citizenLSForm.fromTime;
    var toTime = document.citizenLSForm.toTime;
    var location = document.citizenLSForm.location; 
    
    
    if (name.value == "")
    {
        window.alert("name required");
        name.focus();
        return false;
    }
    if (reason.value == "")
    {
        window.alert("Reason required");
        reason.focus();
        return false;
    }
    if (fromTime.value == "")
    {
        window.alert("fromTime required");
        fromTime.focus();
        return false;
    }
    if (toTime.value == "")
    {
        window.alert("toTime required");
        toTime.focus();
        return false;
    }
    if (location.value == "")
    {
        window.alert("location required");
        location.focus();
        return false;
    }
    
   
    return true;
}

function validateCitizenMMForm(){
	var reason = document.citizenMMForm.reason;
    var place = document.citizenMMForm.place;
    var startTime = document.citizenMMForm.startTime;
    var endTime = document.citizenMMForm.endTime;
    var participants = document.citizenMMForm.participants; 
    
    
    
    
    if (reason.value == "")
    {
        window.alert("Reason required");
        reason.focus();
        return false;
    }
    if (place.value == "")
    {
        window.alert("place required");
        place.focus();
        return false;
    }
    if (startTime.value == "")
    {
        window.alert("startTime required");
        startTime.focus();
        return false;
    }
    if (endTime.value == "")
    {
        window.alert("endTime required");
        endTime.focus();
        return false;
    }
    if (participants.value == "")
    {
        window.alert("participants required");
        participants.focus();
        return false;
    }
    
   
    return true;
}

function validateCitizenForm()
{
	var emailId = document.citizenForm.emailId;
    var password = document.citizenForm.password;
    var repwd = document.citizenForm.repwd;
     
    var name = document.citizenForm.name;
    var contact = document.citizenForm.contact; 
    
    var address = document.citizenForm.address;
    
    
    if (emailId.value == "")
    {
        window.alert("Please enter your email");
        emailId.focus();
        return false;
    }else{
    	  apos=emailId.value.indexOf("@");
		  dotpos=emailId.value.lastIndexOf(".");
		  if (apos<1||dotpos-apos<2)
		    {window.alert("Email is not valid:exp-fname.lname@compnany.com");emailId.focus(); return false;}
    }
    
    if (password.value == "")
    {
        window.alert("Password Required");
        password.focus();
        return false;
    }
    
    if (repwd.value == "")
    {
        window.alert("Re-Password Required");
        repwd.focus();
        return false;
    }
    
    if(password.value != repwd.value){
    	window.alert("password and retype password doesn't match");
        password.focus();
        return false;
    }
    
    if (name.value == "")
    {
        window.alert("Name Required");
        name.focus();
        return false;
    }
    
    if (contact.value == "")
    {
        window.alert("contact required");
        contact.focus();
        return false;
    }else{
    	 c1="0123456789.";
       inputval=contact.value;
        for(i=0;i<=inputval.length;i++)
   		{
	         if(c1.indexOf(inputval.charAt(i))==-1){
	        	window.alert("Not a valid Mobile No.");
	        	contact.focus();
	        	return false;
	          }
	    }
    }
    
    
    if (address.value == "")
    {
        window.alert("address Required");
        address.focus();
        return false;
    }
    
      return true;
}


function validateCitizenLoginFrom(){
	var emailId = document.citizenLoginForm.emailId;
    var password = document.citizenLoginForm.password;
   
     
     if (emailId.value == "")
    {
        window.alert("Login id required.");
        emailId.focus();
        return false;
    }
     if (password.value == "")
    {
        window.alert("Password required.");
        password.focus();
        return false;
    }
       return true;
}

function validateAdminLoginFrom(){
	var loginId = document.adminLoginForm.loginId;
    var password = document.adminLoginForm.password;
   
     
     if (loginId.value == "")
    {
        window.alert("Login id required.");
        loginId.focus();
        return false;
    }
     if (password.value == "")
    {
        window.alert("Password required.");
        password.focus();
        return false;
    }
       return true;
}

function validateAdminPolStaFrom(){
	var psCity = document.adminPolStaForm.psCity;
    var psArea = document.adminPolStaForm.psArea;
    var psName = document.adminPolStaForm.psName;
   
     
     if (psCity.value == "")
    {
        window.alert("city field required.");
        psCity.focus();
        return false;
    }
     if (psArea.value == "")
     {
         window.alert("station area filed required.");
         psArea.focus();
         return false;
     }
     if (psName.value == "")
    {
        window.alert("station name filed required.");
        psName.focus();
        return false;
    }
       return true;
}

function checkOfficerEmailId(){
	var emailId=document.getElementById('emailId').value;
	if(emailId == ""){
		window.alert('emailId required');
		emailId.focus();
		return false;
	}
	var url = "/Ecop/ajaxUtilInfo?action=checkOfficerEmailId&emailId="+emailId;
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStateCheckLoginId;
	xmlhttp.send(null);
}


function checkEmailId(){
	var emailId=document.getElementById('emailId').value;
	if(emailId == ""){
		window.alert('emailId required');
		emailId.focus();
		return false;
	}
	var url = "/Ecop/ajaxUtilInfo?action=checkEmailId&emailId="+emailId;
	xmlhttp = GetXmlHttpObject();
if (xmlhttp === null) {
	alert('Your browser does not support XMLHTTP!');
	return;
}



xmlhttp.open("GET", url, true);

xmlhttp.onreadystatechange = changeStateCheckLoginId;
xmlhttp.send(null);
}

function changeStateCheckLoginId() {
   if(xmlhttp.readyState==4)
{
    if(xmlhttp.status==200)
        {
             document.getElementById('checkId').innerHTML=xmlhttp.responseText;;
        }
    else
    {
       alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
    }
}
}




function getStationArea(){
	var psCity=document.getElementById('psCity').value;
	if(psCity == ""){
		window.alert('city required');
		psCity.focus();
		return false;
	}
	var url = "/Ecop/ajaxUtilInfo?action=getStationArea&city="+psCity;
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStateStationArea;
	xmlhttp.send(null);
}

function changeStateStationArea() {
	   if(xmlhttp.readyState==4)
	   {
	    if(xmlhttp.status==200)
	        {
	             document.getElementById('sArea').innerHTML=xmlhttp.responseText;;
	        }
	    else
	    {
	       alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
	    }
	   }
}



function getOfficer(){
	var designation=document.getElementById('designation').value;
	if(designation == ""){
		window.alert('designaion required');
		designation.focus();
		return false;
	}
	var url = "/Ecop/ajaxUtilInfo?action=getOfficer&designation="+designation;
	
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStateOfficer;
	xmlhttp.send(null);
}

function changeStateOfficer() {
	   if(xmlhttp.readyState==4)
	   {
	    if(xmlhttp.status==200)
	        {
	             document.getElementById('sOff').innerHTML=xmlhttp.responseText;;
	        }
	    else
	    {
	       alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
	    }
	   }
}

function getRequestRes(){
	
	var date=document.getElementById('dd').value+"/"+document.getElementById('mm').value+"/"+document.getElementById('yy').value;
	var type=document.getElementById('type').value;
	var url = "/Ecop/ajaxUtilInfo?action=getRequestRes&date="+date+"&type="+type;
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStatePSD;
	xmlhttp.send(null);

}

function getPsDetails(){
	var psId=document.getElementById('psId').value;
	var url = "/Ecop/ajaxUtilInfo?action=getPsDetails&psId="+psId;
	
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStatePSD;
	xmlhttp.send(null);
}

function changeStatePSD() {
	   if(xmlhttp.readyState==4)
	   {
	    if(xmlhttp.status==200)
	        {
	             document.getElementById('stDetails').innerHTML=xmlhttp.responseText;;
	        }
	    else
	    {
	       alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
	    }
	   }
}



function getRequestRes1(){
	
	var type=document.getElementById('type').value;
	var url = "/Ecop/ajaxUtilInfo?action=getRequestRes1&type="+type;
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStatePSD;
	xmlhttp.send(null);

}


function getFIRForms(){
	var type=document.getElementById('type').value;
	var firNo=document.getElementById('firNo').value;
	var url = "/Ecop/ajaxUtilInfo?action=getFIRForms&type="+type+"&firNo="+firNo;
	xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.onreadystatechange = changeStatePSD;
	xmlhttp.send(null);

}

