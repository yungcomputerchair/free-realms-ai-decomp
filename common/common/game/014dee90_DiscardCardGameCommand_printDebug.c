// addr: 0x014dee90
// name: DiscardCardGameCommand_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void DiscardCardGameCommand_printDebug(void * this, void * out) */

void __thiscall DiscardCardGameCommand_printDebug(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints a Discard Card Game Command debug dump including base command data,
                       card id, instance id pair, and cost-effect flag. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Discard Card Game Command\n",0x1a);
  GameCommand_dump(this,out);
  _sprintf(local_3ec,"Card ID: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Instance ID: %d, %d\n",*(undefined4 *)((int)this + 0x28));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Cost Effect: %d\n",(uint)*(byte *)((int)this + 0x4c));
  return;
}

