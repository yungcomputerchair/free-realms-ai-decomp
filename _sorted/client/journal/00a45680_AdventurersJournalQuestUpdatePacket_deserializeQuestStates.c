// addr: 0x00a45680
// name: AdventurersJournalQuestUpdatePacket_deserializeQuestStates
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalQuestUpdatePacket_deserializeQuestStates(void * reader,
   void * questStateMap) */

void __cdecl
AdventurersJournalQuestUpdatePacket_deserializeQuestStates(void *reader,void *questStateMap)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_4;
  
                    /* Clears the quest-state map, reads an entry count, then reads each integer key
                       and integer value into the map. Reader underflow aborts the loop through the
                       shared error flag. */
  iVar4 = *(int *)((int)questStateMap + 8);
  while (iVar4 != 0) {
    FUN_007977c0(iVar4);
    iVar4 = *(int *)((int)questStateMap + 8);
  }
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar4 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar4 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        return;
      }
      puVar2 = *(undefined4 **)((int)reader + 8) + 1;
      if (*(undefined4 **)((int)reader + 0xc) < puVar2) {
        uStack_4 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(undefined4 **)((int)reader + 8) = *(undefined4 **)((int)reader + 0xc);
      }
      else {
        uStack_4 = **(undefined4 **)((int)reader + 8);
        *(undefined4 **)((int)reader + 8) = puVar2;
      }
      puVar2 = (undefined4 *)FUN_00a44e40(&uStack_4);
      if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
        *puVar2 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
      }
      else {
        *puVar2 = **(undefined4 **)((int)reader + 8);
        *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

