// addr: 0x00a44540
// name: AdventurersJournalHubQuestDefinition_deserialize
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalHubQuestDefinition_deserialize(void * this, void *
   reader) */

void __thiscall AdventurersJournalHubQuestDefinition_deserialize(void *this,void *reader)

{
                    /* Reads three 32-bit fields for a hub quest definition from the packet reader,
                       with the same bounds/error handling as other journal record readers. */
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  return;
}

