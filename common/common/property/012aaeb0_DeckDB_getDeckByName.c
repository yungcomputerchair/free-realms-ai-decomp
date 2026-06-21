// addr: 0x012aaeb0
// name: DeckDB_getDeckByName
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012aaf3f) */

undefined4 __thiscall DeckDB_getDeckByName(void *param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up a deck by name in DeckDB's in-memory range; on a miss it asserts
                       mDBMStorage, asks the storage backend to load that name, and
                       constructs/caches a Deck from the loaded record. If the deck is already
                       cached it returns the existing object's virtual result at vtable slot 0x74.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166c658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)param_1 + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\DeckDB.cpp",0x86,
                 DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  }
  uVar1 = *(uint *)((int)param_1 + 0x18);
  if (uVar1 < *(uint *)((int)param_1 + 0x14)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)param_1 + 0x14);
  if (*(uint *)((int)param_1 + 0x18) < uVar3) {
    FUN_00d83c2d();
  }
  uVar3 = StdStringRange_find(uVar3,uVar1,param_2);
  uVar1 = *(uint *)((int)param_1 + 0x18);
  if (uVar1 < *(uint *)((int)param_1 + 0x14)) {
    FUN_00d83c2d();
  }
  if (uVar1 == uVar3) {
    PacketBuffer_init(auStack_20);
    uStack_4 = 0;
    cVar2 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x18))(param_2,auStack_20);
    if (cVar2 == '\0') {
      uStack_4 = 0xffffffff;
      RawBuffer_free(auStack_20);
      uVar5 = 0;
    }
    else {
      uVar5 = DeckDB_deserializeDeckComponent(auStack_20);
      uStack_4 = 0xffffffff;
      RawBuffer_free(auStack_20);
    }
  }
  else {
    piVar4 = DeckDB_getDeck(param_1,param_2);
    uVar5 = (**(code **)(*piVar4 + 0x74))();
  }
  ExceptionList = local_c;
  return uVar5;
}

