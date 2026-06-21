// addr: 0x01505fa0
// name: CommandObjectKill_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectKill.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectKill_deserialize(void * this, void * stream) */

void __thiscall CommandObjectKill_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int unaff_EDI;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  int local_4;
  
                    /* Deserializes CommandObjectKill, resolving optional Discard command/card
                       references and a created-card/player reference after reading base command
                       data. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectKill.cpp",0x44);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectKill.cpp",0x47);
  }
  bVar2 = Deserializer_readInteger(stream,&local_4);
  iVar4 = extraout_EDX;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectKill.cpp",0x4a);
    iVar4 = extraout_EDX_00;
  }
  if (local_4 != 0) {
    uVar8 = 0;
    pTVar7 = &CommandObject_Discard::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    iVar4 = FUN_00d8d382(pvVar3,uVar5,pTVar6,pTVar7,uVar8);
    *(int *)((int)this + 0x11c) = iVar4;
    if (iVar4 == 0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectKill.cpp",0x4e);
    }
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff0);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectKill.cpp",0x53);
  }
  if (unaff_EDI != 0) {
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),unaff_EDI);
    *(void **)((int)this + 0x120) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectKill.cpp",0x57);
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

