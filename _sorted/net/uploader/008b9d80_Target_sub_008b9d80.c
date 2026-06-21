// addr: 0x008b9d80
// name: Target_sub_008b9d80
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Target_sub_008b9d80(int param_1,undefined **param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uint value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Identifies a Target sub_008b9d80 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015818cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)(param_1 + 0xec) != (undefined4 *)0x0) {
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0xec))();
    if (iVar1 == 0x15) goto LAB_008b9e23;
  }
  value_ = 0;
  if (*(uint *)(param_1 + 0xec) != 0) {
    value_ = *(uint *)(param_1 + 0xec);
  }
  pvVar2 = Mem_Alloc(0x1a0);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_00b035c0(*(undefined4 *)(param_1 + 200));
  }
  uStack_4 = 0xffffffff;
  *(void **)(param_1 + 0xec) = pvVar2;
  setField_78(pvVar2,value_);
  *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0x88) = 0;
LAB_008b9e23:
  piVar3 = (int *)FUN_00984960();
  if (piVar3 == (int *)0x0) {
    param_2 = Target::vftable;
    param_3 = 0;
    TargetBoneHolder_setCharacterBoneIdDefault(&param_2);
    uStack_4 = 2;
    (**(code **)(**(int **)(param_1 + 0xec) + 0xd4))();
  }
  else {
    pvVar2 = (void *)(**(code **)(*piVar3 + 0x1c))();
    param_2 = Target::vftable;
    param_3 = 0;
    TargetLocationHolder_setLocation(&param_2,pvVar2,piVar3 + 0x184);
    uStack_4 = 1;
    (**(code **)(**(int **)(param_1 + 0xec) + 0xd4))();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0101b370();
  ExceptionList = &stack0xffffffd4;
  return;
}

