// addr: 0x012d2190
// name: FUN_012d2190
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_012d2190(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Map lookup helper with weak class evidence: finds key 4 in an int map at
                       +0x90 and returns mapped value, otherwise falls back to field +0x8c. */
  StdRbTreeInt_find_alt((void *)(param_1 + 0x90),local_8,&stack0x00000004,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = *(int *)(param_1 + 0x94);
  iVar3 = extraout_EAX[1];
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 0x90))) {
    FUN_00d83c2d();
  }
  if (iVar3 != iVar2) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar3 + 0x10);
  }
  return *(undefined4 *)(param_1 + 0x8c);
}

