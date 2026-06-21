// addr: 0x0150d740
// name: CommandObjectCancelCommand_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectCancelCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectCancelCommand_deserialize(void * this, void * stream) */

void __thiscall CommandObjectCancelCommand_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes a CancelCommand command by reading stream framing, invoking
                       CommandObject_deserialize, and finalizing. Assertions identify
                       CommandObjectCancelCommand.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCancelCommand.cpp",0x32);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCancelCommand.cpp",0x35);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

