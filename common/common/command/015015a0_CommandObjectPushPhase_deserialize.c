// addr: 0x015015a0
// name: CommandObjectPushPhase_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPushPhase.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPushPhase_deserialize(void * this, void * stream) */

void __thiscall CommandObjectPushPhase_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes PushPhase command data by reading the base CommandObject state
                       inside stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPushPhase.cpp",0x39);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPushPhase.cpp",0x3c);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

