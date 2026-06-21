// addr: 0x014fb0b0
// name: CommandObjectUnInstallActionMap_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectUnInstallActionMap.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectUnInstallActionMap_deserialize(void * this, void * stream)
    */

void __thiscall CommandObjectUnInstallActionMap_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  int unaff_EDI;
  undefined8 uVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  int local_4;
  
                    /* Deserializes UnInstallActionMap: reads base state, action-map ids, resolves
                       an optional Card reference, and optionally resolves an action object. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnInstallActionMap.cpp",0x40);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnInstallActionMap.cpp",0x43);
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff0);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnInstallActionMap.cpp",0x46);
  }
  bVar2 = Deserializer_readInteger(stream,&local_4);
  iVar4 = extraout_EDX;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnInstallActionMap.cpp",0x49);
    iVar4 = extraout_EDX_00;
  }
  if (local_4 != 0) {
    uVar9 = 0;
    pTVar8 = &Card::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    uVar5 = FUN_00d8d382(pvVar3,uVar6,pTVar7,pTVar8,uVar9);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    *(int *)((int)this + 0x120) = (int)uVar5;
    if ((int)uVar5 == 0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUnInstallActionMap.cpp",0x4d);
      iVar4 = extraout_EDX_01;
    }
    if (unaff_EDI != 0) {
      pvVar3 = Card_getActionByID(*(void **)((int)this + 0x120),iVar4);
      *(void **)((int)this + 0x11c) = pvVar3;
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

