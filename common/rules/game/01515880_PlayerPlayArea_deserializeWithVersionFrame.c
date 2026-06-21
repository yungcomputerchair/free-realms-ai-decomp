// addr: 0x01515880
// name: PlayerPlayArea_deserializeWithVersionFrame
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwplayerplayarea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PlayerPlayArea_deserializeWithVersionFrame(int *param_1,void *param_2)

{
  void *stream;
  char cVar1;
  char extraout_AL;
  
                    /* Wraps PlayerPlayArea_deserialize in serializer/deserializer begin/end calls
                       and asserts false on failures. Evidence: cwplayerplayarea.cpp assertions at
                       lines 0x5f/0x62 and callee PlayerPlayArea_deserialize. */
  stream = param_2;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwplayerplayarea.cpp",0x5f);
  }
  PlayerPlayArea_deserialize(param_1,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwplayerplayarea.cpp",0x62);
  }
  (**(code **)(*param_1 + 0x14))(stream);
  return;
}

