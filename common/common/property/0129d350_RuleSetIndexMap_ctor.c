// addr: 0x0129d350
// name: RuleSetIndexMap_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RuleSetIndexMap_ctor(int map) */

int __fastcall RuleSetIndexMap_ctor(int map)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty RB-tree map used for RuleSetDB rule indices. It allocates
                       the header/sentinel node, marks it as nil at offset 0x15, points all header
                       links to itself, and zeroes the size. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166ac28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0129a610(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(map + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(map + 4) + 4) = *(int *)(map + 4);
  *(undefined4 *)*(undefined4 *)(map + 4) = *(undefined4 *)(map + 4);
  *(int *)(*(int *)(map + 4) + 8) = *(int *)(map + 4);
  *(undefined4 *)(map + 8) = 0;
  ExceptionList = local_c;
  return map;
}

