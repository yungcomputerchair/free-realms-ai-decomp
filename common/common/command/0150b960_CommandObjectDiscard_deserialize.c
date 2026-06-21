// addr: 0x0150b960
// name: CommandObjectDiscard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDiscard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectDiscard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectDiscard_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *pvVar4;
  int unaff_EDI;
  int iStack_14;
  int aiStack_10 [3];
  int local_4;
  
                    /* Deserializes a CommandObjectDiscard: reads command fields, resolves an
                       optional object reference, reads a value/blob field, and sets boolean flags.
                       Reads guarded by CommandObjectDiscard.cpp asserts. */
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x16a);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x16d);
  }
  bVar3 = Deserializer_readInteger(stream,&local_4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x170);
  }
  *(int *)((int)this + 0x11c) = local_4;
  bVar3 = Deserializer_readInteger(stream,(int *)&stack0xffffffe4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x174);
  }
  if (unaff_EDI != 0) {
    pvVar4 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),unaff_EDI);
    *(void **)((int)this + 0x120) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x178);
    }
  }
  bVar3 = Deserializer_readIntegerVector(&stack0xffffffe8,(void *)((int)this + 0x124));
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x180);
  }
  bVar3 = Deserializer_readInteger(stream,&iStack_14);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x183);
  }
  *(bool *)((int)this + 0x134) = iStack_14 != 0;
  bVar3 = Deserializer_readInteger(stream,aiStack_10);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x187);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(bool *)((int)this + 0x135) = aiStack_10[0] != 0;
  (*pcVar1)(stream);
  return;
}

