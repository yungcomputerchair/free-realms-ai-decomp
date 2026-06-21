// addr: 0x008e5450
// name: FUN_008e5450
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void deserialize_hash_list(void * reader, void * table) */

void __cdecl deserialize_hash_list(void *reader,void *table)

{
  int *piVar1;
  uint *puVar2;
  void *cursor;
  void *object;
  undefined4 *extraout_EAX;
  uint uVar3;
  undefined4 *this;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a counted list into a 100-bucket hash/list structure, allocating
                       one 0x20-byte node per entry. Exact container owner not visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01586d8b;
  local_c = ExceptionList;
  cursor = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  ExceptionList = &local_c;
  FUN_008cc3d0();
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
      puVar2 = *(uint **)((int)reader + 8) + 1;
      if (*(uint **)((int)reader + 0xc) < puVar2) {
        uVar3 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(uint **)((int)reader + 8) = *(uint **)((int)reader + 0xc);
      }
      else {
        uVar3 = **(uint **)((int)reader + 8);
        *(uint **)((int)reader + 8) = puVar2;
      }
      object = Mem_Alloc(0x20);
      this = (undefined4 *)0x0;
      local_4 = 0;
      if (object != (void *)0x0) {
        FUN_01028ab0(object);
        this = extraout_EAX;
      }
      local_4 = 0xffffffff;
      readFourDwordsFromCursor(this,reader,cursor);
      this[2] = *(undefined4 *)((int)table + 8);
      if (*(int *)((int)table + 8) == 0) {
        *(undefined4 **)((int)table + 4) = this;
      }
      else {
        *(undefined4 **)(*(int *)((int)table + 8) + 0xc) = this;
      }
      *(undefined4 **)((int)table + 8) = this;
      this[1] = uVar3;
      *this = *(undefined4 *)((int)table + (uVar3 % 100) * 4 + 0x10);
      *(undefined4 **)((int)table + (uVar3 % 100) * 4 + 0x10) = this;
      *(int *)((int)table + 0xc) = *(int *)((int)table + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

