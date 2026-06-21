// addr: 0x014b00a0
// name: SynchronizationCommand_SetDesired_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void SynchronizationCommand_SetDesired_dump(void * this, void * out) */

void __thiscall SynchronizationCommand_SetDesired_dump(void *this,void *out)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the SynchronizationCommand_SetDesired command,
                       including the desired instance count and instance ID pairs. Evidence is the
                       command banner and field format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("SynchronizationCommand_SetDesired\n",0x22);
  thunk_FUN_0140c290(out);
  if (*(int *)((int)this + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 3;
  }
  _sprintf(local_3ec,"Num Instances: %d\n",iVar3);
  puVar2 = *(undefined4 **)((int)this + 0xc);
  if (puVar2 < *(undefined4 **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  puVar5 = *(undefined4 **)((int)this + 8);
  if (*(undefined4 **)((int)this + 0xc) < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar2) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0xc) <= puVar5) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"Instance: (%d, %d)\n",*puVar5);
    pcVar4 = local_3ec;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
    if (*(undefined4 **)((int)this + 0xc) <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 2;
  }
  return;
}

