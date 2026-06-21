// addr: 0x014fff10
// name: CommandObjectRemoveKeyword_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectRemoveKeyword.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectRemoveKeyword_deserialize(void * this, void * stream) */

void __thiscall CommandObjectRemoveKeyword_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes RemoveKeyword command data, reading base CommandObject fields
                       and an additional member value. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveKeyword.cpp",0x42);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveKeyword.cpp",0x45);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveKeyword.cpp",0x48);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

