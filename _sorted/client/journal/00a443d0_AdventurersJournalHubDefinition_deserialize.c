// addr: 0x00a443d0
// name: AdventurersJournalHubDefinition_deserialize
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalHubDefinition_deserialize(void * this, void * reader)
    */

void __thiscall AdventurersJournalHubDefinition_deserialize(void *this,void *reader)

{
                    /* Reads ten 32-bit fields from the packet reader into a hub definition, setting
                       the reader error flag on truncated input. */
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
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0xc) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x14) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x18) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x20) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x24) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  return;
}

