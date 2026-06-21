// addr: 0x0150cd40
// name: FUN_0150cd40
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0150cd40(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int *this;
  int iVar3;
  undefined4 uVar4;
  TypeDescriptor *pTVar5;
  int *piVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b5e7b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  uVar8 = 0;
  pTVar7 = &Card::RTTI_Type_Descriptor;
  pTVar5 = &PlayElement::RTTI_Type_Descriptor;
  uVar4 = 0;
  pvVar2 = find_play_element_in_maps(*(void **)(param_1 + 0x30),param_2);
  this = (int *)FUN_00d8d382(pvVar2,uVar4,pTVar5,pTVar7,uVar8,uVar1);
  if (this != (int *)0x0) {
    iVar3 = *this;
    uVar4 = (**(code **)(**(int **)(param_1 + 100) + 0x30))();
    (**(code **)(iVar3 + 0x140))(uVar4);
    uVar4 = 3;
    piVar6 = this;
    (**(code **)(*this + 0x30))(this,3);
    FUN_01342eb0(piVar6,uVar4);
    pvVar2 = Mem_Alloc(0x14);
    puStack_8 = (undefined1 *)0x0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_012f9eb0();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_012f8c70(0x7a);
    iVar3 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar2,iVar3);
    DisplayActionBuilder_addIntArg(pvVar2,*(int *)(param_1 + 0x124));
    (**(code **)(**(int **)(param_1 + 0x30) + 0x154))(pvVar2);
    PlayElement_detachFromParent(this);
    (**(code **)*this)(1);
  }
  ExceptionList = local_c;
  return 1;
}

