// addr: 0x0142a000
// name: FatalErrorGameCommand_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void FatalErrorGameCommand_printDebug(void * this, void * out) */

void __thiscall FatalErrorGameCommand_printDebug(void *this,void *out)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints a Fatal Error Game Command debug dump and emits the contained error
                       message string. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Fatal Error Game Command\n",0x19);
  GameCommand_dump(this,out);
  iVar2 = Exception_getSourceFile();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  _sprintf(local_3ec,"Error Message: %s\n",iVar2);
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  return;
}

