// addr: 0x014ae090
// name: SynchronizationCommand_ChangeFlags_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x014ae159) */
/* Setting prototype: void SynchronizationCommand_ChangeFlags_dump(void * this, void * out) */

void __thiscall SynchronizationCommand_ChangeFlags_dump(void *this,void *out)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the SynchronizationCommand_ChangeFlags command,
                       including account ID, flags/mask, and each affected instance. Evidence is the
                       command banner and field format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("SynchronizationCommand_ChangeFlags\n",0x23);
  thunk_FUN_0140c290(out);
  _sprintf(local_3ec,"AccountID: %d\n",*(undefined4 *)((int)this + 0x14));
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Flags: %d [%d]\n",*(undefined4 *)((int)this + 0x18));
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar2 = *(uint *)((int)this + 0xc);
    if (uVar2 < *(uint *)((int)this + 8)) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar2) break;
    if ((*(uint *)((int)this + 0xc) <= uVar4) &&
       (FUN_00d83c2d(), *(uint *)((int)this + 0xc) <= uVar4)) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"Instance: (%d, %d)\n",*(undefined4 *)(uVar4 + 4));
    pcVar3 = local_3ec;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
    if (*(uint *)((int)this + 0xc) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 0x10;
  }
  return;
}

