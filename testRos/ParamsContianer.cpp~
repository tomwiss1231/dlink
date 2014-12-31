/*
 * ParamsContianer.cpp
 *
 *  Created on: Dec 31, 2014
 *      Author: tom1231
 */
#include "ParamsContainer.h"


ParamsContianer::ParamsContianer(ros::NodeHandle nh, String nameSpace) {
	_nh = nh;
	if(nameSpace.length() > 0)
		_nameSpace = nameSpace;
	else
		_nameSpace = "";
}
bool ParamsContianer::nameSpaceIsEmpty() {
	return _nameSpace.length() == 0;
}
bool ParamsContianer::getInitController() {
	int isInit[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "init_controller").c_str(),isInit,1);
	else
		_nh.getParam("init_controller",isInit,1);
	return isInit[0] == 1;
}
float ParamsContianer::getWheelDiameter() {
	float res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "wheel_diameter").c_str(),res);
	else
		_nh.getParam("wheel_diameter",res);
	return res[0];
}
float ParamsContianer::getWheelBaseLength() {
	float res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "wheel_base_length").c_str(),res);
	else
		_nh.getParam("wheel_base_length",res);
	return res[0];
}
int ParamsContianer::getEncoderCpr() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "encoder_cpr").c_str(),res);
	else
		_nh.getParam("encoder_cpr",res);
	return res[0];
}
void ParamsContianer::getPID_Constants(float val[]) {
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "PID_constants").c_str(),val,3);
	else
		_nh.getParam("PID_constants",val,3);
}
int ParamsContianer::getControllerMode() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "controller_mode").c_str(),res);
	else
		_nh.getParam("controller_mode",res);
	return res[0];
}
int ParamsContianer::getControllerHz() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "control_hz").c_str(),res);
	else
		_nh.getParam("control_hz",res);
	return res[0];
}
int ParamsContianer::getMaxCommand() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "max_command").c_str(),res);
	else
		_nh.getParam("max_command",res);
	return res[0];
}
int ParamsContianer::getEncodersReadHz() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "encoders_read_hz").c_str(),res);
	else
		_nh.getParam("encoders_read_hz",res);
	return res[0];
}
float ParamsContianer::getAlpha() {
	float res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "alpha").c_str(),res);
	else
		_nh.getParam("alpha",res);
	return res[0];
}
float ParamsContianer::getSlipFactor() {
	float res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "slip_factor").c_str(),res);
	else
		_nh.getParam("slip_factor",res);
	return res[0];
}
int ParamsContianer::getEncodersPubHz() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "encoders_pub_hz").c_str(),res);
	else
		_nh.getParam("encoders_pub_hz",res);
	return res[0];
}
int ParamsContianer::getOdomPubHz() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "odom_pub_hz").c_str(),res);
	else
		_nh.getParam("odom_pub_hz",res);
	return res[0];
}
bool ParamsContianer::ImuIsInit() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "init_imu").c_str(),res);
	else
		_nh.getParam("init_imu",res);
	return res[0] == 1;
}
int ParamsContianer::getMpuRate() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "mpuRate").c_str(),res);
	else
		_nh.getParam("mpuRate",res);
	return res[0];
}
int ParamsContianer::getMagMix() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "magMix").c_str(),res);
	else
		_nh.getParam("magMix",res);
	return res[0];
}
int ParamsContianer::getMagRate() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "magRate").c_str(), res);
	else
		_nh.getParam("magRate",res);
	return res[0];
}
int ParamsContianer::getIMU_Lpf() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "IMU_lpf").c_str(),res);
	else
		_nh.getParam("IMU_lpf",res);
	return res[0];
}
bool ParamsContianer::rangersIsInit() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "init_rangers").c_str(),res);
	else
		_nh.getParam("init_rangers",res);
	return res[0] == 1;
}
int ParamsContianer::getRangersHz() {
	int res[1];
	if(!nameSpaceIsEmpty())
		_nh.getParam((_nameSpace + "/" + "rangers_hz").c_str(),res);
	else
		_nh.getParam("rangers_hz",res);
	return res[0];
}

