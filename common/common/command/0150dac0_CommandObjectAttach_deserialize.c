// addr: 0x0150dac0
// name: CommandObjectAttach_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAttach.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAttach_deserialize(void * this, void * stream) */

void __thiscall CommandObjectAttach_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes an Attach command, including base CommandObject state, with
                       asserts on failed stream operations. No Attach-specific fields are read here.
                        */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAttach.cpp",99);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAttach.cpp",0x66);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

