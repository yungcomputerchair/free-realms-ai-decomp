// addr: 0x0103df50
// name: FUN_0103df50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0103df50(void * owner) */

void __fastcall FUN_0103df50(void *owner)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a 16-byte auxiliary structure at owner+0x28 and initializes
                       two default fields plus two zero payload fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163902b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)owner + 0x28) == 0) {
    puVar1 = Mem_Alloc(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = DAT_01cb67b8;
      puVar1[1] = DAT_01cb67bc;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    *(undefined4 **)((int)owner + 0x28) = puVar1;
  }
  ExceptionList = local_c;
  return;
}

