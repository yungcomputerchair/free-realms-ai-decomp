// addr: 0x013ce480
// name: Deck_clearCardEntryPointers
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deck_clearCardEntryPointers(void * this) */

void __fastcall Deck_clearCardEntryPointers(void *this)

{
  uint uVar1;
  uint uVar2;
  
                    /* Clears the pointer/value at +4 for each 8-byte entry in the range described
                       by fields +0x7c and +0x80, with bounds checks through FUN_00d83c2d. It is
                       used before cloning/selecting deck objects for match and lobby deck-selection
                       commands. */
  uVar1 = *(uint *)((int)this + 0x80);
  if (uVar1 < *(uint *)((int)this + 0x7c)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x7c);
  if (*(uint *)((int)this + 0x80) < uVar2) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffff88) {
      FUN_00d83c2d();
    }
    if (uVar2 == uVar1) break;
    if (this == (void *)0xffffff88) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x80) <= uVar2) {
      FUN_00d83c2d();
    }
    *(undefined4 *)(uVar2 + 4) = 0;
    if (*(uint *)((int)this + 0x80) <= uVar2) {
      FUN_00d83c2d();
    }
    uVar2 = uVar2 + 8;
  }
  return;
}

