// addr: 0x013d5660
// name: CollectionData_insertUniqueItemRecord
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x013d56aa) */

void __thiscall CollectionData_insertUniqueItemRecord(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* Inserts a 16-byte collection item record only if an equal record is not
                       already present. Evidence: callers in LobbyCommandSetLeagueCollection,
                       LobbyCommandSetDraft, and LobbyCommandAddLeagueCards pass item-record ranges,
                       and the helper searches [begin,end) with a comparator over fields +4/+8/+0xc
                       before calling the vector insert routine. */
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x18) < uVar2) {
    FUN_00d83c2d();
  }
  uVar2 = CollectionItem_findByIdsInRange(uVar2,uVar1,param_2);
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    FUN_00d83c2d();
  }
  if (uVar1 == uVar2) {
    FUN_012c3e50(param_2);
  }
  return;
}

