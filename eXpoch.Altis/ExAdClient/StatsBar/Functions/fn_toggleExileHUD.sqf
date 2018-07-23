/*  
	fn_sbThread.sqf
	
	Copyright 2016 Jan Babor

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

*/
private["_display","_exileCtrl","_text"];

disableSerialization;

_display = uiNameSpace getVariable ["RscExileHUD",displayNull];	
_exileCtrl = _display displayCtrl 1300;

_exileCtrl ctrlShow ExAd_SB_EXILE_HUD_ACTIVE;

if(ExAd_SB_EXILE_HUD_ACTIVE)then{
	[] call ExileClient_gui_hud_toggleDPXHud;
};

true