// addr: 0x0129d860
// name: RuleSetNameMap_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RuleSetNameMap_ctor(int map) */

int __fastcall RuleSetNameMap_ctor(int map)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty RB-tree map with a header/sentinel node marked at offset
                       0x1d. This is the constructor counterpart to RuleSetNameMap_clear. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166ae38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0129a490(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(map + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(map + 4) + 4) = *(int *)(map + 4);
  *(undefined4 *)*(undefined4 *)(map + 4) = *(undefined4 *)(map + 4);
  *(int *)(*(int *)(map + 4) + 8) = *(int *)(map + 4);
  *(undefined4 *)(map + 8) = 0;
  ExceptionList = local_c;
  return map;
}

