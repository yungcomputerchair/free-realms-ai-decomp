// addr: 0x010718e0
// name: FUN_010718e0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_010718e0(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory for a curve/vector point array wrapper: allocates 0x24 bytes,
                       constructs via 007d8560, then finalizes with 01071780. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163f61b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = GameUtil_CurveVector4PointArray_init(*(undefined4 *)(param_1 + 0xc));
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_01071780(iVar2);
  }
  ExceptionList = local_c;
  return iVar2;
}

