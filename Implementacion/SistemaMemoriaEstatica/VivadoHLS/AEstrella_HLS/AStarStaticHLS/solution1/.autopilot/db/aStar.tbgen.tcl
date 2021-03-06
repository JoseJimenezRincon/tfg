set C_TypeInfoList {{ 
"aStar" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"xStart": [[], {"scalar": "int"}] }, {"yStart": [[], {"scalar": "int"}] }, {"xFinish": [[], {"scalar": "int"}] }, {"yFinish": [[], {"scalar": "int"}] }, {"map": [[], {"array": [ {"array": [ {"scalar": "int"}, [36]]}, [64]]}] }],[],""]
}}
set moduleName aStar
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {aStar}
set C_modelType { int 32 }
set C_modelArgList { 
	{ xStart int 32 regular  }
	{ yStart int 32 regular  }
	{ xFinish int 32 regular  }
	{ yFinish int 32 regular  }
	{ map_r int 32 regular {array 2304 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "xStart", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "xStart","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "yStart", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "yStart","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "xFinish", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "xFinish","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "yFinish", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "yFinish","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "map_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "map","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 35,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ xStart sc_in sc_lv 32 signal 0 } 
	{ yStart sc_in sc_lv 32 signal 1 } 
	{ xFinish sc_in sc_lv 32 signal 2 } 
	{ yFinish sc_in sc_lv 32 signal 3 } 
	{ map_r_address0 sc_out sc_lv 12 signal 4 } 
	{ map_r_ce0 sc_out sc_logic 1 signal 4 } 
	{ map_r_we0 sc_out sc_logic 1 signal 4 } 
	{ map_r_d0 sc_out sc_lv 32 signal 4 } 
	{ map_r_q0 sc_in sc_lv 32 signal 4 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "xStart", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "xStart", "role": "default" }} , 
 	{ "name": "yStart", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "yStart", "role": "default" }} , 
 	{ "name": "xFinish", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "xFinish", "role": "default" }} , 
 	{ "name": "yFinish", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "yFinish", "role": "default" }} , 
 	{ "name": "map_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "map_r", "role": "address0" }} , 
 	{ "name": "map_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "map_r", "role": "ce0" }} , 
 	{ "name": "map_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "map_r", "role": "we0" }} , 
 	{ "name": "map_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "map_r", "role": "d0" }} , 
 	{ "name": "map_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "map_r", "role": "q0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}
set Spec2ImplPortList { 
	xStart { ap_none {  { xStart in_data 0 32 } } }
	yStart { ap_none {  { yStart in_data 0 32 } } }
	xFinish { ap_none {  { xFinish in_data 0 32 } } }
	yFinish { ap_none {  { yFinish in_data 0 32 } } }
	map_r { ap_memory {  { map_r_address0 mem_address 1 12 }  { map_r_ce0 mem_ce 1 1 }  { map_r_we0 mem_we 1 1 }  { map_r_d0 mem_din 1 32 }  { map_r_q0 mem_dout 0 32 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
