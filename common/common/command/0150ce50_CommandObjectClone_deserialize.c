// addr: 0x0150ce50
// name: CommandObjectClone_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectClone.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectClone_deserialize(void * this, void * stream) */

void __thiscall CommandObjectClone_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  
                    /* Deserializes Clone command state, reading common command fields and one
                       integer clone-related field at offset 0x11c. Assertions cite
                       CommandObjectClone.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectClone.cpp",0x61);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectClone.cpp",100);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectClone.cpp",0x67);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

