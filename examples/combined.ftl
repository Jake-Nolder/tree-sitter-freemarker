<#import "custom.myob.common-library-2.ftl" as lib>
<#assign showReports = "false" >
<#if !user.anonymous>
  <#assign roles = lib.restadminV2("SELECT name FROM roles WHERE users.id = '"+user.id+"'") >
  <#assign allowedRoles = ["Administrator","MYOB Moderator","MYOB Product Manager","MYOB Staff","MYOB Staff Post"] >
  <#if roles??>
  	<#list roles.data.items as role>
		<#if allowedRoles?seq_contains(role.name)>
			<#assign showReports = "true" >
        </#if>
	</#list>
  </#if>
</#if>
<#if user.id == env.context.message.author.id || showReports = "true" >
	<@delegate />
</#if>

<#--Hello there this is a comment-->
