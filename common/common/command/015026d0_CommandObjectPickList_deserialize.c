// addr: 0x015026d0
// name: CommandObjectPickList_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPickList.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPickList_deserialize(void * this, void * stream) */

void __thiscall CommandObjectPickList_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes PickList command data by reading base CommandObject fields
                       within stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPickList.cpp",100);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPickList.cpp",0x67);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

