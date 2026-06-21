// addr: 0x0150efc0
// name: CommandObjectAddKeyword_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddKeyword.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAddKeyword_deserialize(void * this, void * stream) */

void __thiscall CommandObjectAddKeyword_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes AddKeyword command state, reading common command data and a
                       member object/string at offset 0x11c. Asserts are in
                       CommandObjectAddKeyword.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddKeyword.cpp",0x2d);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddKeyword.cpp",0x30);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddKeyword.cpp",0x33);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

