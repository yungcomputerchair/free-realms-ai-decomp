// addr: 0x00aa0380
// name: FUN_00aa0380
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00aa0380(void * reader, void * list) */

void __cdecl FUN_00aa0380(void *reader,void *list)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a count from a bounded reader, allocates/constructs 0x3c-byte
                       entries, reads each entry, and appends them to a doubly linked list. Exact
                       entry type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c123b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a9f4d0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar2 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar2 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  local_14 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      this = Mem_Alloc(0x3c);
      puVar3 = (undefined4 *)0x0;
      local_4 = 0;
      if (this != (void *)0x0) {
        puVar3 = FUN_00a9de30(this);
      }
      local_4 = 0xffffffff;
      FUN_00a9d960(reader);
      *puVar3 = *(undefined4 *)((int)list + 4);
      if (*(int *)((int)list + 4) == 0) {
        *(undefined4 **)list = puVar3;
      }
      else {
        *(undefined4 **)(*(int *)((int)list + 4) + 4) = puVar3;
      }
      *(int *)((int)list + 8) = *(int *)((int)list + 8) + 1;
      local_14 = local_14 + 1;
      *(undefined4 **)((int)list + 4) = puVar3;
    } while (local_14 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

