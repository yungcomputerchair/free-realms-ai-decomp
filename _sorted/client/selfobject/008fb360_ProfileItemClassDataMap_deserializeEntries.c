// addr: 0x008fb360
// name: ProfileItemClassDataMap_deserializeEntries
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProfileItemClassDataMap_deserializeEntries(void * reader, void * map) */

void __cdecl ProfileItemClassDataMap_deserializeEntries(void *reader,void *map)

{
  int *piVar1;
  uint *puVar2;
  void *this;
  uint uVar3;
  void *this_00;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears the ProfileItemClassData map, reads a count, allocates/deserializes
                       each ProfileItemClassData entry, and inserts it into the 0x23-bucket map
                       keyed by stream id. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158924b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008c6f90(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
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
      this = Mem_Alloc(0x34);
      this_00 = (void *)0x0;
      local_4 = 0;
      if (this != (void *)0x0) {
        this_00 = ProfileItemClassData_ctor(this);
      }
      local_4 = 0xffffffff;
      ProfileItemClassData_deserialize(this_00,reader);
      *(undefined4 *)((int)this_00 + 0x2c) = *(undefined4 *)((int)map + 8);
      if (*(int *)((int)map + 8) == 0) {
        *(void **)((int)map + 4) = this_00;
      }
      else {
        *(void **)(*(int *)((int)map + 8) + 0x30) = this_00;
      }
      *(void **)((int)map + 8) = this_00;
      *(uint *)((int)this_00 + 0x28) = uVar3;
      *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)((int)map + (uVar3 % 0x23) * 4 + 0x10);
      *(void **)((int)map + (uVar3 % 0x23) * 4 + 0x10) = this_00;
      *(int *)((int)map + 0xc) = *(int *)((int)map + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

