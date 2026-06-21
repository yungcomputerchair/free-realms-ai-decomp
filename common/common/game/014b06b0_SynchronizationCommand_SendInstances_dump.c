// addr: 0x014b06b0
// name: SynchronizationCommand_SendInstances_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void SynchronizationCommand_SendInstances_dump(void * this, void * out) */

void __thiscall SynchronizationCommand_SendInstances_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint local_6c;
  char local_68 [100];
  uint local_4;
  
                    /* Writes a debug/text dump of the SynchronizationCommand_SendInstances command,
                       including delivery ID, base archetype ID, archetype count, archetypes, and
                       non-tradable instances. Evidence is the command banner and field format
                       strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)&local_6c;
  FUN_01241650("SendInstances Command\n",0x16);
  thunk_FUN_0140c290(out);
  _sprintf(local_68,"Delivery ID: %d\n",*(undefined4 *)((int)this + 4));
  pcVar2 = local_68;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
  _sprintf(local_68,"Base ArchetypeID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_68;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
  _sprintf(local_68,"Archetype Count: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_68;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
  local_6c = *(uint *)((int)this + 0x18);
  if (local_6c < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x14);
  if (*(uint *)((int)this + 0x18) < uVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (uVar3 == local_6c) break;
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x18) <= uVar3) {
      FUN_00d83c2d();
    }
    _sprintf(local_68,"Archetype: %d\n",*(undefined4 *)(uVar3 + 4));
    pcVar2 = local_68;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
    if (*(uint *)((int)this + 0x18) <= uVar3) {
      FUN_00d83c2d();
    }
    uVar3 = uVar3 + 0x10;
  }
  FUN_01241650("NonTradableInstances: \n",0x17);
  local_6c = *(uint *)((int)this + 0x2c);
  if (local_6c < *(uint *)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x2c) < uVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar3 == local_6c) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      FUN_00d83c2d();
    }
    _sprintf(local_68,"Archetype: %d\n",*(undefined4 *)(uVar3 + 4));
    pcVar2 = local_68;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      FUN_00d83c2d();
    }
    uVar3 = uVar3 + 0x10;
  }
  return;
}

