// addr: 0x014fba10
// name: CommandObjectSuppressGameText_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectSuppressGameText.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectSuppressGameText_deserialize(void * this, void * stream) */

void __thiscall CommandObjectSuppressGameText_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes SuppressGameText command data by opening the stream, reading
                       base CommandObject state, and closing the stream. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSuppressGameText.cpp",0x33);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectSuppressGameText.cpp",0x36);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

