// addr: 0x013861d0
// name: PlayElementList_collectCommandObjects
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayElementList_collectCommandObjects(void * this, void * outVector) */

void * __fastcall PlayElementList_collectCommandObjects(void *this,void *outVector)

{
  uint uVar1;
  void *value;
  void *pvVar2;
  void *extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar3;
  undefined8 uVar4;
  void *in_stack_00000004;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an output vector and appends all elements that cast to
                       CommandObject. */
  puStack_8 = &LAB_01683249;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  ExceptionList = &local_c;
  *(undefined4 *)((int)in_stack_00000004 + 4) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 8) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0xc) = 0;
  local_4 = 0;
  uVar1 = *(uint *)((int)this + 0x34);
  if (uVar1 < *(uint *)((int)this + 0x30)) {
    FUN_00d83c2d();
    outVector = extraout_EDX;
  }
  uVar4 = CONCAT44(outVector,local_10);
  uVar3 = *(uint *)((int)this + 0x30);
  if (*(uint *)((int)this + 0x34) < uVar3) {
    FUN_00d83c2d();
    uVar4 = CONCAT44(extraout_EDX_00,local_10);
  }
  while( true ) {
    local_10 = (int)uVar4;
    if (this == (void *)0xffffffd4) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_01,local_10);
    }
    local_10 = (int)uVar4;
    if (uVar3 == uVar1) break;
    if (this == (void *)0xffffffd4) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_02,local_10);
    }
    local_10 = (int)uVar4;
    if (*(uint *)((int)this + 0x34) <= uVar3) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_03,local_10);
    }
    local_10 = (int)uVar4;
    uVar8 = 0;
    pTVar7 = &CommandObject::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar2 = find_play_element_in_maps(*(void **)((int)this + 4),(int)((ulonglong)uVar4 >> 0x20));
    uVar4 = FUN_00d8d382(pvVar2,uVar5,pTVar6,pTVar7,uVar8);
    local_10 = (int)uVar4;
    if (local_10 != 0) {
      CommandObjectVector_pushBack(in_stack_00000004,&local_10,value);
      uVar4 = CONCAT44(extraout_EDX_04,local_10);
    }
    local_10 = (int)uVar4;
    if (*(uint *)((int)this + 0x34) <= uVar3) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_05,local_10);
    }
    uVar3 = uVar3 + 4;
  }
  ExceptionList = local_c;
  return in_stack_00000004;
}

