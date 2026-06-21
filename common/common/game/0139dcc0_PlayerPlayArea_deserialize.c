// addr: 0x0139dcc0
// name: PlayerPlayArea_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayArea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerPlayArea_deserialize(void * this, void * stream) */

void __thiscall PlayerPlayArea_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  int local_4;
  
                    /* Deserializes a PlayerPlayArea and resolves serialized PlayElement handles
                       into its draw, discard, and hand PilePlayArea members. It asserts each
                       conversion succeeds and calls the base deserialize hooks. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x317);
  }
  PlayArea_removePlayElement(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x31a);
  }
  bVar2 = Deserializer_readInteger(stream,&local_4);
  iVar4 = extraout_EDX;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x31d);
    iVar4 = extraout_EDX_00;
  }
  if (local_4 != 0) {
    uVar8 = 0;
    pTVar7 = &PilePlayArea::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    iVar4 = FUN_00d8d382(pvVar3,uVar5,pTVar6,pTVar7,uVar8);
    *(int *)((int)this + 0x40) = iVar4;
    if (iVar4 == 0) {
      FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x321);
    }
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
  iVar4 = extraout_EDX_01;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x326);
    iVar4 = extraout_EDX_02;
  }
  if (unaff_EDI != 0) {
    uVar8 = 0;
    pTVar7 = &PilePlayArea::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    iVar4 = FUN_00d8d382(pvVar3,uVar5,pTVar6,pTVar7,uVar8);
    *(int *)((int)this + 0x44) = iVar4;
    if (iVar4 == 0) {
      FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x32a);
    }
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff0);
  iVar4 = extraout_EDX_03;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x32f);
    iVar4 = extraout_EDX_04;
  }
  if (unaff_ESI != 0) {
    uVar8 = 0;
    pTVar7 = &PilePlayArea::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),iVar4);
    iVar4 = FUN_00d8d382(pvVar3,uVar5,pTVar6,pTVar7,uVar8);
    *(int *)((int)this + 0x48) = iVar4;
    if (iVar4 == 0) {
      FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x333);
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

