// addr: 0x0150f4c0
// name: CommandObjectAddGameText_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddGameText.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAddGameText_deserialize(void * this, void * stream) */

void __thiscall CommandObjectAddGameText_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes AddGameText command common state and finalizes the stream.
                       Assertions cite CommandObjectAddGameText.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddGameText.cpp",0x32);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddGameText.cpp",0x35);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

