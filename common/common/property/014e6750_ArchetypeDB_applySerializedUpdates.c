// addr: 0x014e6750
// name: ArchetypeDB_applySerializedUpdates
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x014e67a1) */
/* Setting prototype: bool ArchetypeDB_applySerializedUpdates(void * updateList) */

bool __fastcall ArchetypeDB_applySerializedUpdates(void *updateList)

{
  char cVar1;
  uint size;
  void *this;
  uint uVar2;
  void *pvVar3;
  void *this_00;
  void *this_01;
  uint uVar4;
  void *pvVar5;
  void *local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates serialized archetype update blobs, deserializes each into an
                       archetype id, removes the prior mapped archetype, and inserts the updated
                       archetype. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0058;
  local_c = ExceptionList;
  size = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  uVar4 = *(uint *)((int)updateList + 0xc);
  if (*(uint *)((int)updateList + 0x10) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar2 = *(uint *)((int)updateList + 0x10);
    if (uVar2 < *(uint *)((int)updateList + 0xc)) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar2) break;
    PacketBuffer_init(local_20);
    local_4 = 0;
    if (*(uint *)((int)updateList + 0x10) <= uVar4) {
      FUN_00d83c2d();
    }
    pvVar5 = *(void **)(uVar4 + 0x14);
    if (*(uint *)((int)updateList + 0x10) <= uVar4) {
      FUN_00d83c2d();
    }
    if (*(uint *)(uVar4 + 0x18) < 0x10) {
      pvVar3 = (void *)(uVar4 + 4);
    }
    else {
      pvVar3 = *(void **)(uVar4 + 4);
    }
    RawBuffer_assign(local_20,pvVar3,pvVar5,size);
    local_24 = (void *)0x0;
    cVar1 = FUN_013d1010(local_20,&local_24);
    if (cVar1 != '\0') {
      ArchetypeDB_getInstance();
      uVar2 = Archetype_getField3c(this);
      pvVar5 = local_24;
      pvVar3 = (void *)FUN_013795c0();
      ArchetypeDB_getInstance();
      ArchetypeDB_removeArchetypeEntry(this_00,pvVar3,uVar2);
      ArchetypeDB_getInstance();
      uVar2 = Archetype_getField3c(this_01);
      ArchetypeDB_getInstance();
      ArchetypeDB_insertArchetype(pvVar5,uVar2);
    }
    local_4 = 0xffffffff;
    RawBuffer_free(local_20);
    if (*(uint *)((int)updateList + 0x10) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 0x1c;
  }
  ExceptionList = local_c;
  return true;
}

