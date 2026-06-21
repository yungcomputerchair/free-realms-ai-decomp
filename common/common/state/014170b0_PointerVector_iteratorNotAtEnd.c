// addr: 0x014170b0
// name: PointerVector_iteratorNotAtEnd
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __fastcall PointerVector_iteratorNotAtEnd(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Builds an iterator for a vector-like container and returns whether the
                       iterator position differs from the container end pointer. This is generic
                       container/iteration support used by state code. */
  piVar4 = (int *)FUN_01416ef0(local_8,&stack0x00000004);
  uVar1 = *(uint *)(param_1 + 0xc);
  iVar2 = *piVar4;
  uVar3 = piVar4[1];
  if (uVar1 < *(uint *)(param_1 + 8)) {
    FUN_00d83c2d();
  }
  if ((iVar2 == 0) || (iVar2 != param_1 + 4)) {
    FUN_00d83c2d();
  }
  return uVar3 != uVar1;
}

