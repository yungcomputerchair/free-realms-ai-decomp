// addr: 0x013a0e10
// name: SynchronizationService_processCollectionDataChildren
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_processCollectionDataChildren(int object_) */

void __fastcall SynchronizationService_processCollectionDataChildren(int object_)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  undefined4 *local_4;
  
                    /* Iterates collection data child nodes at object+0x5c and, for each node with a
                       non-null payload, calls two synchronization/cleanup helpers. */
  puVar1 = *(undefined4 **)(object_ + 0x5c);
  local_4 = (undefined4 *)*puVar1;
  local_8 = object_ + 0x58;
  while( true ) {
    puVar3 = local_4;
    iVar2 = local_8;
    if ((local_8 == 0) || (local_8 != object_ + 0x58)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar3[4] != 0) {
      FUN_013d4c90();
      FUN_013d4c50();
    }
    CollectionDataChildIterator_increment(&local_8);
  }
  return;
}

