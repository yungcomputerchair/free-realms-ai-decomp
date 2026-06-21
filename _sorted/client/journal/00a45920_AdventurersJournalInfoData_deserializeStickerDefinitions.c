// addr: 0x00a45920
// name: AdventurersJournalInfoData_deserializeStickerDefinitions
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalInfoData_deserializeStickerDefinitions(void * reader,
   void * stickerDefinitionMap) */

void __cdecl
AdventurersJournalInfoData_deserializeStickerDefinitions(void *reader,void *stickerDefinitionMap)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  int iVar4;
  undefined4 uStack_4;
  
                    /* Clears the sticker-definition map, reads an entry count, then reads each
                       integer key, inserts a default sticker record, and deserializes its nine
                       fixed fields. */
  iVar3 = *(int *)((int)stickerDefinitionMap + 8);
  while (iVar3 != 0) {
    FUN_00a43780(iVar3);
    iVar3 = *(int *)((int)stickerDefinitionMap + 8);
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
      this = (void *)FUN_00a450f0(&uStack_4);
      AdventurersJournalStickerDefinition_deserialize(this,reader);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

