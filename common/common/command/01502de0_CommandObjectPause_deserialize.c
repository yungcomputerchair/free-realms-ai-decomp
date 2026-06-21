// addr: 0x01502de0
// name: CommandObjectPause_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPause.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPause_deserialize(void * this, void * stream) */

void __thiscall CommandObjectPause_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes Pause command data, reading base CommandObject fields and an
                       additional member value at offset 0x47. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPause.cpp",0x20);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPause.cpp",0x23);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPause.cpp",0x26);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

