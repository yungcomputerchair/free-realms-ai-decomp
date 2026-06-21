// addr: 0x014e1d10
// name: BatchControlGameCommand_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void BatchControlGameCommand_printDebug(void * this, void * out) */

void __thiscall BatchControlGameCommand_printDebug(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints a Batch Control Game Command debug dump and its batch-control status
                       value. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Batch Control Game Command\n",0x1b);
  GameCommand_dump(this,out);
  _sprintf(local_3ec,"Batch Control Status: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

