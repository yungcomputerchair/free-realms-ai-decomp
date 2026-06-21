// addr: 0x00a45880
// name: AdventurersJournalInfoData_deserializeHubQuestDefinitions
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalInfoData_deserializeHubQuestDefinitions(void * reader,
   void * hubQuestDefinitionMap) */

void __cdecl
AdventurersJournalInfoData_deserializeHubQuestDefinitions(void *reader,void *hubQuestDefinitionMap)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  int iVar4;
  undefined4 uStack_4;
  
                    /* Clears the hub-quest-definition map, reads a count, then reads keyed records
                       and deserializes each hub quest definition. */
  iVar3 = *(int *)((int)hubQuestDefinitionMap + 8);
  while (iVar3 != 0) {
    FUN_00a43710(iVar3);
    iVar3 = *(int *)((int)hubQuestDefinitionMap + 8);
  }
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar3 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar3 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
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
      this = (void *)FUN_00a45050(&uStack_4);
      AdventurersJournalHubQuestDefinition_deserialize(this,reader);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

