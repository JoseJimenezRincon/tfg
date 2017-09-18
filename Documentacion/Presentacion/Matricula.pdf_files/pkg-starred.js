define("modules/clean/react/home/api",["require","exports","tslib","modules/clean/ajax","modules/clean/api_v2/client"],function(e,t,r,a,i){"use strict";Object.defineProperty(t,"__esModule",{value:!0});var o=Promise.resolve({});t.makeRequest=function(e,t){void 0===t&&(t={});var i,n=function(i,o){(t.isBackground?a.SilentBackgroundRequest:a.WebRequest)(r.__assign({dataType:"json",success:i,error:function(e,t,r){return o(Error(r))}},e))};return t.useQueue?(i=new Promise(function(e,t){o.finally(function(){n(e,t)})}),o=i):i=new Promise(function(e,t){n(e,t)}),i},t.logHomeActivity=function(e){var r=e.entryType,a=e.eventName,i=e.extra,o=e.role;return Object.keys(i).forEach(function(e){return i[e]=String(i[e])}),t.makeRequest({url:"/home_feed/log_activity",type:"POST",data:{entry_type:r,event_name:a,extra:JSON.stringify(i),role:o}},{isBackground:!0})},t.setSectionVisibility=function(e,t,r){return(new i.ApiV2Client).rpc(e,"home/set_section_visibility",{section:t,visible:r})},t.createPaperDoc=function(e){return(new i.ApiV2Client).upload(e,"paper/docs/create",{import_format:"plain_text"},"")}}),define("modules/clean/react/home/starred/constants",["require","exports"],function(e,t){"use strict";Object.defineProperty(t,"__esModule",{value:!0}),t.StarredResourceActionTypes={LOADING_INITIAL:"HOME_STARRED_LOADING_INITIAL",LOADING_ALL:"HOME_STARRED_LOADING_ALL",LOAD_SUCCESS:"HOME_STARRED_LOAD_SUCCESS",LOAD_FAILURE:"HOME_STARRED_LOAD_FAILURE",HIDE_EMPTY_SECTION:"HOME_STARRED_HIDE_EMPTY_SECTION"},t.NOT_PAPER_USER_ERROR="not_paper_user",t.NUM_ACTIVITIES_PER_ITEM=5,t.StarredLoggingTypes={CLICK_STAR:"click_star",CLICK_UNSTAR:"click_unstar"}}),define("modules/clean/react/starred/actions",["require","exports","modules/clean/flux/dispatcher","modules/clean/react/starred/constants","modules/clean/react/starred/api","modules/clean/react/starred/model"],function(e,t,r,a,i,o){"use strict";Object.defineProperty(t,"__esModule",{value:!0});var n=(function(){function e(){}return e.fetchStatuses=function(e,t,n){return void 0===n&&(n=!1),n||r.dispatch({type:a.StarredActionTypes.LOADING,idTypePairs:t}),i.fetchStatuses(e,t).then(function(e){r.dispatch({type:a.StarredActionTypes.SET_STATUS,starredStatuses:o.statusResultsToStarredStatuses(e)})}).catch(function(e){return r.dispatch({type:a.StarredActionTypes.LOAD_FAILURE,idTypePairs:t}),Promise.reject(e)})},e.update=function(e,t,o,n,s){var d={id:t,type:o};r.dispatch({type:a.StarredActionTypes.LOADING,idTypePairs:[d]});var c,u;if(o===a.IdTypes.EXTERNAL_RESOURCE_ID){if(null===s||void 0===s)throw new TypeError("Name of external resource cannot be null/undefined");u=i.updateExternalResource(t,s,n)}else u=i.update(e,t,o,n);return u.then(function(){return c=n}).catch(function(e){throw c=!n,e}).finally(function(){r.dispatch({type:a.StarredActionTypes.SET_STATUS,starredStatuses:[{idTypePair:{id:t,type:o},starred:c}]})}),u},e})();t.StarredActions=n}),define("modules/clean/react/starred/api",["require","exports","modules/clean/ajax"],function(e,t,r){"use strict";Object.defineProperty(t,"__esModule",{value:!0});var a=function(e,t){var a=function(a,i){r.WebRequest({url:e,type:"POST",dataType:"json",data:t,success:a,error:function(e,t,r){return i(Error(r))}})};return new Promise(function(e,t){a(e,t)})};t.fetchStatuses=function(e,t){return a("/starred/get_status",{role:e,resources_json:JSON.stringify(t)})},t.update=function(e,t,r,i){return a("/starred/update",{role:e,resource_id:t,id_type:r,is_starred:i})},t.updateExternalResource=function(e,t,r){return a("/starred/update_external_resource",{url:e,name:t,is_starred:r})}}),define("modules/clean/react/starred/constants",["require","exports"],function(e,t){"use strict";Object.defineProperty(t,"__esModule",{value:!0}),t.StarredLoadingState={LOADING:"LOADING",LOAD_SUCCESS:"LOAD_SUCCESS",LOAD_FAILED:"LOAD_FAILED"},t.StarredActionTypes={LOADING:"STARRED_LOADING",SET_STATUS:"STARRED_SET_STATUS",LOAD_FAILURE:"STARRED_LOAD_FAILURE"},t.IdTypes={ENCODED_FILE_OBJ_ID:"ENCODED_FILE_OBJ_ID",EXTERNAL_RESOURCE_ID:"EXTERNAL_RESOURCE_ID",PAPER_ID_PATH:"PAPER_ID_PATH"}}),define("modules/clean/react/starred/id_type_pair",["require","exports"],function(e,t){"use strict";function r(e){return e.type+":"+e.id}function a(e){return e.slice(e.indexOf(":")+1)}Object.defineProperty(t,"__esModule",{value:!0}),t.idTypePairToString=r,t.idFromIdTypePairString=a}),define("modules/clean/react/starred/model",["require","exports"],function(e,t){"use strict";function r(e){return e.map(function(e){var t=e.id,r=e.type,a=e.is_starred,i=e.canonical_id,o=e.canonical_id_type,n={idTypePair:{id:t,type:r},starred:a};return i&&o&&(n.canonicalIdTypePair={id:i,type:o}),n})}Object.defineProperty(t,"__esModule",{value:!0}),t.statusResultsToStarredStatuses=r}),define("modules/clean/react/starred/star",["require","exports","tslib","external/classnames","external/react","modules/clean/react/starred/starred_activity_logger","modules/clean/react/sprite","modules/clean/react/css","modules/clean/react/starred/actions","modules/clean/react/starred/store","modules/clean/react/title_bubble","modules/core/i18n","modules/core/notify"],function(e,t,r,a,i,o,n,s,d,c,u,p,l){"use strict";Object.defineProperty(t,"__esModule",{value:!0});var S=(function(e){function t(t){var r=e.call(this,t)||this;return r.onStoreUpdate=function(){var e=r.getStateFromStore();r.setState(e)},r.onClick=function(e){if(e.stopPropagation(),e.preventDefault(),!r.state.isLoading){var t=!r.state.isStarred;t?o.starredActivityLogger.logClickStar(r.props.id,r.props.idType,r.props.role):o.starredActivityLogger.logClickUnstar(r.props.id,r.props.idType,r.props.role),r.props.onStarClick&&r.props.onStarClick(t),d.StarredActions.update(r.props.role,r.props.id,r.props.idType,t,r.props.itemName).catch(function(e){var a;a=r.props.itemName?t?p._("There was a problem starring %(item_name)s").format({item_name:r.props.itemName}):p._("There was a problem unstarring %(item_name)s").format({item_name:r.props.itemName}):t?p._("There was a problem starring your selection"):p._("There was a problem unstarring your selection"),l.error(a)})}},r.state=r.getStateFromStore(),r.removeStoreListener=c.StarredStore.addListener(r.onStoreUpdate),r}return r.__extends(t,e),t.prototype.componentWillUnmount=function(){this.removeStoreListener&&this.removeStoreListener()},t.prototype.getStateFromStore=function(){var e={id:this.props.id,type:this.props.idType};return{isLoading:c.StarredStore.getIsLoading(e),isStarred:c.StarredStore.getIsStarred(e)}},t.prototype.getTooltipContent=function(){return this.state.isStarred?p._("Remove from Starred"):p._("Add to Starred")},t.prototype.render=function(){if(void 0===this.state.isStarred)return null;var e=this.state.isStarred||this.state.isLoading?"s_star":"s_unstar",t={star__toggle:!0,"star__toggle--starred":this.state.isStarred,"star__toggle--unstarred":!this.state.isStarred,"star__toggle--loading":this.state.isLoading,"u-pad-xs":!0};return i.createElement(u,{content:this.getTooltipContent(),position:this.props.tooltipPosition},i.createElement("button",{className:a(t),role:"button","aria-pressed":this.state.isStarred,"aria-label":"Star",onClick:this.onClick,onDoubleClick:this.onClick},i.createElement(n,{group:"web",name:e,alt:""})))},t})(i.PureComponent);S.displayName="Star",S.defaultProps={tooltipPosition:u.POSITIONS.TOP},t.Star=s(S,["/static/css/starred/star-vfllu-1vE.css"])}),define("modules/clean/react/starred/starred_activity_logger",["require","exports","modules/clean/react/home/api","modules/clean/react/home/starred/constants"],function(e,t,r,a){"use strict";Object.defineProperty(t,"__esModule",{value:!0});var i=(function(){function e(){}return e.prototype.logClickStar=function(e,t,i){return r.logHomeActivity({eventName:a.StarredLoggingTypes.CLICK_STAR,role:i,extra:{resource_id:e,id_type:t}})},e.prototype.logClickUnstar=function(e,t,i){return r.logHomeActivity({eventName:a.StarredLoggingTypes.CLICK_UNSTAR,role:i,extra:{resource_id:e,id_type:t}})},e})();t.StarredActivityLogger=i,t.starredActivityLogger=new i}),define("modules/clean/react/starred/store",["require","exports","tslib","external/underscore","modules/clean/flux/dispatcher","modules/clean/flux/flux_store","modules/clean/react/starred/constants","modules/clean/react/home/starred/constants","modules/clean/react/starred/id_type_pair"],function(e,t,r,a,i,o,n,s,d){"use strict";Object.defineProperty(t,"__esModule",{value:!0});var c=(function(e){function t(){var t=e.call(this,i)||this;return t.idsToLoadingState={},t.idsToStarred={},t}return r.__extends(t,e),t.prototype.getLoadingStates=function(){return this.idsToLoadingState},t.prototype.hasIdTypePair=function(e){return this.idsToLoadingState.hasOwnProperty(d.idTypePairToString(e))},t.prototype.getLoadingState=function(e){return this.idsToLoadingState[d.idTypePairToString(e)]},t.prototype.getIsStarred=function(e){return this.idsToStarred[d.idTypePairToString(e)]},t.prototype.getAllStarredPairStrings=function(){return a.keys(a.pick(this.idsToStarred,function(e){return e}))},t.prototype.getIsLoading=function(e){return this.getLoadingState(e)===n.StarredLoadingState.LOADING},t.prototype.onLoading=function(e){var t={};e.forEach(function(e){return t[d.idTypePairToString(e)]=n.StarredLoadingState.LOADING}),this.idsToLoadingState=r.__assign({},this.idsToLoadingState,t)},t.prototype.onSetStatus=function(e){void 0===e&&(e=[]);var t={},a={};e.forEach(function(e){var r=d.idTypePairToString(e.idTypePair);t[r]=n.StarredLoadingState.LOAD_SUCCESS,a[r]=e.starred}),this.idsToLoadingState=r.__assign({},this.idsToLoadingState,t),this.idsToStarred=r.__assign({},this.idsToStarred,a)},t.prototype.onLoadFailure=function(e){var t=this,a={};e.forEach(function(e){var r=d.idTypePairToString(e),i=t.idsToLoadingState[r];void 0!==i&&i!==n.StarredLoadingState.LOADING||(a[r]=n.StarredLoadingState.LOAD_FAILED)}),this.idsToLoadingState=r.__assign({},this.idsToLoadingState,a)},t.prototype.__onDispatch=function(e){var t=e.action;switch(t.type){case n.StarredActionTypes.LOADING:this.onLoading(t.idTypePairs);break;case n.StarredActionTypes.SET_STATUS:case s.StarredResourceActionTypes.LOAD_SUCCESS:this.onSetStatus(t.starredStatuses);break;case n.StarredActionTypes.LOAD_FAILURE:this.onLoadFailure(t.idTypePairs);break;default:return}this.__emitChange()},t})(o);t._StarredStoreClass=c,t.StarredStore=new c});
//# sourceMappingURL=pkg-starred.min.js-vflAevJd9.map