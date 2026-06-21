// addr: 0x01506aa0
// name: CommandObjectInstallActionMap_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectInstallActionMap.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectInstallActionMap_deserialize(void * this, void * stream) */

void __thiscall CommandObjectInstallActionMap_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 uVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  undefined1 *puStack_1c;
  int iStack_8;
  undefined1 local_4 [4];
  
                    /* Deserializes a CommandObjectInstallActionMap: reads action-map parameters and
                       resolves optional card/action-map references before finalizing the stream
                       read. Asserts in CommandObjectInstallActionMap.cpp. */
  puStack_1c = local_4;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x67);
  }
  CommandObject_deserialize(this,stream);
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x6c);
  }
  bVar2 = Deserializer_readInteger(stream,&iStack_8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x6f);
  }
  *(int *)((int)this + 0x128) = iStack_8;
  bVar2 = Deserializer_readInteger(stream,(int *)&puStack_1c);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x73);
  }
  *(undefined1 **)((int)this + 300) = puStack_1c;
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x77);
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffe8);
  iVar4 = extraout_EDX;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x7a);
    iVar4 = extraout_EDX_00;
  }
  if (unaff_EDI != 0) {
    uVar9 = 0;
    pTVar8 = &Card::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    uVar5 = FUN_00d8d382(pvVar3,uVar6,pTVar7,pTVar8,uVar9);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    *(int *)((int)this + 0x134) = (int)uVar5;
    if ((int)uVar5 == 0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x7e);
      iVar4 = extraout_EDX_01;
    }
    if (unaff_ESI != 0) {
      pvVar3 = Card_getActionByID(*(void **)((int)this + 0x134),iVar4);
      *(void **)((int)this + 0x130) = pvVar3;
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

