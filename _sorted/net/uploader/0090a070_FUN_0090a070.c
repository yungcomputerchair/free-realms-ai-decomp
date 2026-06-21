// addr: 0x0090a070
// name: FUN_0090a070
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0090a070(void * reader, void * table) */

void __cdecl FUN_0090a070(void *reader,void *table)

{
  int *piVar1;
  uint *puVar2;
  void *this_;
  void *extraout_EAX;
  uint uVar3;
  void *this;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a count and repeated ids from a bounded reader, allocates
                       0x28-byte nodes, and inserts them into a 10-bucket hash/list structure. No
                       class identity is available. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158b9ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008e7780(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
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
      this_ = Mem_Alloc(0x28);
      this = (void *)0x0;
      local_4 = 0;
      if (this_ != (void *)0x0) {
        PlayerNameEntry_ctor((int)this_);
        this = extraout_EAX;
      }
      local_4 = 0xffffffff;
      PacketRecord_deserializeTwoIntsAndString(this,(int)reader);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)table + 8);
      if (*(int *)((int)table + 8) == 0) {
        *(void **)((int)table + 4) = this;
      }
      else {
        *(void **)(*(int *)((int)table + 8) + 0x24) = this;
      }
      *(void **)((int)table + 8) = this;
      *(uint *)((int)this + 0x1c) = uVar3;
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)table + (uVar3 % 10) * 4 + 0x10);
      *(void **)((int)table + (uVar3 % 10) * 4 + 0x10) = this;
      *(int *)((int)table + 0xc) = *(int *)((int)table + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

