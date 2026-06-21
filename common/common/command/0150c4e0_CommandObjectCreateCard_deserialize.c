// addr: 0x0150c4e0
// name: CommandObjectCreateCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectCreateCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectCreateCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectCreateCard_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_8 [4];
  int iStack_4;
  
                    /* Deserializes CommandObjectCreateCard by reading base CommandObject data,
                       card/template ids, optional created-card reference, and a version-gated
                       boolean flag. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,local_8);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCreateCard.cpp",0xaf);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCreateCard.cpp",0xb2);
  }
  bVar2 = Deserializer_readInteger(stream,&iStack_4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCreateCard.cpp",0xb5);
  }
  if (iStack_4 != 0) {
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),iStack_4);
    *(void **)((int)this + 0x11c) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCreateCard.cpp",0xb9);
    }
  }
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x120));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCreateCard.cpp",0xbe);
  }
  if (3 < unaff_EDI) {
    bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff4);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectCreateCard.cpp",0xc2);
    }
    *(bool *)((int)this + 0x124) = unaff_ESI != 0;
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

