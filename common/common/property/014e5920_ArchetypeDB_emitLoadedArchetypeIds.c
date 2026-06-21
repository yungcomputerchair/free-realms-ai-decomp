// addr: 0x014e5920
// name: ArchetypeDB_emitLoadedArchetypeIds
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ArchetypeDB_emitLoadedArchetypeIds(void * sender) */

uint __fastcall ArchetypeDB_emitLoadedArchetypeIds(void *sender)

{
  void *this;
  uint version;
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects loaded archetype ids for the current archetype range and emits a
                       small command/message with opcode 0xb7. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afd5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  version = Archetype_getField3c(this);
  pvVar1 = (void *)((int)sender + 8);
  ArchetypeDB_getInstance();
  ArchetypeDB_getLoadedArchetypeIds(pvVar1,version);
  DisplayActionManager_ensureSingleton();
  pvVar1 = Mem_Alloc(0x14);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xb7);
  uVar2 = FUN_012d3550(uVar2);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

