// addr: 0x00b2e620
// name: FUN_00b2e620
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void deserialize_counted_entry_list(void * reader, void * outList) */

void __cdecl deserialize_counted_entry_list(void *reader,void *outList)

{
  int *piVar1;
  undefined4 *this;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a counted linked list of 0x34-byte entries, initializing each
                       node and appending it to the output list. Exact list type is not visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d4b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b29ac0(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    local_18 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    local_18 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  local_14 = 0;
  if (0 < local_18) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      this = Mem_Alloc(0x34);
      if (this == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        *this = 0;
        this[1] = 0;
        this[2] = 0;
        this[3] = 0;
        this[4] = 0;
        this[5] = 0;
        this[6] = 0;
        this[7] = 0;
        this[8] = 0;
        *(undefined1 *)(this + 9) = 0;
        this[10] = 0;
        this[0xb] = 0;
        *(undefined1 *)(this + 0xc) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00b29cd0(this,reader);
      *this = *(undefined4 *)((int)outList + 4);
      if (*(int *)((int)outList + 4) == 0) {
        *(undefined4 **)outList = this;
      }
      else {
        *(undefined4 **)(*(int *)((int)outList + 4) + 4) = this;
      }
      *(int *)((int)outList + 8) = *(int *)((int)outList + 8) + 1;
      local_14 = local_14 + 1;
      *(undefined4 **)((int)outList + 4) = this;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

