// addr: 0x012cd590
// name: FUN_012cd590
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_012cd590(int param_1,void *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_60 [52];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Checks whether a vector/set contains a case-insensitive two-string key. It
                       constructs a normalized key, searches the vector range, and returns whether
                       the returned iterator is not end. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f828;
  local_c = ExceptionList;
  uStack_28 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    uStack_2c = 0x12cd5c8;
    FUN_00d83c2d();
  }
  CaseInsensitiveStringPair_ctor(auStack_60,param_2,param_3);
  local_4 = 0;
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 < *(uint *)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar3) {
    FUN_00d83c2d();
  }
  local_4 = 0xffffffff;
  piVar4 = (int *)FUN_012cd240(local_14,param_1,uVar3,param_1,uVar2);
  if ((*piVar4 == 0) || (*piVar4 != param_1)) {
    uStack_2c = 0x12cd62c;
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return piVar4[1] != uVar1;
}

