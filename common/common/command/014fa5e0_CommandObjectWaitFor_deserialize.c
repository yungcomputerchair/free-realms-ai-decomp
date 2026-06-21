// addr: 0x014fa5e0
// name: CommandObjectWaitFor_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectWaitFor.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectWaitFor_deserialize(void * this, void * stream) */

void __thiscall CommandObjectWaitFor_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes a WaitFor command by opening the stream, reading base
                       CommandObject fields, deserializing the value-map member, then closing the
                       stream. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWaitFor.cpp",0x3d);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWaitFor.cpp",0x40);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWaitFor.cpp",0x43);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

