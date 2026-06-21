// addr: 0x014fdc40
// name: CommandObjectReveal_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectReveal.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectReveal_deserialize(void * this, void * stream) */

void __thiscall CommandObjectReveal_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes a Reveal command by reading the base CommandObject fields within
                       stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectReveal.cpp",0x84);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectReveal.cpp",0x87);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

