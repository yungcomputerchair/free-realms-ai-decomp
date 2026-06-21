// addr: 0x01507b90
// name: CommandObjectInfoBox_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectInfoBox.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectInfoBox_deserialize(void * this, void * stream) */

void __thiscall CommandObjectInfoBox_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes InfoBox command data, including base CommandObject state and an
                       extra member value at offset 0x47. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInfoBox.cpp",0xb6);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInfoBox.cpp",0xb9);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInfoBox.cpp",0xbc);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

