// addr: 0x014b15d0
// name: SynchronizationCommand_RemoveInstances_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void SynchronizationCommand_RemoveInstances_dump(void * this, void * out) */

void __thiscall SynchronizationCommand_RemoveInstances_dump(void *this,void *out)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the SynchronizationCommand_RemoveInstances
                       command, including the instance ID pairs being removed. Evidence is the
                       command banner and field format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  thunk_FUN_0140c290(out);
  FUN_01241650("Remove Instances Synchronization Command",0x28);
  uVar2 = *(uint *)((int)this + 0xc);
  if (uVar2 < *(uint *)((int)this + 8)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar2) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0xc) <= uVar4) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"Instance: (%d, %d)\n",*(undefined4 *)(uVar4 + 4));
    if (*(uint *)((int)this + 0xc) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 0x10;
  }
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  return;
}

