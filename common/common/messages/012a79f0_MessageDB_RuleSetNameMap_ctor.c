// addr: 0x012a79f0
// name: MessageDB_RuleSetNameMap_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_RuleSetNameMap_ctor(void * map) */

void * __fastcall MessageDB_RuleSetNameMap_ctor(void *map)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an empty red-black tree with a sentinel flag at +0x1d, used for
                       an integer-keyed MessageDB auxiliary map. It mirrors the RuleSetNameMap tree
                       layout. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012a20d0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)((int)map + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)((int)map + 4) + 4) = *(int *)((int)map + 4);
  *(undefined4 *)*(undefined4 *)((int)map + 4) = *(undefined4 *)((int)map + 4);
  *(int *)(*(int *)((int)map + 4) + 8) = *(int *)((int)map + 4);
  *(undefined4 *)((int)map + 8) = 0;
  ExceptionList = local_c;
  return map;
}

