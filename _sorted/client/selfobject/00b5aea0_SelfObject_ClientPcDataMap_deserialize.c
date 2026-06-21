// addr: 0x00b5aea0
// name: SelfObject_ClientPcDataMap_deserialize
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SelfObject_ClientPcDataMap_deserialize(void * reader, void * map) */

void __cdecl SelfObject_ClientPcDataMap_deserialize(void *reader,void *map)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  void *this;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads a count of ClientPcData records, allocates each 0x130-byte entry,
                       deserializes it with SelfObject_ClientPcData_deserialize, and inserts it into
                       a 4-bucket map keyed by the stream id. Directly supports SelfObject client
                       data parsing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015db9eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b59210(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
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
        uVar4 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(uint **)((int)reader + 8) = *(uint **)((int)reader + 0xc);
      }
      else {
        uVar4 = **(uint **)((int)reader + 8);
        *(uint **)((int)reader + 8) = puVar2;
      }
      pvVar3 = Mem_Alloc(0x130);
      this = (void *)0x0;
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        this = (void *)FUN_008fdc70();
      }
      local_4 = 0xffffffff;
      SelfObject_ClientPcData_deserialize(this,reader);
      *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)map + 8);
      if (*(int *)((int)map + 8) == 0) {
        *(void **)((int)map + 4) = this;
      }
      else {
        *(void **)(*(int *)((int)map + 8) + 300) = this;
      }
      *(void **)((int)map + 8) = this;
      *(uint *)((int)this + 0x124) = uVar4;
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)map + (uVar4 & 3) * 4 + 0x10);
      *(void **)((int)map + (uVar4 & 3) * 4 + 0x10) = this;
      *(int *)((int)map + 0xc) = *(int *)((int)map + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

