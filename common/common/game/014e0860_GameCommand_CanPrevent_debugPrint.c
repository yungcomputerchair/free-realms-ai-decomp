// addr: 0x014e0860
// name: GameCommand_CanPrevent_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_CanPrevent_debugPrint(void * this, void * out) */

void __thiscall GameCommand_CanPrevent_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints the can-prevent game command and lists player ids that can
                       prevent. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f0;
  FUN_01241650("Can Prevent Game Command\n",0x19);
  GameCommand_dump(this,out);
  local_3f0 = *(undefined4 **)((int)this + 0x2c);
  if (local_3f0 < *(undefined4 **)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)((int)this + 0x28);
  if (*(undefined4 **)((int)this + 0x2c) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_3f0) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x2c) <= puVar3) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"Player %d can prevent\n",*puVar3);
    pcVar2 = local_3ec;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
    if (*(undefined4 **)((int)this + 0x2c) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  return;
}

