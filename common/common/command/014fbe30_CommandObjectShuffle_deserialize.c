// addr: 0x014fbe30
// name: CommandObjectShuffle_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectShuffle.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectShuffle_deserialize(void * this, void * stream) */

void __thiscall CommandObjectShuffle_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int unaff_EDI;
  int local_4;
  
                    /* Deserializes Shuffle command data, reading common fields, an integer at
                       this+0x11c, a second integer/count, and allocating an array when the count is
                       nonzero. Assertions cite CommandObjectShuffle.cpp. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectShuffle.cpp",0x54);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectShuffle.cpp",0x57);
  }
  bVar2 = Deserializer_readInteger(stream,&local_4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectShuffle.cpp",0x5a);
  }
  *(int *)((int)this + 0x11c) = local_4;
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff0);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectShuffle.cpp",0x5e);
  }
  if (unaff_EDI != 0) {
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),unaff_EDI);
    *(void **)((int)this + 0x120) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectShuffle.cpp",0x62);
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

