// addr: 0x014c25c0
// name: LobbyCommand_RemoveBuddies_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_RemoveBuddies_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_RemoveBuddies_debugPrint(void *this,void *out)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a Remove Buddies lobby command and iterates its buddy account id
                       vector. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Remove Buddies Lobby Command\n",0x1d);
  AccountCommand_dump(this,out);
  puVar1 = *(undefined4 **)((int)this + 0x10);
  if (puVar1 < *(undefined4 **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  puVar2 = *(undefined4 **)((int)this + 0xc);
  if (*(undefined4 **)((int)this + 0x10) < puVar2) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (puVar2 == puVar1) break;
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= puVar2) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"Buddy account ID: %d\n",*puVar2);
    if (*(undefined4 **)((int)this + 0x10) <= puVar2) {
      FUN_00d83c2d();
    }
    puVar2 = puVar2 + 1;
  }
  return;
}

