// addr: 0x013868d0
// name: EvaluationEnvironment_getOrCreateReturnValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getOrCreateReturnValue(void * this, int key_) */

void * EvaluationEnvironment_getOrCreateReturnValue(void *this,int key_)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Finds or creates a ValueData return entry for a key and returns the entry for
                       later type/value assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016832e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  local_4 = 0;
  uVar2 = FUN_013823a0(this,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = (int *)FUN_01385840(local_28,uVar2);
  if (*piVar3 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*piVar3 + 8) <= (uint)piVar3[1]) {
    FUN_00d83c2d();
  }
  iVar1 = piVar3[1];
  local_4 = local_4 & 0xffffff00;
  FUN_01300cd0();
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return (void *)(iVar1 + 4);
}

