// addr: 0x0150de70
// name: CommandObjectAlternateMultiAction_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAlternateMultiAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAlternateMultiAction_deserialize(void * this, void * stream)
    */

void __thiscall CommandObjectAlternateMultiAction_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes an AlternateMultiAction command through the common command
                       deserialize sequence. Assertions cite CommandObjectAlternateMultiAction.cpp.
                        */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAlternateMultiAction.cpp",0x4f);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAlternateMultiAction.cpp",0x52);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

