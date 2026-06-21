// addr: 0x0129f620
// name: RuleSetDB_MapMember_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RuleSetDB_MapMember_ctor(int member) */

int __fastcall RuleSetDB_MapMember_ctor(int member)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty RuleSetDB map member using a header node whose nil flag
                       is at offset 0x1d. It initializes header self-links and zeroes the element
                       count. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166b288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0129a1f0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(member + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(member + 4) + 4) = *(int *)(member + 4);
  *(undefined4 *)*(undefined4 *)(member + 4) = *(undefined4 *)(member + 4);
  *(int *)(*(int *)(member + 4) + 8) = *(int *)(member + 4);
  *(undefined4 *)(member + 8) = 0;
  ExceptionList = local_c;
  return member;
}

