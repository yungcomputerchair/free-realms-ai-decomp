// addr: 0x01355ff0
// name: FUN_01355ff0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01355ff0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Map lookup helper with weak evidence: finds key 4 in an int map at +0x248 and
                       returns mapped value or zero. */
  StdRbTreeInt_find_alt((void *)(param_1 + 0x248),local_8,&stack0x00000004,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)(param_1 + 0x24c);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 0x248))) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar2 + 0x10);
  }
  return 0;
}

